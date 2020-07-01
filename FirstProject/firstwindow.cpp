#include "firstwindow.h"
#include "ui_firstwindow.h"
#include "dialogsettings.h"
#include "tablewindow.h"
#include "querywindow.h"

#include <QMessageBox>
#include <QMdiSubWindow>
#include <QSqlRelation>
#include <QInputDialog>

FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}


void FirstWindow::on_action_4_triggered()
{
    DialogSettings dialog;
    if (dialog.exec() == QDialog::Accepted) {
        QMessageBox::information(this, "Предупреждение", "Изменения настроек вступят в силу только после перезапуска программы");
    }
}

void FirstWindow::on_Sport_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("name");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("sport", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Club_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("name");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("club", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Competition_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("sport");
    headerTitles.append("date");
    headerTitles.append("sportobject");
    headerTitles.append("organizer");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("competition", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Organizer_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("name");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("organizer", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Sportobject_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("name");
    headerTitles.append("type");
    headerTitles.append("sport");
    headerTitles.append("vmestimost");
    headerTitles.append("cover");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("sportobject", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Sportsman_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("family_name");
    headerTitles.append("name");
    headerTitles.append("category");
    headerTitles.append("sports_club");
    headerTitles.append("sport");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("sportsman", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Trainer_triggered()
{
    QStringList headerTitles;
    headerTitles.append("id");
    headerTitles.append("family_name");
    headerTitles.append("name");
    headerTitles.append("sport");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("trainer", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Competition_has_sportsman_triggered()
{
    QStringList headerTitles;
    headerTitles.append("competition_id");
    headerTitles.append("sportsman_id");
    headerTitles.append("place");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("competition_has_sportsman", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}

void FirstWindow::on_Sportsman_has_trainer_triggered()
{
    QStringList headerTitles;
    headerTitles.append("sportsman_id");
    headerTitles.append("trainer_id");
    QMap<int, QSqlRelation> relations;
    //relations.insert(2, QSqlRelation("Y", "id", "title"));
    TableWindow *window = new TableWindow("sportsman_has_trainer", headerTitles, relations, this);
    window->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->show();
}


void FirstWindow::on_Zapros_1_1part_triggered()
{
    QSqlQuery query;
        query.prepare("SELECT  name as 'Спортобъект', cover as 'Покрытие' "
                      "FROM sportobject "
                      "WHERE cover =:cover");
        bool ok;
        QString cover=QInputDialog::getText(this, "введите тип покрытия", "покрытие:", QLineEdit::Normal, "", &ok);
        if (!ok) return;
        query.bindValue(":cover", cover);
        query.exec();
        QStringList names;
        //names.append("Номер отделения");
        //names.append("Количество покупателей");
        QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
        QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
        sw->setAttribute(Qt::WA_DeleteOnClose);
        sw->setWindowTitle("Перечень спортсооружений с покрытием"+cover);//zagolovok okna
        sw->show();
}

void FirstWindow::on_Zapros_1_2_part_triggered()
{
   QSqlQuery query;
        query.prepare("SELECT name as 'Спортобъект', capacity_vmestimost as 'Вместимость спортобъекта' "
                      "FROM sportobject "
                      "WHERE capacity_vmestimost>:chislo");
        bool ok;
        QString chislo=QInputDialog::getText(this, "введите количество", "вместимость более:", QLineEdit::Normal, "", &ok);
        if (!ok) return;
        query.bindValue(":chislo", chislo);
        query.exec();
        QStringList names;
        //names.append("Номер отделения");
        //names.append("Количество покупателей");
        QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
        QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
        sw->setAttribute(Qt::WA_DeleteOnClose);
        sw->setWindowTitle("Перечень спортсооружений вместимостью более"+chislo);//zagolovok okna
        sw->show();


}

void FirstWindow::on_Zapros_2_triggered()
{
        QSqlQuery query;
         query.prepare("SELECT sportsman.family_name as 'Фамилия спортсмена', sportsman.name as 'Имя спортсмена', sportsman.sports_club as 'Клуб', sportsman.sport as 'Вид спорта' FROM sportsman WHERE (sportsman.sports_club =:chislo) or (sportsman.sport=:chislo)");
         bool ok;
         QString chislo=QInputDialog::getText(this, "введите вид спорта или клуб", "вид спорта или клуб", QLineEdit::Normal, "", &ok);
         if (!ok) return;
         query.bindValue(":chislo", chislo);
         query.exec();
         QStringList names;
         //names.append("Номер отделения");
         //names.append("Количество покупателей");
         QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
         QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
         sw->setAttribute(Qt::WA_DeleteOnClose);
         sw->setWindowTitle("Спортсмены определенного вида спорта либо клуба");//zagolovok okna
         sw->show();

}

void FirstWindow::on_Zapros_3_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT sportsman.family_name as 'Фамилия спортсмена', sportsman.name as 'Имя спортсмена', sportsman.category as 'Разряд', trainer.family_name as 'Фамилия тренера', trainer.name as 'Имя тренера' "
                  "FROM sportsman inner join (sportsman_has_trainer inner join trainer on sportsman_has_trainer.trainer_id=trainer.id) on sportsman_has_trainer.sportsman_id=sportsman.id "
                  "WHERE (sportsman.category =:ch) or (trainer.family_name =:ch)");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите разряд спортсмена либо имя его тренера", "разряд спортсмена или имя его тренера:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Список спортсменов определенного разряда либо тренирующихся у одного тренера");//zagolovok okna
    sw->show();


}

void FirstWindow::on_zapros_5_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT sportsman.family_name as 'Cпортсмен',sportsman.name as 'Имя спортсмена', sportsman.sport as 'Вид спорта',trainer.family_name as 'Фамилия тренера', trainer.name as 'Имя тренера' "
                  "FROM sportsman_has_trainer,sportsman, trainer "
                  "WHERE sportsman.family_name=:ch and sportsman_id=sportsman.id and trainer_id=trainer.id");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите фамилию спортсмена", "фамилия спортсмена:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Тренеры спортсмена "+ch);//zagolovok okna
    sw->show();


}

void FirstWindow::on_zapros_6_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT competition.date as'Дата соревнования', competition.sportobject as 'Спортобъект', competition.organizer as 'Организатор' "
                  "FROM competition "
                  "WHERE date>:chis");
    bool ok;
    QString chis=QInputDialog::getText(this, "введите дату год-месяц-день соревнования", "дата соревнования:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":chis", chis);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Соревнования,прошедшие после определенной даты");//zagolovok okna
    sw->show();
}


void FirstWindow::on_zapros_7_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT competition_has_sportsman.competition_id as 'Номер соревнования', sportsman.family_name as 'Фамилия спортсмена', sportsman.name as 'Имя спортсмена', competition_has_sportsman.place as 'Призовое место' "
                  "FROM competition_has_sportsman,sportsman "
                  "WHERE place<4 and competition_id=:ch and sportsman_id=sportsman.id");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите № соревнования", "№ соревнования:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Призеры соревнования №"+ch);//zagolovok okna
    sw->show();
}

void FirstWindow::on_zapros_8_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT  competition.id as 'Номер соревнования',competition.date as 'Дата соревнования', competition.sportobject as 'Спортобъект', competition.sport as 'Вид спорта' "
                  "FROM competition "
                  "WHERE sportobject=:ch");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите имя спортобъекта", "имя спортобъекта:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Список соревнований");//zagolovok okna
    sw->show();
}

