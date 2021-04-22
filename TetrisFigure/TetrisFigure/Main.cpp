#include "Header.h"

int main()
{
    IFigure** figure = new IFigure * [7];
    ShowFigure show;

    figure[0] = new OrangeRicky();
    show.SetFigure(figure[0]);
    show.Show();

    figure[1] = new BlueRicky();
    show.SetFigure(figure[1]);
    show.Show();

    figure[2] = new Hero();
    show.SetFigure(figure[2]);
    show.Show();

    figure[3] = new ClevelandZ();
    show.SetFigure(figure[3]);
    show.Show();

    figure[4] = new RhodeIslandZ();
    show.SetFigure(figure[4]);
    show.Show();

    figure[5] = new SmashBoy();
    show.SetFigure(figure[5]);
    show.Show();

    figure[6] = new Teewee();
    show.SetFigure(figure[6]);
    show.Show();

    for (int i = 0; i < 7; i++) {
        delete[] figure[i];
    }

    delete[] figure;

    system("pause > NULL");
}
