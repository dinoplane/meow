using Antlr4;
using Antlr4.Runtime;
using Antlr4.Runtime.Tree;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TestApplication
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnClickThis_Click(object sender, EventArgs e)
        {
            ICharStream charStream =  CharStreams.fromString(codeBox.Text);
            MeowLexer meowLexer = new MeowLexer(charStream);
            CommonTokenStream commonTokenStream = new CommonTokenStream(meowLexer);
            MeowParser meowParser = new MeowParser(commonTokenStream);
            MeowParser.InitContext ctx = meowParser.init();
            MeowActionsListener meowActionsListener = new MeowActionsListener();


            ParseTreeWalker walker = new ParseTreeWalker();
            walker.Walk(meowActionsListener, ctx);


            outBox.Text = meowActionsListener.numvals.ToString();
        }

    }
}
