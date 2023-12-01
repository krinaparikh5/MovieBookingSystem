#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class userInfo
{
public:
    string name;
    string email;

    userInfo()
    {
        cout << "Please enter your name (First, Last). ";
        getline(cin, name);
        cout << "Please enter a valid email address. ";
        cin >> email;
    }
};

void movieSummary(int *type)
{
    string summaries[5] = {"\"Barbie and Ken are having the time of their lives in the\ncolorful and seemingly perfect world of Barbie Land.\nHowever, when they get a chance to go to the real world,\nthey soon discover the joys and perils of living among\nhumans.\"", "\"Years before he becomes the tyrannical president of\nPanem, 18-year-old Coriolanus Snow remains the last hope\nfor his fading lineage. With the 10th annual Hunger Games\nfast approaching, the young Snow becomes alarmed when\nhe's assigned to mentor Lucy Gray Baird from District 12.\nUniting their instincts for showmanship and political savvy,\nthey race against time to ultimately reveal who's a songbird\nand who's a snake.\"", "\"A troubled security guard begins working at Freddy\nFazbear's Pizzeria. While spending his first night on the job,\nhe realizes the late shift at Freddy's won't be so easy to\nmake it through.\"", "\"Carol Danvers, aka Captain Marvel, has reclaimed her\nidentity from the tyrannical Kree and taken revenge on the\nSupreme Intelligence. However, unintended consequences\nsee her shouldering the burden of a destabilized universe.\nWhen her duties send her to an anomalous wormhole\nlinked to a Kree revolutionary, her powers become\nentangled with two other superheroes to form the Marvels.\"", "\"The Grinch and his loyal dog, Max, live a solitary existence\ninside a cave on Mount Crumpet. His main source of\naggravation comes during Christmastime when his\nneighbours in Whoville celebrate the holidays with a bang.\nWhen the Whos decide to make Christmas bigger and\nbrighter, the disgruntled Grinch realises there is one way to\ngain peace and quiet. With help from Max, the green grump\nhatches a scheme to pose as Santa Claus, steal Christmas\nand silence the Whos' holiday cheer once and for all.\""};

    if(*type == 1)
    {
        cout << endl << summaries[0];
    }

    else if(*type == 2)
    {
        cout << endl << summaries[1];
    }

    else if(*type == 3)
    {
        cout << endl << summaries[2];
    }

    else if(*type == 4)
    {
        cout << endl << summaries[3];
    }

    else if(*type == 5)
    {
        cout << endl << summaries[4];
    }
    else
    {
        cout << "Please enter a valid movie (case sensitive). ";
    }
}

void seating(int movie, int totalSeats, string chosenSeat[])
{
    char row[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int seat[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "                              SCREEN                              " << endl;

    if (movie == 1)
    {
        for(int i = 0; i < 10; i++)
        {
            cout << "              ";
            for (int a = 0; a < 10; a++)
            {
                if (i == 5 && a == 3 || i == 2 && a == 1 || i == 8 && a == 8 || i == 0 && a == 2 || i == 4 && a == 3 || i == 6 && a == 2)
                {
                    cout << "    ";
                }
                else
                {
                    cout << row[i] << seat[a] << "  ";
                }
            }
            cout << endl;
        }
    }
    else if (movie == 2)
    {
        for(int i = 0; i < 10; i++)
        {
            cout << "              ";
            for (int a = 0; a < 10; a++)
            {
                if (i == 2 && a == 4 || i == 6 && a == 2 || i == 0 && a == 9 || i == 7 && a == 0 || i == 9 && a == 1 || i == 5 && a == 2)
                {
                    cout << "    ";
                }
                else
                {
                    cout << row[i] << seat[a] << "  ";
                }
            }
            cout << endl;
        }
    }
    else if (movie == 3)
    {
        for(int i = 0; i < 10; i++)
        {
            cout << "              ";
            for (int a = 0; a < 10; a++)
            {
                if (i == 2 && a == 4 || i == 1 && a == 5 || i == 0 && a == 2 || i == 6 && a == 9 || i == 8 && a == 4 || i == 2 && a == 5)
                {
                    cout << "    ";
                }
                else
                {
                    cout << row[i] << seat[a] << "  ";
                }
            }
            cout << endl;
        }
    }
    else if (movie == 4)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "              ";
            for (int a = 0; a < 10; a++)
            {
                if (i == 7 && a == 4 || i == 2 && a == 5 || i == 4 && a == 8 || i == 2 && a == 1 || i == 6 && a == 3 || i == 9 && a == 2)
                {
                    cout << "    ";
                }
                else
                {
                    cout << row[i] << seat[a] << "  ";
                }
            }
            cout << endl;
        }
    }
    else if (movie == 5)
    {
        for(int i = 0; i < 10; i++)
        {
            cout << "              ";
            for (int a = 0; a < 10; a++)
            {
                if (i == 6 && a == 4 || i == 3 && a == 5 || i == 7 && a == 8 || i == 9 && a == 1 || i == 4 && a == 3 || i == 6 && a == 2)
                {
                    cout << "    ";
                }

                else
                {
                    cout << row[i] << seat[a] << "  ";
                }
            }
            cout << endl;
        }
    }

    for (int i = 0; i < totalSeats; i++)
    {
        cout << "Pick which row and seat you want. ";
        cin >> chosenSeat[i];
    }
}

