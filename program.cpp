#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main (){

    //pendeklarasian untuk looping do while
    string r;
    do
    {
        system ("cls");
    
    cout << "==================================================================="<<endl;
    cout << "------------------SELEKSI UJIAN MASUK ORGANISASI------------------"<<endl;
    cout << "               ( ( ( T H E  I N V I S I B L E ) ) )"<<endl;
    cout << "===================================================================\n";

    //pendeklarasian variabel
    int a, b, c;
    string d1, d2, d3, d4, d0;
    string d5, d6;
    char e1, e2, e3, e4, e5;

    cout << "Pilih usia anda untuk menentukan level ujian"<<endl;
    cout << "1. < 13 tahun"<<endl;
    cout << "2. 13 - 16 tahun"<<endl;
    cout << "3. 17 - 21 tahun"<<endl;
    cout << "4. > 21 tahun"<<endl;
    cout << "\nPilihan anda [1/2/3/4] : ";
    cin >> a;

    //if 1 kali
    if (a == 1)
    {
        cout << "Maaf usia anda belum cukup [Min 13 thn]"<<endl;
        cout << "Namun anda dapat mengikuti 'Festival The Invisible' pada (21/12/21)"<<endl;
        cout << "==================================================================="<<endl;
        cout << "[1. Yes] [2. No ]"<<endl;
        cout << "Apakah anda bersedia [1/2] : ";
        cin >> b;

        //if 2 kali
        if (b == 1)
        {
            cout << "\nTerima kasih telah meramaikan event kami"<<endl;
            cout << "Silakan isi formulir berikut ini untuk berpartisipasi mengikuti undian,"<<endl;
            cout << "Pemenang akan mendapatkan tur gratis bersama tim The Invisible"<<endl;
            cout << "==================================================================="<<endl;
            cout << "[1. Lanjut mengisi formulir]"<<endl;
            cout << "[2. Saya tidak ingin mengikuti undian]"<<endl;
            cout << "Pilihan saya [1/2] = ";
            cin >> c;

            //if 3 kali, dan begitu seterusnya sampai bawah
            if (c == 1)
            {
                /*nahh untuk getline ini, gk tau kenapa getline yg pertama gk bisa input, 
                jdi langsung lanjut keselanjutnya, ywdah saya akalin aja tambahin getline pake variabel d0
                buat pajangan 
                */
                cout << "==================================================================="<<endl;
                cout << "- - - F O R M U L I R  K E I K U T S E R T A A N  U N D I A N - - -"<<endl;
                cout << "==================================================================="<<endl;
                cout << "Nama ";
                getline(cin, d0);
                cout << "Lengkap\t: ";
                getline(cin, d1);
                cout << "Umur\t\t: ";
                getline(cin, d2);
                cout << "Nomer WA\t: ";
                getline(cin, d3);
                cout << "Email\t\t: ";
                getline(cin, d4);

                cout <<"\nTerima kasih telah berpartisipasi kak "<<d1<<endl;
                cout <<"Info selanjunya akan kami hubungi melalui WA atau Email"<<endl;
            }else if (c == 2)
            {
                cout << "\nAnda tidak ingin mengikuti undian" <<endl;
                cout << "Terima kasih telah berpartisipasi meramaikan festival :)"<<endl;
            }else
            {
                cout << "\nInput anda salah"<<endl;
                cout << "Perhatikan baik baik pilihannya :)"<<endl;
            }
            
        } else if (b == 2)
        {
            cout << "Terima kasih dan Mohon maaf karena anda belum bisa mengikuti seleksi"<<endl;
            cout << "==================================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda ingin memberi masukan [1/2] : ";
            cin >> c;

            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;
            }else if (c == 2)
            {
                cout << "Terima kasih :)"<<endl;
            }else
            {
                cout << "\nInput anda salah"<<endl;
                cout << "Perhatikan baik baik pilihannya :)"<<endl;
            }

        } else {
            cout << "Input anda salah"<<endl;
            cout << "Perhatikan baik baik dan silakan ulangi atau keluar"<<endl;
        }
        
        
    }else if (a == 2)
    {
        cout << "Selamat anda dapat mengikuti ujian seleksi"<<endl;
        cout << "==========================================================="<<endl;
        cout << "               ( (  L e v e l  u j i a n  ) )"<<endl;
        cout << "               [ L E V E L . L I S T R I K ]"<<endl;
        cout << "==========================================================="<<endl;

        cout << "Nama ";
        getline(cin, d0);
        cout << "Lengkap\t: ";
        getline(cin, d1);

        cout << "\nHai kak "<<d1<<endl;
        cout << "Kerjakan soal dengan jujur ya!"<<endl; 
        cout << "Jawab sesuai dengan alvabet yang disediakan!"<<endl;
        cout << "\n[NOMOR 1]"<<endl;
        cout << "Jika ada teman yang meminjam uang, apa yang akan kamu lakukan?"<<endl;
        cout << "a. Pura pura tidak punya uang"<<endl;
        cout << "b. Bertanya dulu untuk apa"<<endl;
        cout << "c. Menggerutu dalam hati"<<endl;
        cout << "d. Curhat ke temen"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e1;

        cout << "\n[NOMOR 2]"<<endl;
        cout << "Menurutmu, Pemimpin yang baik adalah..."<<endl;
        cout << "a. Yang mudah disogok"<<endl;
        cout << "b. Yang gampang memaafkan orang lain"<<endl;
        cout << "c. Yang cerdas dalam tindakan dan perkataan"<<endl;
        cout << "d. Yang mampu mengayomi dan membantu anggotanya"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e2;

        cout << "\n[NOMOR 3]"<<endl;
        cout << "Apa yang anda lakukan jika anda punya pacar?"<<endl;
        cout << "a. Memprioritaskannya lebih dari apapun"<<endl;
        cout << "b. Sering mengajaknya jalan dan berdiskusi"<<endl;
        cout << "c. Dipamerkan ke teman"<<endl;
        cout << "d. Menyayanginya"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e3;

        cout << "\n[NOMOR 4]"<<endl;
        cout << "Menurut anda, apakah uang penting?"<<endl;
        cout << "a. Sangat penting"<<endl;
        cout << "b. Penting dan seperlunya"<<endl;
        cout << "c. Tidak terlalu penting, yang penting kebahagiaan"<<endl;
        cout << "d. Sangat tidak penting"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e4;

        cout << "\n[NOMOR 5]"<<endl;
        cout << "Apakah ini nomer terakhir?"<<endl;
        cout << "a. Ya, saya sangat yakin"<<endl;
        cout << "b. Mungkin ya, Karena pas nomer 5"<<endl;
        cout << "c. Bukan, seharusnya masih ada lagi"<<endl;
        cout << "d. Bukan, karena saya sudah dapat bocoran tentang jumlah soal"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e5;

        cout << "\nRingkasan jawaban anda : ["<<e1<<"], ["<<e2<<"], ["<<e3<<"], ["<<e4<<"], ["<<e5<<"]"<<endl;

        if (e1 == 'b' && e2 == 'd' && e3 == 'd' && e4 == 'b' && e5 == 'a')
        {
            cout << "==========================================================="<<endl;
            cout << "Selamat anda lolos seleksi!"<<endl;
            cout << "Anda menjawab 5 soal dengan benar sesuai harapan kami"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda bersedia datang pada (11/12/21): ";
            cin >> c;

            if (c == 1)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Kami tunggu kehadirannya di Cafe Ofdorse Kemang pukul 09.00"<<endl;
                cout << "Jangan lupa untuk membawa identitas diri"<<endl;
                cout << "Terima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            }else if (c == 2)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Maaf, Kelulusan anda kami pertimbangkan terlebih dahulu"<<endl;
                cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
                cout << "Email : ";
                cin >> d4;

                cout << "\nTerima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            } 

        }else if ((e1 != 'b' && e2 == 'd' && e3 == 'd' && e4 == 'b' && e5 == 'a')||(e1 == 'b' && e2 != 'd' && e3 == 'd' && e4 == 'b' && e5 == 'a')||(e1 == 'b' && e2 == 'd' && e3 != 'd' && e4 == 'b' && e5 == 'a')||(e1 == 'b' && e2 == 'd' && e3 == 'd' && e4 != 'b' && e5 == 'a')||(e1 == 'b' && e2 == 'd' && e3 == 'd' && e4 == 'b' && e5 != 'a'))
        {
            cout << "==========================================================="<<endl;
            cout << "Selamat anda lolos seleksi!"<<endl;
            cout << "Anda menjawab 4 soal dengan benar sesuai harapan kami"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda bersedia datang pada (11/12/21): ";
            cin >> c;

            if (c == 1)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Kami tunggu kehadirannya di Cafe Ofdorse Kemang pukul 09.00"<<endl;
                cout << "Jangan lupa untuk membawa identitas diri"<<endl;
                cout << "Terima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            }else if (c == 2)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Maaf, Kelulusan anda kami pertimbangkan terlebih dahulu"<<endl;
                cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
                cout << "Email : ";
                cin >> d4;

                cout << "d\nTerima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }
        }else if (e1 != 'b' && e2 != 'd' && e3 != 'd' && e4 != 'b' && e5 != 'a')
        {
            cout << "==========================================================="<<endl;
            cout << "Mohon maaf! Anda tidak lolos"<<endl;
            cout << "Tidak ada satupun jawaban anda sesuai dengan harapan kami"<<endl;
            cout << "Jangan Bersedih dan tetap semangat!!"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Berkenankah anda memberi masukan untuk kami? ";
            cin >> c;
            
            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;

            } else if (c == 2)
            {
                cout << "Terima kasih telah berpartisipasi :)"<<endl;

            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }
            
        }
         else
        {
            cout << "==========================================================="<<endl;
            cout << "Mohon maaf kami harus menimbang - nimbang kembali"<<endl;
            cout << "Karena anda menjawab salah lebih dari 1 nomor"<<endl;
            cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
            cout << "Email : ";
            cin >> d4;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Berkenankah anda memberi masukan untuk kami? ";
            cin >> c;
            
            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;

            } else if (c == 2)
            {
                cout << "Terima kasih telah berpartisipasi :)"<<endl;

            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }
        }
        
    }else if (a == 3)
    {
        cout << "Selamat anda dapat mengikuti ujian seleksi"<<endl;
        cout << "==========================================================="<<endl;
        cout << "                ( L e v e l  u j i a n )"<<endl;
        cout << "               [ L E V E L -- P E T I R ]"<<endl;
        cout << "==========================================================="<<endl;

        cout << "Nama ";
        getline(cin, d0);
        cout << "Lengkap\t: ";
        getline(cin, d1);

        cout << "\nHai kak "<<d1<<endl;
        cout << "Kerjakan soal dengan jujur ya!"<<endl; 
        cout << "Jawab sesuai dengan alvabet yang disediakan!"<<endl;
        cout << "\n[NOMOR 1]"<<endl;
        cout << "5, 9, 9, 16, 15, 25, 24, 37, 37, __"<<endl;
        cout << "a. 43"<<endl;
        cout << "b. 44"<<endl;
        cout << "c. 49"<<endl;
        cout << "d. 53"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e1;

        cout << "\n[NOMOR 2]"<<endl;
        cout << "BAUMBACH diterjemahkan menjadi AZTLAZBG"<<endl;
        cout << "CHAZELLE diterjemahkan menjadi BGZYDKKD"<<endl;
        cout << "NOLAN diterjemahkan menjadi MNKZM"<<endl;
        cout << "Maka, CROWE diterjemahkan menjadi? "<<endl;
        cout << "a. BQNVD"<<endl;
        cout << "b. BSPXD"<<endl;
        cout << "c. TQDGR"<<endl;
        cout << "d. YRFHH"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e2;

        cout << "\n[NOMOR 3]"<<endl;
        cout << "Jembatan yang melintasi sungai X perlu segera diganti.\nNamun, daripada berjenis jembatan lengkung, jembatan baru yang akan \ndibangun sebaiknya berjenis jembatan gantung. Meskipun biaya\npembangunan yang harus dikeluarkan lebih tinggi, tapi jembatan itu bisa\nmenambah keindahan pemandangan di sekitar sungai."<<endl;
        cout << "\nBerdasarkan bacaan di atas, pernyataan manakah yang \npaling sesuai dengan pendapat penulis?"<<endl;
        cout << "a. Biaya perawatan jembatan gantung lebih besar daripada"<<endl;
        cout << "   biaya perawatan jembatan lengkung."<<endl;
        cout << "b. Jembatan lengkung tidak lebih baik daripada jembatan gantung."<<endl;
        cout << "c. Keindahan pemandangan di sekitar sungai adalah faktor"<<endl;
        cout << "   yang penting bagi kebanyakan warga sekitar."<<endl;
        cout << "d. Jembatan gantung lebih indah dipandang dibandingkan jembatan lengkung."<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e3;

        cout << "\n[NOMOR 4]"<<endl;
        cout << "Apakah anda yakin akan lolos ujian?"<<endl;
        cout << "a. Ya, Karena saya merasa saya bisa"<<endl;
        cout << "b. Ya, Saya sudah tau jawabnnya"<<endl;
        cout << "c. Kurang Yakin, Karena saya tidak belajar"<<endl;
        cout << "d. Tidak yakin sama sekali"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e4;

        cout << "\n[NOMOR 5]"<<endl;
        cout << "Menurut anda apakah arti kematian itu?"<<endl;
        cout << "a. Ketika seseorang berpindah alam"<<endl;
        cout << "b. Ketika jantung berhenti berdetak"<<endl;
        cout << "c. Ketika orang orang mulai melupakan anda"<<endl;
        cout << "d. Ketika bom memusnahkan seseorang yang anda sayangi"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e5;

        cout << "\nRingkasan jawaban anda : ["<<e1<<"], ["<<e2<<"], ["<<e3<<"], ["<<e4<<"], ["<<e5<<"]"<<endl;

        if (e1 == 'd' && e2 == 'a' && e3 == 'd' && e4 == 'a' && e5 == 'c')
        {
            cout << "==========================================================="<<endl;
            cout << "Selamat anda lolos seleksi!"<<endl;
            cout << "Anda menjawab 5 soal dengan benar sesuai harapan kami"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda bersedia datang pada (11/12/21): ";
            cin >> c;

            if (c == 1)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Kami tunggu kehadirannya di Cafe Ofdorse Kemang pukul 13.00"<<endl;
                cout << "Jangan lupa untuk membawa identitas diri"<<endl;
                cout << "Terima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            }else if (c == 2)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Maaf, Kelulusan anda kami pertimbangkan terlebih dahulu"<<endl;
                cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
                cout << "Email : ";
                cin >> d4;

                cout << "\nTerima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }

        } else if ((e1 != 'd' && e2 == 'a' && e3 == 'd' && e4 == 'a' && e5 == 'c')||(e1 == 'd' && e2 != 'a' && e3 == 'd' && e4 == 'a' && e5 == 'c')||(e1 == 'd' && e2 == 'a' && e3 != 'd' && e4 == 'a' && e5 == 'c')||(e1 == 'd' && e2 == 'a' && e3 == 'd' && e4 != 'a' && e5 == 'c')||(e1 == 'd' && e2 == 'a' && e3 == 'd' && e4 == 'a' && e5 != 'c'))
        {
            cout << "==========================================================="<<endl;
            cout << "Selamat anda lolos seleksi!"<<endl;
            cout << "Anda menjawab 4 soal dengan benar sesuai harapan kami"<<endl;
            cout << "==========================================================="<<endl;
             cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda bersedia datang pada (11/12/21): ";
            cin >> c;

            if (c == 1)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Kami tunggu kehadirannya di Cafe Ofdorse Kemang pukul 13.00"<<endl;
                cout << "Jangan lupa untuk membawa identitas diri"<<endl;
                cout << "Terima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            }else if (c == 2)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Maaf, Kelulusan anda kami pertimbangkan terlebih dahulu"<<endl;
                cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
                cout << "Email : ";
                cin >> d4;

                cout << "\nTerima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }

        } else if (e1 != 'd' && e2 != 'a' && e3 != 'd' && e4 != 'a' && e5 != 'c')
        {
            cout << "==========================================================="<<endl;
            cout << "Mohon maaf! Anda tidak lolos"<<endl;
            cout << "Tidak ada satupun jawaban anda sesuai dengan harapan kami"<<endl;
            cout << "Jangan Bersedih dan tetap semangat!!"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Berkenankah anda memberi masukan untuk kami? ";
            cin >> c;
            
            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;

            } else if (c == 2)
            {
                cout << "Terima kasih telah berpartisipasi :)"<<endl;

            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }

        } else
        {
            cout << "==========================================================="<<endl;
            cout << "Mohon maaf kami harus menimbang - nimbang kembali"<<endl;
            cout << "Karena anda menjawab salah lebih dari 1 nomor"<<endl;
            cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
            cout << "Email : ";
            cin >> d4;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Berkenankah anda memberi masukan untuk kami? ";
            cin >> c;
            
            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;

            } else if (c == 2)
            {
                cout << "Terima kasih telah berpartisipasi :)"<<endl;

            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }
        }
        

    }else if (a == 4)
    {
        cout << "Selamat anda dapat mengikuti ujian seleksi"<<endl;
        cout << "==========================================================="<<endl;
        cout << "           =====( L e v e l   u j i a n )====="<<endl;
        cout << "           [ L E V E L . H A L I L I N T A R ]"<<endl;
        cout << "==========================================================="<<endl;

        cout << "Nama ";
        getline(cin, d0);
        cout << "Lengkap\t: ";
        getline(cin, d1);

        cout << "\nHai kak "<<d1<<endl;
        cout << "Kerjakan soal dengan jujur ya!"<<endl; 
        cout << "Jawab sesuai dengan alvabet yang disediakan!"<<endl;
        cout << "\n[NOMOR 1]"<<endl;
        cout << "Most teachers who are great at teaching are eccentric teachers.\nHowever, there are non-eccentric teachers who are also great at teaching.\nIn addition, all great teachers are teachers with good communication skills.\nNefertari is a great teacher."<<endl;
        cout << "\nWhich statement is definitely true?"<<endl;
        cout << "a. There are not great teachers who are not eccentric."<<endl;
        cout << "b. Anyone with good communication skills is a great teacher."<<endl;
        cout << "c. There is an eccentric teacher who has good communication skills."<<endl;
        cout << "d. There are great teachers who are not eccentric and do not" <<endl;
        cout << "   have great communication skills."<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e1;

        cout << "\n[NOMOR 2]"<<endl;
        cout << "What is one plus one in the square of 10? the result is multiplied by zero?"<<endl;
        cout << "a. I give up"<<endl;
        cout << "b. I don't know, but I'll try"<<endl;
        cout << "c. what the fuck this question"<<endl;
        cout << "d. I am dizzy"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e2;

        cout << "\n[NOMOR 3]"<<endl;
        cout << "Is this organization good?"<<endl;
        cout << "a. Very good"<<endl;
        cout << "b. enough"<<endl;
        cout << "c. pretty ugly"<<endl;
        cout << "d. useless"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e3;

        cout << "\n[NOMOR 4]"<<endl;
        cout << "If there are bananas and chocolate, which would you take?"<<endl;
        cout << "a. Of course, Bananas"<<endl;
        cout << "b. Of course, Chocolate"<<endl;
        cout << "c. Both of them"<<endl;
        cout << "d. I will ask permission first"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e4;

        cout << "\n[NOMOR 5]"<<endl;
        cout << "If I am in a difficult position, what do I do?"<<endl;
        cout << "a. Cry"<<endl;
        cout << "b. Asking for money"<<endl;
        cout << "c. Ask for help with humility"<<endl;
        cout << "d. I don't know!"<<endl;
        cout << "Jawaban [a/b/c/d] : ";
        cin >> e5;

        cout << "\nRingkasan jawaban anda : ["<<e1<<"], ["<<e2<<"], ["<<e3<<"], ["<<e4<<"], ["<<e5<<"]"<<endl;
        
        if (e1 == 'c' && e2 == 'b' && e3 == 'a' && e4 == 'd' && e5 == 'c')
        {
            cout << "==========================================================="<<endl;
            cout << "Selamat anda lolos seleksi!"<<endl;
            cout << "Anda menjawab 5 soal dengan benar sesuai harapan kami"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda bersedia datang pada (11/12/21): ";
            cin >> c;

            if (c == 1)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Kami tunggu kehadirannya di Cafe Ofdorse Kemang pukul 19.00"<<endl;
                cout << "Jangan lupa untuk membawa identitas diri"<<endl;
                cout << "Terima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            }else if (c == 2)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Maaf, Kelulusan anda kami pertimbangkan terlebih dahulu"<<endl;
                cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
                cout << "Email : ";
                cin >> d4;

                cout << "\nTerima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }

        } else if ((e1 != 'c' && e2 == 'b' && e3 == 'a' && e4 == 'd' && e5 == 'c')||(e1 == 'c' && e2 != 'b' && e3 == 'a' && e4 == 'd' && e5 == 'c')||(e1 == 'c' && e2 == 'b' && e3 != 'a' && e4 == 'd' && e5 == 'c')||(e1 == 'c' && e2 == 'b' && e3 == 'a' && e4 != 'd' && e5 == 'c')||(e1 == 'c' && e2 == 'b' && e3 == 'a' && e4 == 'd' && e5 != 'c'))
        {
            cout << "==========================================================="<<endl;
            cout << "Selamat anda lolos seleksi!"<<endl;
            cout << "Anda menjawab 4 soal dengan benar sesuai harapan kami"<<endl;
            cout << "==========================================================="<<endl;
             cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Apakah anda bersedia datang pada (11/12/21): ";
            cin >> c;

            if (c == 1)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Kami tunggu kehadirannya di Cafe Ofdorse Kemang pukul 19.00"<<endl;
                cout << "Jangan lupa untuk membawa identitas diri"<<endl;
                cout << "Terima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            }else if (c == 2)
            {
                cout << "-----------------------------------------------------"<<endl;
                cout << "Maaf, Kelulusan anda kami pertimbangkan terlebih dahulu"<<endl;
                cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
                cout << "Email : ";
                cin >> d4;

                cout << "\nTerima kasih banyak :)"<<endl;
                cout << "-----------------------------------------------------"<<endl;
            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }

        } else if (e1 != 'c' && e2 != 'b' && e3 != 'a' && e4 != 'd' && e5 != 'c')
        {
            cout << "==========================================================="<<endl;
            cout << "Mohon maaf! Anda tidak lolos"<<endl;
            cout << "Tidak ada satupun jawaban anda sesuai dengan harapan kami"<<endl;
            cout << "Jangan Bersedih dan tetap semangat!!"<<endl;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Berkenankah anda memberi masukan untuk kami? ";
            cin >> c;
            
            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;

            } else if (c == 2)
            {
                cout << "Terima kasih telah berpartisipasi :)"<<endl;

            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }

        } else
        {
            cout << "==========================================================="<<endl;
            cout << "Mohon maaf kami harus menimbang - nimbang kembali"<<endl;
            cout << "Karena anda menjawab salah lebih dari 1 nomor"<<endl;
            cout << "Kami akan menghubungi anda via email untuk kepastiannya"<<endl;
            cout << "Email : ";
            cin >> d4;
            cout << "==========================================================="<<endl;
            cout << "[1. Yes] [2. No ]"<<endl;
            cout << "Berkenankah anda memberi masukan untuk kami? ";
            cin >> c;
            
            if (c == 1)
            {
                cout << "-------------------------------------"<<endl;
                cout << "Saran ";
                getline(cin, d5);
                cout << "dan kritik anda\t: "<<endl;
                getline(cin, d6);
                cout << "-------------------------------------"<<endl;

                cout << "\nTerima kasih banyak, saran dan kritik anda akan membuat kami lebih baik :)"<<endl;

            } else if (c == 2)
            {
                cout << "Terima kasih telah berpartisipasi :)"<<endl;

            } else
            {
                cout << "Input salah!!"<<endl;
                cout << "Perhatikan pilihannya baik baik!"<<endl;
            }
        }

    }else {
        cout << "Input anda tidak ada di pilihan"<<endl;
        cout << "Silakan ulangi kembali";
    }

    cout << "\nMUHAMAD BAYU FADAYAN_065121100\n\n";

    cout << "Apakah anda ingin mengulang [Y/N] : ";
    cin >> r;
    } while (r == "Y");
    system ("cls");
    
    cout << "\nTerima kasih banyak :)"<<endl;
    cout << "\nMUHAMAD BAYU FADAYAN_065121100\n\n";

    getch ();
    return 0;
}