void FirstWindow::on_zapros_9_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT sportsman.family_name as 'Фамилия спортсмена', sportsman.name as 'Имя спортсмена', club.name as 'Клуб', competition.date as 'Дата соревнования'"
                  "FROM competition, sportsman, club, competition_has_sportsman "
                  "WHERE (sportsman.club_id=club.id) and (competition_has_sportsman.sportsman_id=sportsman.id) and (competition_has_sportsman.competition_id=competition.id) and(date =:ch)");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите дату соревнования", "дата соревнования:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Клубы и спортсмены, учавствующие в соревнованих на выбранную дату");//zagolovok okna
    sw->show();

}

void FirstWindow::on_zapros_10_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT trainer.family_name as 'Фамилия тренера', trainer.name as 'Имя тренера' , trainer.sport as 'Вид спорта' "
                  "FROM trainer "
                  "WHERE sport=:ch");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите вид спорта", "вид спорта:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Список тренеров по "+ch+"у");//zagolovok okna
    sw->show();




}

void FirstWindow::on_zapros_11_triggered()
{
    QSqlQuery query;
            query.prepare("SELECT competition.organizer as 'Организатор', count(*) as 'Число проведенных соревнований' FROM  competition WHERE competition.organizer=:cover");
            bool ok;
            QString cover=QInputDialog::getText(this, "введите имя организатора", "организатор:", QLineEdit::Normal, "", &ok);
            if (!ok) return;
            query.bindValue(":cover", cover);
            query.exec();
            QStringList names;
            QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
            QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
            sw->setAttribute(Qt::WA_DeleteOnClose);
            sw->setWindowTitle("Количество Соревнований,организованных "+cover);//zagolovok okna
            sw->show();
}

