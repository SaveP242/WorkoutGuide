#include<iostream>
#include<ctime>
#include<fstream>
#include<windows.h>
using namespace std;
class timer
{
    public:
    int n1=3, n2=3, n3=10;
    void setinterval()
    {
        cout << "Enter time interval for exercise: ";
        cout << "Enter time interval for break: ";
    }
    void interval()
    {  
        for(int i=1; i<=n1; i++)
        {
            while(i<2)
            {
               Sleep(1000);
               cout << "Start"<< endl;
               break;
            }
           Sleep(1000);
            cout << i << endl;
        }
        
        for(int j=1; j<=n2; j++)
        {
           while (j<2)
           {
               Sleep(1000);
               cout << "Break" << endl;
               break;
           }
           Sleep(1000);
           cout << j<< endl;           
        }
    }
};

class weekdays
{
    public:
    int getday()
    {
        time_t now=time(0) ;
        tm *ltm = localtime(&now);
        return ltm->tm_wday;
    }
};

class Twister
{
    timer time;
    public:
    int met=2;
    int functime=time.n1+time.n2+1;
    void twister()
    {
        cout << "Twister"<< endl;
       Sleep(1000);
        time.interval();
    }    
};
class Armrotation
{
    timer time;
    public:
    float met=1.5;
    int functime=time.n1+time.n2+1;
    void armrotation()
    {
        cout << "Arm Rotation & Feet Rotation"<< endl;
       Sleep(1000);
        time.interval();
    }  
};
class Legraises
{
    timer time;
    public:
    float met=2.5;
    int functime=time.n1+time.n2+1;
    void legraises()
    {
        cout << "Leg Raises"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Calfraises
{
    timer time;
    public:
    float met=1.5;
    int functime=time.n1+time.n2+1;
    void calfraises()
    {
        cout << "Calf Raises"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Mountainclimbers
{
    timer time;
    public:
    int met=4;
    int functime=time.n1+time.n2+1;
    void mountainclimbers()
    {
        cout << "Mountain Climbers"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Burpees
{
    timer time;
    public:
    int met=4;
    int functime=time.n1+time.n2+1;
    void burpees()
    {
        cout << "Burpees"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Pushups
{
    timer time;
    public:
    int met=3;
    int functime=time.n1+time.n2+1;
    void pushups()
    {
        cout << "Push Ups"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Chesttaps
{
    timer time;
    public:
    float met=3.5;
    void chesttaps()
    {
        cout << "Chest Taps"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Squats
{
    timer time;
    public:
    float met=3.5;
    void squats()
    {
        cout << "Squats"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Lunges
{
    timer time;
    public:
    float met=3.5;
    void lunges()
    {
        cout << "Lunges"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Legstretch
{
    timer time;
    public:
    float met=1;
    void legstretch()
    {
        cout << "Legstretch"<< endl;
       Sleep(1000);
        for(int n=0; n<3; n++)
        time.interval();
    }
};
class Plank
{
    timer time;
    public:
    float met=3;
    void plank()
    {
        cout << "Plank"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Situps
{
    timer time;
    public:
    float met=3;
    void situps()
    {
        cout << "Situps"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Lowerabs
{
    timer time;
    public:
    float met=3;
    void lowerabs()
    {
        cout << "Lowerabs"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Halfplank
{
    timer time;
    public:
    float met=3.5;
    void chesttaps()
    {
        cout << "Chest Taps"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Bicepcurls
{
    timer time;
    public:
    float met=3.5;
    void bicepcurls()
    {
        cout << "Bicep Curls"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Forearmcurls
{
    timer time;
    public:
    float met=3.5;
    void forearmcurls()
    {
        cout << "Forearm Curls"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Widecurls
{
    timer time;
    public:
    float met=3.5;
    void widecurls()
    {
        cout << "Wide Curls"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Deepsquatstretch
{
    timer time;
    public:
    float met=1.5;
    void deepsquatstretch()
    {
        cout << "Deep Squat Stretch"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Bridge
{
    timer time;
    public:
    float met=3;
    void bridge()
    {
        cout << "Bridge"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Sidekicks
{
    timer time;
    public:
    float met=2.5;
    void sidekicks()
    {
        cout << "Sidekicks"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Onesidesqauts
{
    timer time;
    public:
    float met=3.5;
    void sidekicks()
    {
        cout << "One Sided Squats"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Absstrech
{
    timer time;
    public:
    float met=2;
    void absstretch()
    {
        cout << "Abs Stretch"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Airbike
{
    timer time;
    public:
    float met=3.5;
    void airbike()
    {
        cout << "Air Bike"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Stepups
{
    timer time;
    public:
    float met=3;
    void stepups()
    {
        cout << "Stepups"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Footwork
{
    timer time;
    public:
    float met=2.5;
    void footwork()
    {
        cout << "Footwork Drills"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Spotrunning
{
    timer time;
    public:
    float met=2.5;
    void spotrunning()
    {
        cout << "Running in place"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Overheadpress
{
    timer time;
    public:
    float met=3;
    void overheadpress()
    {
        cout << "Overhead Press"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Chestpress
{
    timer time;
    public:
    float met=2.5;
    void chestpress()
    {
        cout << "Chest Press"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Tricepcurls
{
    timer time;
    public:
    float met=3;
    void tricepcurls()
    {
        cout << "Tricep Curls"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Shoulderraises
{
    timer time;
    public:
    float met=2.5;
    void shoulderraises()
    {
        cout << "Shoulder Raises"<< endl;
       Sleep(1000);
        time.interval();
    }
};
class Calories
{
    public:
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    int w=120; 
    float c1t = (t.met*3.5*w*(time.n1-1))/12000;
    float car = (ar.met*3.5*w*(time.n1-1))/12000;
    float clr = (lr.met*3.5*w*(time.n1-1))/12000;
    float ccr = (cr.met*3.5*w*(time.n1-1))/12000;
    float cmc = (mc.met*3.5*w*(time.n1-1))/12000;
    float cbu = (bu.met*3.5*w*(time.n1-1))/12000;
    float cpu = (pu.met*3.5*w*(time.n1-1))/12000;
    float cct = (ct.met*3.5*w*(time.n1-1))/12000;
    float csq = (sq.met*3.5*w*(time.n1-1))/12000;
    float clu = (lu.met*3.5*w*(time.n1-1))/12000;
    float cpl = (pl.met*3.5*w*(time.n1-1))/12000;
    float csu = (su.met*3.5*w*(time.n1-1))/12000;
    float cla = (la.met*3.5*w*(time.n1-1))/12000;
    float cls = (ls.met*3.5*w*(time.n1-1))/12000;
    float chp = (hp.met*3.5*w*(time.n1-1))/12000;
    float cbc = (bc.met*3.5*w*(time.n1-1))/12000;
    float cfc = (fc.met*3.5*w*(time.n1-1))/12000;
    float cwc = (wc.met*3.5*w*(time.n1-1))/12000;
    float cdss = (dss.met*3.5*w*(time.n1-1))/12000;
    float cbr = (br.met*3.5*w*(time.n1-1))/12000;
    float csk = (sk.met*3.5*w*(time.n1-1))/12000;
    float cos = (os.met*3.5*w*(time.n1-1))/12000;
    float cas = (as.met*3.5*w*(time.n1-1))/12000;
    float cab = (ab.met*3.5*w*(time.n1-1))/12000;
    float cst = (st.met*3.5*w*(time.n1-1))/12000;
    float cfw = (fw.met*3.5*w*(time.n1-1))/12000;
    float csr = (sr.met*3.5*w*(time.n1-1))/12000;
    float ccp = (cp.met*3.5*w*(time.n1-1))/12000;
    float cohp = (ohp.met*3.5*w*(time.n1-1))/12000;
    float csh = (sh.met*3.5*w*(time.n1-1))/12000;
    float ctc = (tc.met*3.5*w*(time.n1-1))/12000;
};
class Sets
{
    public:
    int s1=2;
    int s2=3;
};
class Monday
{
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    Sets s;
    public:
    float p;
    void monday()
    {
        for(int i=0; i<s.s2; i++)
        {
            t.twister();
            ar.armrotation();
            lr.legraises();
            cr.calfraises();
        }
        for(int j=0; j<s.s1; j++)
        {
            bu.burpees();
            mc.mountainclimbers();
            sq.squats();
            lu.lunges();
            ab.airbike();
        }
        for(int k=0; k<5; k++)
        ls.legstretch();
        dss.deepsquatstretch();
        pl.plank();
        su.situps();
        for(int l=0; l<4; l++)
        as.absstretch();
        for(int m=0; m<2; m++)
        {
            bc.bicepcurls();
            wc.widecurls();
        }
        for(int n=0; n<2; n++)
        fc.forearmcurls();
        br.bridge();
    }        
    float monsum()
    {
        p=(C.c1t+C.car+C.clr+C.ccr)*s.s2+(C.cmc+C.cbu+C.csq+C.clu+C.cab)*s.s1+5 * (C.cls)+C.cdss+C.cpl+C.csu+4 * (C.cas)+2 * (C.cbc+C.cwc)+2 * (C.cfc)+C.cbr;
        return p;
    }
};
class Tuesday
{
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    Sets s;
    public:
    float p;
    void tuesday()
    {
        for(int i=0; i<s.s2; i++)
        {
            t.twister();
            ar.armrotation();
            lr.legraises();
            cr.calfraises();
        }
        for(int j=0; j<s.s1; j++)
        {
            bu.burpees();
            mc.mountainclimbers();
            sq.squats();
            lu.lunges();
            ab.airbike();
        }
        for(int k=0; k<5; k++)
        ls.legstretch();
        dss.deepsquatstretch();
        pl.plank();
        su.situps();
        for(int l=0; l<4; l++)
        as.absstretch();
        for(int m=0; m<2; m++)
        {
            bc.bicepcurls();
            wc.widecurls();
        }
        for(int n=0; n<2; n++)
        fc.forearmcurls();
        br.bridge();
    }
    float tuesum()
    {
        p=(C.c1t+C.car+C.clr+C.ccr)*s.s2+(C.cmc+C.cbu+C.csq+C.clu+C.cab)*s.s1+5 * (C.cls)+C.cdss+C.cpl+C.csu+4 * (C.cas)+2 * (C.cbc+C.cwc)+2 * (C.cfc)+C.cbr;
        return p;
    }
};
class Wednesday
{
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    Sets s;
    public:
    float p;
    void wednesday()
    {
        for(int i=0; i<s.s2; i++)
        {
            t.twister();
            ar.armrotation();
            lr.legraises();
            cr.calfraises();
        }
        for(int j=0; j<s.s1; j++)
        {
            bu.burpees();
            mc.mountainclimbers();
            sq.squats();
            lu.lunges();
            ab.airbike();
        }
        for(int k=0; k<5; k++)
        ls.legstretch();
        dss.deepsquatstretch();
        pl.plank();
        su.situps();
        for(int l=0; l<4; l++)
        as.absstretch();
        for(int m=0; m<2; m++)
        {
            bc.bicepcurls();
            wc.widecurls();
        }
        for(int n=0; n<2; n++)
        fc.forearmcurls();
        br.bridge();
    }
    float wedsum()
    {
        p=(C.c1t+C.car+C.clr+C.ccr)*s.s2+(C.cmc+C.cbu+C.csq+C.clu+C.cab)*s.s1+5 * (C.cls)+C.cdss+C.cpl+C.csu+4 * (C.cas)+2 * (C.cbc+C.cwc)+2 * (C.cfc)+C.cbr;
        return p;
    }
};
class Thursday
{
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    Sets s;
    public:
    float p;
    void thursday()
    {
        for(int i=0; i<s.s2; i++)
        {
            t.twister();
            ar.armrotation();
            lr.legraises();
            cr.calfraises();
        }
        for(int j=0; j<s.s1; j++)
        {
            bu.burpees();
            mc.mountainclimbers();
            sq.squats();
            lu.lunges();
            ab.airbike();
        }
        for(int k=0; k<5; k++)
        ls.legstretch();
        dss.deepsquatstretch();
        pl.plank();
        su.situps();
        for(int l=0; l<4; l++)
        as.absstretch();
        for(int m=0; m<2; m++)
        {
            bc.bicepcurls();
            wc.widecurls();
        }
        for(int n=0; n<2; n++)
        fc.forearmcurls();
        br.bridge();
    }
    float thusum()
    {
        p=(C.c1t+C.car+C.clr+C.ccr)*s.s2+(C.cmc+C.cbu+C.csq+C.clu+C.cab)*s.s1+5 * (C.cls)+C.cdss+C.cpl+C.csu+4 * (C.cas)+2 * (C.cbc+C.cwc)+2 * (C.cfc)+C.cbr;
        return p;
    }
};
class Friday
{
    public:
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    Sets s;
    float p;
    void friday()
    {
        for(int i=0; i<s.s2; i++)
        {
            t.twister();
            ar.armrotation();
            lr.legraises();
            cr.calfraises();
        }
        for(int j=0; j<s.s1; j++)
        {
            bu.burpees();
            mc.mountainclimbers();
            sq.squats();
            lu.lunges();
            ab.airbike();
        }
        for(int k=0; k<5; k++)
        ls.legstretch();
        dss.deepsquatstretch();
        pl.plank();
        su.situps();
        for(int l=0; l<4; l++)
        as.absstretch();
        for(int m=0; m<2; m++)
        {
            bc.bicepcurls();
            wc.widecurls();
        }
        for(int n=0; n<2; n++)
        fc.forearmcurls();
        br.bridge();
    }
    float frisum()
    {
        p=(C.c1t+C.car+C.clr+C.ccr)*s.s2+(C.cmc+C.cbu+C.csq+C.clu+C.cab)*s.s1+5 * (C.cls)+C.cdss+C.cpl+C.csu+4 * (C.cas)+2 * (C.cbc+C.cwc)+2 * (C.cfc)+C.cbr;
        return p;
    }
};
class Saturday
{
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bicepcurls bc;
    Forearmcurls fc;
    Widecurls wc;
    Deepsquatstretch dss;
    Bridge br;
    Sidekicks sk;
    Onesidesqauts os;
    Absstrech as;
    Airbike ab;
    Stepups st;
    Footwork fw;
    Spotrunning sr;
    Chestpress cp;
    Overheadpress ohp;
    Tricepcurls tc;
    Shoulderraises sh;
    Sets s;
    public:
    float p;
    void saturday()
    {
        for(int i=0; i<s.s2; i++)
        {
            t.twister();
            ar.armrotation();
            lr.legraises();
            cr.calfraises();
        }
        for(int j=0; j<s.s1; j++)
        {
            bu.burpees();
            mc.mountainclimbers();
            sq.squats();
            lu.lunges();
            ab.airbike();
        }
        for(int k=0; k<5; k++)
        ls.legstretch();
        dss.deepsquatstretch();
        pl.plank();
        su.situps();
        for(int l=0; l<4; l++)
        as.absstretch();
        for(int m=0; m<2; m++)
        {
            bc.bicepcurls();
            wc.widecurls();
        }
        for(int n=0; n<2; n++)
        fc.forearmcurls();
        br.bridge();
    }
    float satsum()
    {
        p=(C.c1t+C.car+C.clr+C.ccr)*s.s2+(C.cmc+C.cbu+C.csq+C.clu+C.cab)*s.s1+5 * (C.cls)+C.cdss+C.cpl+C.csu+4 * (C.cas)+2 * (C.cbc+C.cwc)+2 * (C.cfc)+C.cbr;
        return p;
    }
};
class add
{
    public:
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    int t1,t2;
    int S, wg;
    float m, p1;
    string exercise;
    void addition()
    {
        cout << "Enter name of workout you wish to add: "<< endl;
        getline(cin >> ws , exercise);
        cout << "Enter time interval of exercise: "<< endl;
        cin >> t1;
        cout << "Enter time interval of break: "<< endl;
        cin >> t2;
        cout << "Enter the number of sets: ";
        cin >> S;
        cout << "Enter weight: ";
        cin >> wg;
        cout << "Enter number of mets: ";
        cin >> m;
        p1= (m*3.5*wg*(t1-1)*S)/12000;
        cout << exercise<<endl;
        for(int k=0; k<S;k++)
        {
            for(int i=1; i<=t1; i++)
            { 
                while(i<2)
                {
                    cout << "Start"<< endl;
                    break;
                }
               Sleep(1000);
                cout << i<<endl;
            }
            for(int j=1; j<=t2; j++)
            {
                while(j<2)   
                {
                    cout << "Break"<< endl;
                    break;
                }
               Sleep(1000);
                cout << j<<endl;
            }
        }
    }
};
class date
{
    public:
    char* getdate()
    {
        time_t now=time(0) ;
        char *ltm = ctime(&now);
        return ltm;
    }    
};
class Data
{
    Calories C;
    timer time;
    Twister t;
    Armrotation ar;
    Legraises lr;
    Calfraises cr;
    Mountainclimbers mc;
    Burpees bu;
    Pushups pu;
    Chesttaps ct;
    Sets s;
    Squats sq;
    Lunges lu;
    Plank pl;
    Legstretch ls;
    Situps su;
    Halfplank hp;
    Deepsquatstretch ds;
    Lowerabs la;
    Bridge br;
    Sidekicks sk;
    Monday Mo;
    Tuesday Tu;
    Wednesday We;
    Thursday Th;
    Friday F;
    Saturday Sa;
    date d;
    weekdays day;
    public:
    void create()
    {
        fstream fout;
        fout.open("fitness.csv", ios::out | ios::app);
        for(int i=0; i<1; i++)
        {
            switch(day.getday())
            {
                case 1:
                fout <<d.getdate()<<","<< "Monday"<< ","<< Mo.monsum()<<endl;
                case 2:
                fout <<d.getdate()<<","<< "Tuesday" << ","<< Tu.tuesum()<<endl;
                case 3:
                fout <<d.getdate()<<","<<"Wednesday" << ","<< We.wedsum()<<endl;
                case 4:
                fout <<d.getdate()<<","<<"Thursday" <<","<< Th.thusum()<<endl;
                case 5:
                fout <<d.getdate()<<","<<"Friday"<< ","<< F.frisum()<<endl;
                case 6:
                fout <<d.getdate()<<","<<"Saturday"<<","<< Sa.satsum()<<endl;

            }
        }
    }     
};
int main()
{
    int n,m;
    //Chesttaps ct;
    //timer time;
    //time.setinterval();
    weekdays day;
    //Twister t;
    //Calories C;
    Monday Mo;
    Tuesday Tu;
    Wednesday We;
    Thursday Th;
    Friday F;
    Saturday Sa;
    add a;
    Data D;
    cout << "If you wish to add more exercises press 1 or else press any key ";
    cin >> n;
    while (n==1)
    {
        cout << "Enter number of exercises you wish to add: "<< endl;
        cin >> m;
        for (int k=0; k<m; k++)
        a.addition();
        break;
    }
    if(day.getday()==1)
    {
        Mo.monday();
    }
    else if(day.getday()==2)
    {
        Tu.tuesday();
    }
    else if(day.getday()==3)
    {
        We.wednesday();
    }
    else if(day.getday()==4)
    {
        Th.thursday();
    }
    else if (day.getday()==5)
    {
        F.friday();
    }
    else if(day.getday()==6)
    {
        Sa.saturday();
    }
    else
    {
        cout << "Rest Day";
    }
    D.create();
    return 0;
}