int main()
{
    userInfo user1;
    string summary;
    int summaryType;
    string movieNames[5] = {"1.) Barbie", "2.) The Hunger Game: The Ballad of Songbirds & Snakes", "3.) Five Nights at Freddy's", "4.) The Marvels", "5.) The Grinch"};

    cout << endl << "These are the movies showing today." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "     " << movieNames[i] << endl;
    }

    cout << endl << "Do you want to read the summaries for the movies? (yes/no)? ";
    cin >> summary;

    if (summary == "yes")
    {
        while (summary == "yes")
        {
            cout << endl << "Which movie do you want the summary for? Enter the number that corresponds with the movie. ";
            cin >> summaryType;
            movieSummary(&summaryType);
            cout << endl << "Would you like to see another summary? (yes/no) ";
            cin >> summary;
        }

        cout << endl << "These are the movies showing today." << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "     " << movieNames[i] << endl;
        }
    }

    int movie;
    float price;
    int adultTickets, childTickets, totalSeats;
    cout << endl << "Which movie do you want to see? Enter the number that corresponds with the movie. ";
    cin >> movie;

    string timings[5] = {"1.) 1:30pm", "2.) 3:00pm", "3.) 5:00pm", "4.) 7:30pm", "5.) 9:00pm"};
    for (int i = 0; i < 5; i ++)
    {
        cout << endl << timings[i];

    }

    int showing;
    cout << endl << "What time do you want to go? (Enter corresponding number) ";
    cin >> showing;
    cout << endl << "How many child tickets do you want? ($10 each) ";
    cin >> childTickets;
    price = (10 * childTickets);
    cout << "Total: $" << fixed << setprecision(2) << price << endl;

    cout << endl << "How many adult tickets do you want? ($15 each) ";
    cin >> adultTickets;
    price += 15 * adultTickets;
    cout << "Total: $" << fixed << setprecision(2) << price << endl;

    totalSeats = adultTickets + childTickets;

    string chosenSeat[totalSeats];
    seating(movie, totalSeats, chosenSeat);

    string concessions, drinks, snacks, saltySnacks, candy;
    int drinkNum = 0, saltyNum = 0, candyNum = 0;
    string bevChoice[100];
    string userSaltyChoice[100];
    string userCandyChoice[100];

    cout << "Would you like to buy any concessions? (yes/no) ";
    cin >> concessions;

    if (concessions == "yes")
    {
        cout << endl << "Would you like any drinks? (yes/no) ";
        cin >> drinks;

        if (drinks == "yes")
        {

            cout << endl << "How many drinks would you like? ($3.50 each) ";
            cin >> drinkNum;
            string bev[5] = {"Coca-Cola", "Sprite", "Fanta", "Dr. Pepper", "Lemonade"};
            for (int i = 0; i < drinkNum; i++)
            {
                price = 3.50 + price;
                cout << "Which drink would you like? " << endl;
                for (int i = 0; i < 5; i++)
                {
                    cout << "     " << bev[i] << endl;
                }
                cin >> bevChoice[i];
                cout << "Total price: $" << fixed << setprecision(2) << price << endl;
            }
        }

        cout << endl << "Would you like any snacks? (yes/no) ";
        cin >> snacks;

        if (snacks == "yes")
        {
            cout << endl << "Would you like salty snacks? (yes/no) ";
            cin >> saltySnacks;

            if (saltySnacks == "yes")
            {
                string saltyChoice[4] = {"Popcorn", "Soft Pretzels", "Nachos","Pizza"};

                for (int i = 0; i < 4; i++)
                {
                    cout << "     " << saltyChoice[i] << endl;
                }

                cout << "How many salty snacks do you want? ($9.99 each) ";
                cin >> saltyNum;

                cout << endl;
                for (int i = 0; i < saltyNum; i++)
                {
                    price = 9.99 + price;
                    cout << "Which salty snack would you like? ";
                    cin >> userSaltyChoice[i];

                    cout << "Total price: $" << fixed << setprecision(2) << price << endl;
                }
            }

            cout << endl << "Would you like candy? (yes/no) ";
            cin >> candy;

            if (candy == "yes")
            {
                string candyChoice[7] = {"Skittle", "Starbursts", "Airheads", "M&Ms", "Crunch", "Kitkat", "Hershey's"};
                for (int i = 0; i < 7; i++)
                {
                    cout << "     " << candyChoice[i] << endl;
                }

                cout << "How many candies do you want? ($5.50 each) ";
                cin >> candyNum;

                cout << endl;
                for (int i = 0; i < candyNum; i++)
                {
                    price += 5.50;
                    cout << "Which candy would you like? ";
                    cin >> userCandyChoice[i];
                    cout << "Total price: $" << fixed << setprecision(2) << price << endl;

                }

            }

        }
    }

    cout << endl << endl << "CONFIRMATION:" << endl << endl;

    string movieNeed[5] = {"Barbie", "The Hunger Game: The Ballad of Songbirds & Snakes", "Five Nights at Freddy's", "The Marvels", "The Grinch"};
    string timing[5] = {"1:30pm", "3:00pm", "5:00pm", "7:30pm", "9:00pm"};

    cout << user1.name << endl;
    cout << user1.email << endl;
    cout << "You booked " << totalSeats << " seat(s) for the movie: " << movieNeed[movie - 1] << " @ " << timing[showing - 1] <<  ".";
    cout << " You have " << childTickets << " child ticket(s) and " << adultTickets << " adult Ticket(s) for seat(s) ";
    for (int i = 0; i < totalSeats; i++)
    {
        cout << chosenSeat[i];
        if (i < totalSeats - 1)
        {
            cout << ", ";
        }
    }

    cout << ".";
    cout << endl << "You ordered " << drinkNum << " drink(s) and " << saltyNum + candyNum << " snack(s)." << endl;

    if (drinkNum != 0) {
        cout << "These are your drink(s):" << endl;
        for (int i = 0; i < drinkNum; i++)
        {
            cout << bevChoice[i];
            if (i < drinkNum - 1)
            {
                cout << ", ";
            }
        }
    }
    int a = 0;
    if (saltyNum + candyNum != 0)
    {
        cout << endl << "These are your snack(s):" << endl;
        for (int i = 0; i < saltyNum; i++)
        {
            cout << userSaltyChoice[i];
            if (i < saltyNum -1)
            {
                cout << ", ";
            }
            a = a + 1;
        }

        for (int i = 0; i < candyNum; i++)
        {
            if (a > 0)
            {
                cout << ", ";
            }
            cout << userCandyChoice[i];
            if (i < candyNum - 1)
            {
                cout << ", ";
            }
        }
    }

    cout << endl << "Your total is: $" << fixed << setprecision(2) << price;
    cout << endl << "Please pay at the front when you arrive. Hope you enjoy your movie!" << endl;

    return 0;
}