void FirstWindow::on_zapros_13_triggered()
{
    QStringList headerTitles;
        QSqlQuery *query = new QSqlQuery("SELECT competition.id as 'Номер соревнования', competition.sportobject as 'Спортобъект', competition.date as 'Дата соревнования' "
                                         "FROM competition "
                                         "WHERE (date >= '2019-08-01') and (date <= '2019-09-01')");
        QueryWindow *window = new QueryWindow("Спортобъекты и даты проведения соревнований в них с 1-го августа по 1-е сентября",query, headerTitles,this);
        window->setAttribute(Qt::WA_DeleteOnClose);
        QMdiSubWindow *sw = ui->mdiArea->addSubWindow(window);
        sw->setAttribute(Qt::WA_DeleteOnClose);
        sw->show();

}

void FirstWindow::on_exit_triggered()
{
    close();
}

void FirstWindow::on_zapros_14_triggered()
{
    QSqlQuery query;
                query.prepare("SELECT competition.date as 'Дата соревнования', competition.sportobject as 'Спортобъект', competition.organizer as 'Организатор' FROM competition WHERE organizer=:cover");
                bool ok;
                QString cover=QInputDialog::getText(this, "введите имя организатора", "организатор:", QLineEdit::Normal, "", &ok);
                if (!ok) return;
                query.bindValue(":cover", cover);
                query.exec();
                QStringList names;
                QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
                QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
                sw->setAttribute(Qt::WA_DeleteOnClose);
                sw->setWindowTitle("Соревнования,организованные "+cover);//zagolovok okna
                sw->show();
}

void FirstWindow::on_zapros_15_triggered()
{
    QSqlQuery query;
    query.prepare("SELECT  competition.id as 'Номер соревнования',competition.date as 'Дата соревнования', competition.sportobject as 'Спортобъект', competition.sport as 'Вид спорта' "
                  "FROM competition "
                  "WHERE sport=:ch");
    bool ok;
    QString ch=QInputDialog::getText(this, "введите вид спорта", "вид спорта:", QLineEdit::Normal, "", &ok);
    if (!ok) return;
    query.bindValue(":ch", ch);
    query.exec();
    QStringList names;
    QueryWindow *w=new QueryWindow(QString("Title"),&query,names,this);
    QMdiSubWindow *sw=ui->mdiArea->addSubWindow(w);
    sw->setAttribute(Qt::WA_DeleteOnClose);
    sw->setWindowTitle("Список соревнований по "+ch);//zagolovok okna
    sw->show();
}





