#pragma once
#include"student.h"
#include"teacher.h"
#include"exam.h"
namespace MyfirstProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int n = -1;
		int m = -1;
		int tedademt = -1;
		array<student^>^ students = gcnew array< student^ >(50);
		array<teacher^>^ teachers = gcnew array< teacher^ >(50);
		array<exam^>^ exams = gcnew array< exam^ >(5);
		int curteacher = -1;
		int curstudent = -1;
	private: System::Windows::Forms::Button^ panelstu;
	protected:
	private: System::Windows::Forms::Button^ panelt;
	private: System::Windows::Forms::Panel^ safhevorud1;

	private: System::Windows::Forms::Label^ ramz;
	private: System::Windows::Forms::TextBox^ namekarbari;
	private: System::Windows::Forms::Label^ labelnamekarbari;
	private: System::Windows::Forms::Panel^ panelsabtnamedaneshjo3;

	private: System::Windows::Forms::TextBox^ textBoxshomaredaneshjoi;
	private: System::Windows::Forms::Label^ labelshomaredaneshjuii;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ labelramz;
	private: System::Windows::Forms::TextBox^ textBoxusername;
	private: System::Windows::Forms::Label^ labelusername;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::TextBox^ textBoxlastname;
	private: System::Windows::Forms::Label^ lastname;
	private: System::Windows::Forms::TextBox^ textBoxname;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ shakhsi_yaftnashod;
	private: System::Windows::Forms::Label^ porkonid;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ buttonvorud;
	private: System::Windows::Forms::TextBox^ ramzobur;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ paneldaneshjuu3_5;

	private: System::Windows::Forms::Panel^ pansabtnameostad4;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panelaslostad5;
	private: System::Windows::Forms::Panel^ moshakhasatasmun6;



	private: System::Windows::Forms::Label^ onvan;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ bazgashtbepanelmodir;

	private: System::Windows::Forms::Button^ buttonafzudanafrad;

	private: System::Windows::Forms::TextBox^ textBoxtedadsoala;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownminend;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownhourend;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownminstart;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownhourstart;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBoxbodjebandi;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxonvan;
private: System::Windows::Forms::Panel^ afzuddandaneshju7;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::Label^ name1;

	private: System::Windows::Forms::Label^ family1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::Label^ name2;

	private: System::Windows::Forms::Label^ family2;
	private: System::Windows::Forms::Label^ radif2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::Label^ name3;

	private: System::Windows::Forms::Label^ family3;
	private: System::Windows::Forms::Label^ radif3;
	private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::Label^ name4;

	private: System::Windows::Forms::Label^ family4;
	private: System::Windows::Forms::Label^ radif4;
	private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::Label^ name5;

	private: System::Windows::Forms::Label^ family5;
	private: System::Windows::Forms::Label^ radif5;
	private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::Label^ name6;

	private: System::Windows::Forms::Label^ family6;
	private: System::Windows::Forms::Label^ radif6;
	private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::Label^ name7;

	private: System::Windows::Forms::Label^ family7;
	private: System::Windows::Forms::Label^ radif7;
	private: System::Windows::Forms::CheckBox^ checkBox9;
private: System::Windows::Forms::Label^ name8;

	private: System::Windows::Forms::Label^ family8;
	private: System::Windows::Forms::Label^ radif8;
	private: System::Windows::Forms::CheckBox^ checkBox10;
private: System::Windows::Forms::Label^ name9;

	private: System::Windows::Forms::Label^ family9;
	private: System::Windows::Forms::Label^ radif9;
	private: System::Windows::Forms::CheckBox^ checkBox11;
private: System::Windows::Forms::Label^ name10;

	private: System::Windows::Forms::Label^ family10;
	private: System::Windows::Forms::Label^ radif10;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ radif1;
private: System::Windows::Forms::Panel^ afzudansoal;
private: System::Windows::Forms::Label^ labelgozine1;
private: System::Windows::Forms::Label^ labelgozine2;
private: System::Windows::Forms::Label^ labelgozine3;
private: System::Windows::Forms::Label^ labelgozine4;
private: System::Windows::Forms::TextBox^ pasokhtashrihi;
private: System::Windows::Forms::Label^ labelpasokhtashrihi;
private: System::Windows::Forms::CheckBox^ checkBoxtrue;
private: System::Windows::Forms::CheckBox^ checkBoxfalse;
private: System::Windows::Forms::TextBox^ soaratsoal;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ taidnosoal;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::CheckBox^ checkBoxgozine1;
private: System::Windows::Forms::CheckBox^ checkBoxgozine3;
private: System::Windows::Forms::CheckBox^ checkBoxgozine4;
private: System::Windows::Forms::CheckBox^ checkBoxgozine2;
private: System::Windows::Forms::TextBox^ textBoxgozine2;
private: System::Windows::Forms::TextBox^ textBoxgozine3;
private: System::Windows::Forms::TextBox^ textBoxgozine4;
private: System::Windows::Forms::TextBox^ textBoxgozine1;
private: System::Windows::Forms::Panel^ vorudostad2;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::LinkLabel^ linkLabel2;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Panel^ listazmunhayeostad9;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::LinkLabel^ linkLabel5;
private: System::Windows::Forms::LinkLabel^ linkLabel4;
private: System::Windows::Forms::LinkLabel^ linkLabel3;
private: System::Windows::Forms::LinkLabel^ linkLabel6;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Panel^ listazmunhayedaneshju10;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::LinkLabel^ linkLabel10;
private: System::Windows::Forms::LinkLabel^ linkLabel9;
private: System::Windows::Forms::LinkLabel^ linkLabel8;
private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelstu = (gcnew System::Windows::Forms::Button());
			this->panelt = (gcnew System::Windows::Forms::Button());
			this->safhevorud1 = (gcnew System::Windows::Forms::Panel());
			this->vorudostad2 = (gcnew System::Windows::Forms::Panel());
			this->panelsabtnamedaneshjo3 = (gcnew System::Windows::Forms::Panel());
			this->paneldaneshjuu3_5 = (gcnew System::Windows::Forms::Panel());
			this->pansabtnameostad4 = (gcnew System::Windows::Forms::Panel());
			this->panelaslostad5 = (gcnew System::Windows::Forms::Panel());
			this->moshakhasatasmun6 = (gcnew System::Windows::Forms::Panel());
			this->afzuddandaneshju7 = (gcnew System::Windows::Forms::Panel());
			this->afzudansoal = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->listazmunhayeostad9 = (gcnew System::Windows::Forms::Panel());
			this->listazmunhayedaneshju10 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBoxgozine2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxgozine3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxgozine4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxgozine1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxgozine3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxgozine4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxgozine2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxgozine1 = (gcnew System::Windows::Forms::CheckBox());
			this->labelgozine1 = (gcnew System::Windows::Forms::Label());
			this->labelgozine2 = (gcnew System::Windows::Forms::Label());
			this->labelgozine3 = (gcnew System::Windows::Forms::Label());
			this->labelgozine4 = (gcnew System::Windows::Forms::Label());
			this->pasokhtashrihi = (gcnew System::Windows::Forms::TextBox());
			this->labelpasokhtashrihi = (gcnew System::Windows::Forms::Label());
			this->checkBoxtrue = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxfalse = (gcnew System::Windows::Forms::CheckBox());
			this->soaratsoal = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->taidnosoal = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->name1 = (gcnew System::Windows::Forms::Label());
			this->family1 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->name2 = (gcnew System::Windows::Forms::Label());
			this->family2 = (gcnew System::Windows::Forms::Label());
			this->radif2 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->name3 = (gcnew System::Windows::Forms::Label());
			this->family3 = (gcnew System::Windows::Forms::Label());
			this->radif3 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->name4 = (gcnew System::Windows::Forms::Label());
			this->family4 = (gcnew System::Windows::Forms::Label());
			this->radif4 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->name5 = (gcnew System::Windows::Forms::Label());
			this->family5 = (gcnew System::Windows::Forms::Label());
			this->radif5 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->name6 = (gcnew System::Windows::Forms::Label());
			this->family6 = (gcnew System::Windows::Forms::Label());
			this->radif6 = (gcnew System::Windows::Forms::Label());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->name7 = (gcnew System::Windows::Forms::Label());
			this->family7 = (gcnew System::Windows::Forms::Label());
			this->radif7 = (gcnew System::Windows::Forms::Label());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->name8 = (gcnew System::Windows::Forms::Label());
			this->family8 = (gcnew System::Windows::Forms::Label());
			this->radif8 = (gcnew System::Windows::Forms::Label());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->name9 = (gcnew System::Windows::Forms::Label());
			this->family9 = (gcnew System::Windows::Forms::Label());
			this->radif9 = (gcnew System::Windows::Forms::Label());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->name10 = (gcnew System::Windows::Forms::Label());
			this->family10 = (gcnew System::Windows::Forms::Label());
			this->radif10 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->radif1 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->bazgashtbepanelmodir = (gcnew System::Windows::Forms::Button());
			this->buttonafzudanafrad = (gcnew System::Windows::Forms::Button());
			this->textBoxtedadsoala = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownminend = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownhourend = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownminstart = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownhourstart = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxbodjebandi = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxonvan = (gcnew System::Windows::Forms::TextBox());
			this->onvan = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxshomaredaneshjoi = (gcnew System::Windows::Forms::TextBox());
			this->labelshomaredaneshjuii = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelramz = (gcnew System::Windows::Forms::Label());
			this->textBoxusername = (gcnew System::Windows::Forms::TextBox());
			this->labelusername = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->textBoxlastname = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::Label());
			this->textBoxname = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->shakhsi_yaftnashod = (gcnew System::Windows::Forms::Label());
			this->porkonid = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->buttonvorud = (gcnew System::Windows::Forms::Button());
			this->ramzobur = (gcnew System::Windows::Forms::TextBox());
			this->ramz = (gcnew System::Windows::Forms::Label());
			this->namekarbari = (gcnew System::Windows::Forms::TextBox());
			this->labelnamekarbari = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->safhevorud1->SuspendLayout();
			this->vorudostad2->SuspendLayout();
			this->panelsabtnamedaneshjo3->SuspendLayout();
			this->paneldaneshjuu3_5->SuspendLayout();
			this->pansabtnameostad4->SuspendLayout();
			this->panelaslostad5->SuspendLayout();
			this->moshakhasatasmun6->SuspendLayout();
			this->afzuddandaneshju7->SuspendLayout();
			this->afzudansoal->SuspendLayout();
			this->panel18->SuspendLayout();
			this->listazmunhayeostad9->SuspendLayout();
			this->listazmunhayedaneshju10->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownminend))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownhourend))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownminstart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownhourstart))->BeginInit();
			this->SuspendLayout();
			// 
			// panelstu
			// 
			this->panelstu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelstu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelstu->Cursor = System::Windows::Forms::Cursors::Default;
			this->panelstu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->panelstu->ForeColor = System::Drawing::Color::DimGray;
			this->panelstu->Location = System::Drawing::Point(535, 184);
			this->panelstu->Name = L"panelstu";
			this->panelstu->Size = System::Drawing::Size(93, 55);
			this->panelstu->TabIndex = 0;
			this->panelstu->Text = L"پنل دانشجو";
			this->panelstu->UseVisualStyleBackColor = false;
			this->panelstu->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panelt
			// 
			this->panelt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelt->Cursor = System::Windows::Forms::Cursors::Default;
			this->panelt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->panelt->ForeColor = System::Drawing::Color::DimGray;
			this->panelt->Location = System::Drawing::Point(535, 109);
			this->panelt->Name = L"panelt";
			this->panelt->Size = System::Drawing::Size(93, 55);
			this->panelt->TabIndex = 1;
			this->panelt->Text = L"پنل مدیریت";
			this->panelt->UseVisualStyleBackColor = false;
			this->panelt->Click += gcnew System::EventHandler(this, &MyForm::panelt_Click);
			// 
			// safhevorud1
			// 
			this->safhevorud1->Controls->Add(this->vorudostad2);
			this->safhevorud1->Controls->Add(this->shakhsi_yaftnashod);
			this->safhevorud1->Controls->Add(this->porkonid);
			this->safhevorud1->Controls->Add(this->linkLabel1);
			this->safhevorud1->Controls->Add(this->buttonvorud);
			this->safhevorud1->Controls->Add(this->ramzobur);
			this->safhevorud1->Controls->Add(this->ramz);
			this->safhevorud1->Controls->Add(this->namekarbari);
			this->safhevorud1->Controls->Add(this->labelnamekarbari);
			this->safhevorud1->Controls->Add(this->button18);
			this->safhevorud1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->safhevorud1->Location = System::Drawing::Point(0, 0);
			this->safhevorud1->Name = L"safhevorud1";
			this->safhevorud1->Size = System::Drawing::Size(707, 332);
			this->safhevorud1->TabIndex = 2;
			this->safhevorud1->Visible = false;
			// 
			// vorudostad2
			// 
			this->vorudostad2->Controls->Add(this->panelsabtnamedaneshjo3);
			this->vorudostad2->Controls->Add(this->label25);
			this->vorudostad2->Controls->Add(this->label26);
			this->vorudostad2->Controls->Add(this->linkLabel2);
			this->vorudostad2->Controls->Add(this->button17);
			this->vorudostad2->Controls->Add(this->textBox1);
			this->vorudostad2->Controls->Add(this->label27);
			this->vorudostad2->Controls->Add(this->textBox7);
			this->vorudostad2->Controls->Add(this->button16);
			this->vorudostad2->Controls->Add(this->label28);
			this->vorudostad2->Location = System::Drawing::Point(0, 0);
			this->vorudostad2->Name = L"vorudostad2";
			this->vorudostad2->Size = System::Drawing::Size(707, 332);
			this->vorudostad2->TabIndex = 17;
			// 
			// panelsabtnamedaneshjo3
			// 
			this->panelsabtnamedaneshjo3->Controls->Add(this->paneldaneshjuu3_5);
			this->panelsabtnamedaneshjo3->Controls->Add(this->button2);
			this->panelsabtnamedaneshjo3->Controls->Add(this->label3);
			this->panelsabtnamedaneshjo3->Controls->Add(this->label1);
			this->panelsabtnamedaneshjo3->Controls->Add(this->button1);
			this->panelsabtnamedaneshjo3->Controls->Add(this->textBoxshomaredaneshjoi);
			this->panelsabtnamedaneshjo3->Controls->Add(this->labelshomaredaneshjuii);
			this->panelsabtnamedaneshjo3->Controls->Add(this->label2);
			this->panelsabtnamedaneshjo3->Controls->Add(this->textBox2);
			this->panelsabtnamedaneshjo3->Controls->Add(this->labelramz);
			this->panelsabtnamedaneshjo3->Controls->Add(this->textBoxusername);
			this->panelsabtnamedaneshjo3->Controls->Add(this->labelusername);
			this->panelsabtnamedaneshjo3->Controls->Add(this->username);
			this->panelsabtnamedaneshjo3->Controls->Add(this->textBoxlastname);
			this->panelsabtnamedaneshjo3->Controls->Add(this->lastname);
			this->panelsabtnamedaneshjo3->Controls->Add(this->textBoxname);
			this->panelsabtnamedaneshjo3->Controls->Add(this->name);
			this->panelsabtnamedaneshjo3->Location = System::Drawing::Point(0, 0);
			this->panelsabtnamedaneshjo3->Name = L"panelsabtnamedaneshjo3";
			this->panelsabtnamedaneshjo3->Size = System::Drawing::Size(707, 332);
			this->panelsabtnamedaneshjo3->TabIndex = 8;
			// 
			// paneldaneshjuu3_5
			// 
			this->paneldaneshjuu3_5->Controls->Add(this->pansabtnameostad4);
			this->paneldaneshjuu3_5->Controls->Add(this->button6);
			this->paneldaneshjuu3_5->Controls->Add(this->button5);
			this->paneldaneshjuu3_5->Controls->Add(this->button4);
			this->paneldaneshjuu3_5->Location = System::Drawing::Point(0, 0);
			this->paneldaneshjuu3_5->Name = L"paneldaneshjuu3_5";
			this->paneldaneshjuu3_5->Size = System::Drawing::Size(707, 332);
			this->paneldaneshjuu3_5->TabIndex = 3;
			// 
			// pansabtnameostad4
			// 
			this->pansabtnameostad4->Controls->Add(this->panelaslostad5);
			this->pansabtnameostad4->Controls->Add(this->button7);
			this->pansabtnameostad4->Controls->Add(this->label4);
			this->pansabtnameostad4->Controls->Add(this->label5);
			this->pansabtnameostad4->Controls->Add(this->button8);
			this->pansabtnameostad4->Controls->Add(this->label7);
			this->pansabtnameostad4->Controls->Add(this->textBox3);
			this->pansabtnameostad4->Controls->Add(this->label8);
			this->pansabtnameostad4->Controls->Add(this->textBox4);
			this->pansabtnameostad4->Controls->Add(this->label9);
			this->pansabtnameostad4->Controls->Add(this->label10);
			this->pansabtnameostad4->Controls->Add(this->textBox5);
			this->pansabtnameostad4->Controls->Add(this->label11);
			this->pansabtnameostad4->Controls->Add(this->textBox6);
			this->pansabtnameostad4->Controls->Add(this->label12);
			this->pansabtnameostad4->Location = System::Drawing::Point(0, 0);
			this->pansabtnameostad4->Name = L"pansabtnameostad4";
			this->pansabtnameostad4->Size = System::Drawing::Size(707, 332);
			this->pansabtnameostad4->TabIndex = 18;
			// 
			// panelaslostad5
			// 
			this->panelaslostad5->Controls->Add(this->moshakhasatasmun6);
			this->panelaslostad5->Controls->Add(this->button9);
			this->panelaslostad5->Controls->Add(this->button10);
			this->panelaslostad5->Controls->Add(this->button11);
			this->panelaslostad5->Controls->Add(this->button3);
			this->panelaslostad5->Location = System::Drawing::Point(0, 0);
			this->panelaslostad5->Name = L"panelaslostad5";
			this->panelaslostad5->Size = System::Drawing::Size(707, 332);
			this->panelaslostad5->TabIndex = 16;
			// 
			// moshakhasatasmun6
			// 
			this->moshakhasatasmun6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->moshakhasatasmun6->Controls->Add(this->afzuddandaneshju7);
			this->moshakhasatasmun6->Controls->Add(this->bazgashtbepanelmodir);
			this->moshakhasatasmun6->Controls->Add(this->buttonafzudanafrad);
			this->moshakhasatasmun6->Controls->Add(this->textBoxtedadsoala);
			this->moshakhasatasmun6->Controls->Add(this->label19);
			this->moshakhasatasmun6->Controls->Add(this->label18);
			this->moshakhasatasmun6->Controls->Add(this->label17);
			this->moshakhasatasmun6->Controls->Add(this->label16);
			this->moshakhasatasmun6->Controls->Add(this->label15);
			this->moshakhasatasmun6->Controls->Add(this->label14);
			this->moshakhasatasmun6->Controls->Add(this->numericUpDownminend);
			this->moshakhasatasmun6->Controls->Add(this->numericUpDownhourend);
			this->moshakhasatasmun6->Controls->Add(this->numericUpDownminstart);
			this->moshakhasatasmun6->Controls->Add(this->numericUpDownhourstart);
			this->moshakhasatasmun6->Controls->Add(this->label13);
			this->moshakhasatasmun6->Controls->Add(this->textBoxbodjebandi);
			this->moshakhasatasmun6->Controls->Add(this->label6);
			this->moshakhasatasmun6->Controls->Add(this->textBoxonvan);
			this->moshakhasatasmun6->Controls->Add(this->onvan);
			this->moshakhasatasmun6->Location = System::Drawing::Point(0, 0);
			this->moshakhasatasmun6->Name = L"moshakhasatasmun6";
			this->moshakhasatasmun6->Size = System::Drawing::Size(707, 332);
			this->moshakhasatasmun6->TabIndex = 21;
			this->moshakhasatasmun6->Visible = false;
			// 
			// afzuddandaneshju7
			// 
			this->afzuddandaneshju7->Controls->Add(this->afzudansoal);
			this->afzuddandaneshju7->Controls->Add(this->button14);
			this->afzuddandaneshju7->Controls->Add(this->tableLayoutPanel1);
			this->afzuddandaneshju7->Controls->Add(this->button12);
			this->afzuddandaneshju7->Location = System::Drawing::Point(0, 0);
			this->afzuddandaneshju7->Name = L"afzuddandaneshju7";
			this->afzuddandaneshju7->Size = System::Drawing::Size(707, 332);
			this->afzuddandaneshju7->TabIndex = 22;
			this->afzuddandaneshju7->Visible = false;
			// 
			// afzudansoal
			// 
			this->afzudansoal->Controls->Add(this->panel18);
			this->afzudansoal->Controls->Add(this->label29);
			this->afzudansoal->Controls->Add(this->button15);
			this->afzudansoal->Controls->Add(this->textBoxgozine2);
			this->afzudansoal->Controls->Add(this->textBoxgozine3);
			this->afzudansoal->Controls->Add(this->textBoxgozine4);
			this->afzudansoal->Controls->Add(this->textBoxgozine1);
			this->afzudansoal->Controls->Add(this->checkBoxgozine3);
			this->afzudansoal->Controls->Add(this->checkBoxgozine4);
			this->afzudansoal->Controls->Add(this->checkBoxgozine2);
			this->afzudansoal->Controls->Add(this->checkBoxgozine1);
			this->afzudansoal->Controls->Add(this->labelgozine1);
			this->afzudansoal->Controls->Add(this->labelgozine2);
			this->afzudansoal->Controls->Add(this->labelgozine3);
			this->afzudansoal->Controls->Add(this->labelgozine4);
			this->afzudansoal->Controls->Add(this->pasokhtashrihi);
			this->afzudansoal->Controls->Add(this->labelpasokhtashrihi);
			this->afzudansoal->Controls->Add(this->checkBoxtrue);
			this->afzudansoal->Controls->Add(this->checkBoxfalse);
			this->afzudansoal->Controls->Add(this->soaratsoal);
			this->afzudansoal->Controls->Add(this->label24);
			this->afzudansoal->Controls->Add(this->taidnosoal);
			this->afzudansoal->Controls->Add(this->label23);
			this->afzudansoal->Controls->Add(this->comboBox1);
			this->afzudansoal->Controls->Add(this->button20);
			this->afzudansoal->Location = System::Drawing::Point(0, 0);
			this->afzudansoal->Name = L"afzudansoal";
			this->afzudansoal->Size = System::Drawing::Size(707, 332);
			this->afzudansoal->TabIndex = 25;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel18->Controls->Add(this->listazmunhayeostad9);
			this->panel18->Controls->Add(this->button19);
			this->panel18->Controls->Add(this->label30);
			this->panel18->Location = System::Drawing::Point(0, 0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(707, 332);
			this->panel18->TabIndex = 47;
			this->panel18->Visible = false;
			// 
			// listazmunhayeostad9
			// 
			this->listazmunhayeostad9->BackColor = System::Drawing::Color::Orange;
			this->listazmunhayeostad9->Controls->Add(this->listazmunhayedaneshju10);
			this->listazmunhayeostad9->Controls->Add(this->button13);
			this->listazmunhayeostad9->Controls->Add(this->linkLabel6);
			this->listazmunhayeostad9->Controls->Add(this->label31);
			this->listazmunhayeostad9->Controls->Add(this->linkLabel5);
			this->listazmunhayeostad9->Controls->Add(this->linkLabel4);
			this->listazmunhayeostad9->Controls->Add(this->linkLabel3);
			this->listazmunhayeostad9->Location = System::Drawing::Point(0, 0);
			this->listazmunhayeostad9->Name = L"listazmunhayeostad9";
			this->listazmunhayeostad9->Size = System::Drawing::Size(707, 332);
			this->listazmunhayeostad9->TabIndex = 24;
			this->listazmunhayeostad9->Visible = false;
			// 
			// listazmunhayedaneshju10
			// 
			this->listazmunhayedaneshju10->Controls->Add(this->linkLabel10);
			this->listazmunhayedaneshju10->Controls->Add(this->linkLabel9);
			this->listazmunhayedaneshju10->Controls->Add(this->linkLabel8);
			this->listazmunhayedaneshju10->Controls->Add(this->linkLabel7);
			this->listazmunhayedaneshju10->Controls->Add(this->label32);
			this->listazmunhayedaneshju10->Location = System::Drawing::Point(0, 0);
			this->listazmunhayedaneshju10->Name = L"listazmunhayedaneshju10";
			this->listazmunhayedaneshju10->Size = System::Drawing::Size(707, 332);
			this->listazmunhayedaneshju10->TabIndex = 6;
			// 
			// linkLabel10
			// 
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->Location = System::Drawing::Point(592, 193);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(61, 13);
			this->linkLabel10->TabIndex = 4;
			this->linkLabel10->TabStop = true;
			this->linkLabel10->Text = L"linkLabel10";
			this->linkLabel10->Visible = false;
			// 
			// linkLabel9
			// 
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->Location = System::Drawing::Point(602, 145);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(55, 13);
			this->linkLabel9->TabIndex = 3;
			this->linkLabel9->TabStop = true;
			this->linkLabel9->Text = L"linkLabel9";
			this->linkLabel9->Visible = false;
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Location = System::Drawing::Point(602, 102);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(55, 13);
			this->linkLabel8->TabIndex = 2;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"linkLabel8";
			this->linkLabel8->Visible = false;
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Location = System::Drawing::Point(602, 70);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(55, 13);
			this->linkLabel7->TabIndex = 1;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"linkLabel7";
			this->linkLabel7->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(575, 31);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(75, 13);
			this->label32->TabIndex = 0;
			this->label32->Text = L"لیست آزمون ها";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(0, 309);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(146, 23);
			this->button13->TabIndex = 5;
			this->button13->Text = L"بازگشت به صفحه اصلی";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Location = System::Drawing::Point(592, 167);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(55, 13);
			this->linkLabel6->TabIndex = 4;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"linkLabel6";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(592, 10);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(109, 13);
			this->label31->TabIndex = 3;
			this->label31->Text = L":لیست آزمون های شما";
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(592, 125);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(55, 13);
			this->linkLabel5->TabIndex = 2;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"linkLabel5";
			this->linkLabel5->Visible = false;
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(592, 85);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(55, 13);
			this->linkLabel4->TabIndex = 1;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"linkLabel4";
			this->linkLabel4->Visible = false;
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(592, 51);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(55, 13);
			this->linkLabel3->TabIndex = 0;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"linkLabel3";
			this->linkLabel3->Visible = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(287, 105);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(159, 23);
			this->button19->TabIndex = 23;
			this->button19->Text = L"بازگشت به صفحه اصلی";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(303, 58);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(139, 13);
			this->label30->TabIndex = 0;
			this->label30->Text = L"آزمون شما با موفقیت ثبت شد";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::Red;
			this->label29->Location = System::Drawing::Point(565, 108);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(130, 13);
			this->label29->TabIndex = 46;
			this->label29->Text = L"لطفا نوع سوال را وارد کنید";
			this->label29->Visible = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button15->Location = System::Drawing::Point(434, 304);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 45;
			this->button15->Text = L"ثبت سوال";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBoxgozine2
			// 
			this->textBoxgozine2->BackColor = System::Drawing::Color::LightGreen;
			this->textBoxgozine2->Location = System::Drawing::Point(134, 185);
			this->textBoxgozine2->Name = L"textBoxgozine2";
			this->textBoxgozine2->Size = System::Drawing::Size(175, 20);
			this->textBoxgozine2->TabIndex = 44;
			this->textBoxgozine2->Visible = false;
			// 
			// textBoxgozine3
			// 
			this->textBoxgozine3->BackColor = System::Drawing::Color::LightGreen;
			this->textBoxgozine3->Location = System::Drawing::Point(369, 263);
			this->textBoxgozine3->Name = L"textBoxgozine3";
			this->textBoxgozine3->Size = System::Drawing::Size(183, 20);
			this->textBoxgozine3->TabIndex = 43;
			this->textBoxgozine3->Visible = false;
			// 
			// textBoxgozine4
			// 
			this->textBoxgozine4->BackColor = System::Drawing::Color::LightGreen;
			this->textBoxgozine4->Location = System::Drawing::Point(134, 263);
			this->textBoxgozine4->Name = L"textBoxgozine4";
			this->textBoxgozine4->Size = System::Drawing::Size(175, 20);
			this->textBoxgozine4->TabIndex = 42;
			this->textBoxgozine4->Visible = false;
			// 
			// textBoxgozine1
			// 
			this->textBoxgozine1->BackColor = System::Drawing::Color::LightGreen;
			this->textBoxgozine1->Location = System::Drawing::Point(369, 185);
			this->textBoxgozine1->Name = L"textBoxgozine1";
			this->textBoxgozine1->Size = System::Drawing::Size(175, 20);
			this->textBoxgozine1->TabIndex = 41;
			this->textBoxgozine1->Visible = false;
			// 
			// checkBoxgozine3
			// 
			this->checkBoxgozine3->Location = System::Drawing::Point(535, 245);
			this->checkBoxgozine3->Name = L"checkBoxgozine3";
			this->checkBoxgozine3->Size = System::Drawing::Size(23, 24);
			this->checkBoxgozine3->TabIndex = 40;
			this->checkBoxgozine3->Text = L"checkBox14";
			this->checkBoxgozine3->UseVisualStyleBackColor = true;
			this->checkBoxgozine3->Visible = false;
			// 
			// checkBoxgozine4
			// 
			this->checkBoxgozine4->Location = System::Drawing::Point(295, 245);
			this->checkBoxgozine4->Name = L"checkBoxgozine4";
			this->checkBoxgozine4->Size = System::Drawing::Size(23, 24);
			this->checkBoxgozine4->TabIndex = 39;
			this->checkBoxgozine4->Text = L"checkBox13";
			this->checkBoxgozine4->UseVisualStyleBackColor = true;
			this->checkBoxgozine4->Visible = false;
			// 
			// checkBoxgozine2
			// 
			this->checkBoxgozine2->Location = System::Drawing::Point(295, 167);
			this->checkBoxgozine2->Name = L"checkBoxgozine2";
			this->checkBoxgozine2->Size = System::Drawing::Size(23, 24);
			this->checkBoxgozine2->TabIndex = 38;
			this->checkBoxgozine2->Text = L"checkBox12";
			this->checkBoxgozine2->UseVisualStyleBackColor = true;
			this->checkBoxgozine2->Visible = false;
			// 
			// checkBoxgozine1
			// 
			this->checkBoxgozine1->Location = System::Drawing::Point(535, 167);
			this->checkBoxgozine1->Name = L"checkBoxgozine1";
			this->checkBoxgozine1->Size = System::Drawing::Size(23, 24);
			this->checkBoxgozine1->TabIndex = 37;
			this->checkBoxgozine1->Text = L"checkBox1";
			this->checkBoxgozine1->UseVisualStyleBackColor = true;
			this->checkBoxgozine1->Visible = false;
			// 
			// labelgozine1
			// 
			this->labelgozine1->AutoSize = true;
			this->labelgozine1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelgozine1->Location = System::Drawing::Point(485, 172);
			this->labelgozine1->Name = L"labelgozine1";
			this->labelgozine1->Size = System::Drawing::Size(51, 13);
			this->labelgozine1->TabIndex = 36;
			this->labelgozine1->Text = L"گزینه اول";
			this->labelgozine1->Visible = false;
			// 
			// labelgozine2
			// 
			this->labelgozine2->AutoSize = true;
			this->labelgozine2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelgozine2->Location = System::Drawing::Point(243, 172);
			this->labelgozine2->Name = L"labelgozine2";
			this->labelgozine2->Size = System::Drawing::Size(51, 13);
			this->labelgozine2->TabIndex = 35;
			this->labelgozine2->Text = L"گزینه دوم";
			this->labelgozine2->Visible = false;
			// 
			// labelgozine3
			// 
			this->labelgozine3->AutoSize = true;
			this->labelgozine3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelgozine3->Location = System::Drawing::Point(480, 250);
			this->labelgozine3->Name = L"labelgozine3";
			this->labelgozine3->Size = System::Drawing::Size(55, 13);
			this->labelgozine3->TabIndex = 34;
			this->labelgozine3->Text = L"گزینه سوم";
			this->labelgozine3->Visible = false;
			// 
			// labelgozine4
			// 
			this->labelgozine4->AutoSize = true;
			this->labelgozine4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelgozine4->Location = System::Drawing::Point(232, 250);
			this->labelgozine4->Name = L"labelgozine4";
			this->labelgozine4->Size = System::Drawing::Size(62, 13);
			this->labelgozine4->TabIndex = 33;
			this->labelgozine4->Text = L"گزینه چهارم";
			this->labelgozine4->Visible = false;
			// 
			// pasokhtashrihi
			// 
			this->pasokhtashrihi->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pasokhtashrihi->Location = System::Drawing::Point(33, 198);
			this->pasokhtashrihi->Multiline = true;
			this->pasokhtashrihi->Name = L"pasokhtashrihi";
			this->pasokhtashrihi->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->pasokhtashrihi->Size = System::Drawing::Size(462, 105);
			this->pasokhtashrihi->TabIndex = 32;
			this->pasokhtashrihi->Visible = false;
			// 
			// labelpasokhtashrihi
			// 
			this->labelpasokhtashrihi->AutoSize = true;
			this->labelpasokhtashrihi->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelpasokhtashrihi->Location = System::Drawing::Point(493, 202);
			this->labelpasokhtashrihi->Name = L"labelpasokhtashrihi";
			this->labelpasokhtashrihi->Size = System::Drawing::Size(74, 13);
			this->labelpasokhtashrihi->TabIndex = 31;
			this->labelpasokhtashrihi->Text = L"پاسخ تشریحی";
			this->labelpasokhtashrihi->Visible = false;
			// 
			// checkBoxtrue
			// 
			this->checkBoxtrue->BackColor = System::Drawing::Color::SpringGreen;
			this->checkBoxtrue->Location = System::Drawing::Point(434, 163);
			this->checkBoxtrue->Name = L"checkBoxtrue";
			this->checkBoxtrue->Size = System::Drawing::Size(104, 24);
			this->checkBoxtrue->TabIndex = 30;
			this->checkBoxtrue->Text = L"صحیح";
			this->checkBoxtrue->UseVisualStyleBackColor = false;
			this->checkBoxtrue->Visible = false;
			// 
			// checkBoxfalse
			// 
			this->checkBoxfalse->BackColor = System::Drawing::Color::Red;
			this->checkBoxfalse->Location = System::Drawing::Point(287, 163);
			this->checkBoxfalse->Name = L"checkBoxfalse";
			this->checkBoxfalse->Size = System::Drawing::Size(104, 24);
			this->checkBoxfalse->TabIndex = 29;
			this->checkBoxfalse->Text = L"غلط";
			this->checkBoxfalse->UseVisualStyleBackColor = false;
			this->checkBoxfalse->Visible = false;
			// 
			// soaratsoal
			// 
			this->soaratsoal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->soaratsoal->Location = System::Drawing::Point(33, 50);
			this->soaratsoal->Multiline = true;
			this->soaratsoal->Name = L"soaratsoal";
			this->soaratsoal->Size = System::Drawing::Size(519, 105);
			this->soaratsoal->TabIndex = 28;
			this->soaratsoal->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label24->Location = System::Drawing::Point(489, 34);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 13);
			this->label24->TabIndex = 27;
			this->label24->Text = L"صورت سوال";
			this->label24->Visible = false;
			// 
			// taidnosoal
			// 
			this->taidnosoal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->taidnosoal->Location = System::Drawing::Point(621, 68);
			this->taidnosoal->Name = L"taidnosoal";
			this->taidnosoal->Size = System::Drawing::Size(75, 23);
			this->taidnosoal->TabIndex = 26;
			this->taidnosoal->Text = L"تایید";
			this->taidnosoal->UseVisualStyleBackColor = true;
			this->taidnosoal->Click += gcnew System::EventHandler(this, &MyForm::taidnosoal_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label23->Location = System::Drawing::Point(644, 24);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 13);
			this->label23->TabIndex = 25;
			this->label23->Text = L"نوع سوال";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"تستی", L"تشریحی", L"صحیح یا غلط" });
			this->comboBox1->Location = System::Drawing::Point(575, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Location = System::Drawing::Point(0, 309);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(159, 23);
			this->button20->TabIndex = 48;
			this->button20->Text = L"بازگشت به مشخصات آزمون";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->ForeColor = System::Drawing::Color::Fuchsia;
			this->button14->Location = System::Drawing::Point(62, 58);
			this->button14->Name = L"button14";
			this->button14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button14->Size = System::Drawing::Size(232, 23);
			this->button14->TabIndex = 24;
			this->button14->Text = L"افزودن سوال به آزمون";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				44)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				56)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				167)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				37)));
			this->tableLayoutPanel1->Controls->Add(this->label20, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label21, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label22, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->checkBox2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->name1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->family1, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->name2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->family2, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->radif2, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->name3, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->family3, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->radif3, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->name4, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->family4, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->radif4, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox6, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->name5, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->family5, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->radif5, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox7, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->name6, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->family6, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->radif6, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox8, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->name7, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->family7, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->radif7, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox9, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->name8, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->family8, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->radif8, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->checkBox10, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->name9, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->family9, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->radif9, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->checkBox11, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->name10, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->family10, 2, 10);
			this->tableLayoutPanel1->Controls->Add(this->radif10, 3, 10);
			this->tableLayoutPanel1->Controls->Add(this->label53, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->radif1, 3, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(300, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 11;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.090909F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(404, 295);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label20->Location = System::Drawing::Point(91, 13);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(106, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"نام";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label21->Location = System::Drawing::Point(203, 13);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(161, 13);
			this->label21->TabIndex = 2;
			this->label21->Text = L"نام خانوادگی";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label22->Location = System::Drawing::Point(370, 13);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(31, 13);
			this->label22->TabIndex = 3;
			this->label22->Text = L"ردیف";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(3, 29);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// name1
			// 
			this->name1->AutoSize = true;
			this->name1->Location = System::Drawing::Point(91, 26);
			this->name1->Name = L"name1";
			this->name1->Size = System::Drawing::Size(41, 13);
			this->name1->TabIndex = 5;
			this->name1->Text = L"label23";
			this->name1->Visible = false;
			// 
			// family1
			// 
			this->family1->AutoSize = true;
			this->family1->Location = System::Drawing::Point(203, 26);
			this->family1->Name = L"family1";
			this->family1->Size = System::Drawing::Size(41, 13);
			this->family1->TabIndex = 6;
			this->family1->Text = L"label24";
			this->family1->Visible = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(3, 55);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			// 
			// name2
			// 
			this->name2->AutoSize = true;
			this->name2->Location = System::Drawing::Point(91, 52);
			this->name2->Name = L"name2";
			this->name2->Size = System::Drawing::Size(41, 13);
			this->name2->TabIndex = 9;
			this->name2->Text = L"label26";
			this->name2->Visible = false;
			// 
			// family2
			// 
			this->family2->AutoSize = true;
			this->family2->Location = System::Drawing::Point(203, 52);
			this->family2->Name = L"family2";
			this->family2->Size = System::Drawing::Size(41, 13);
			this->family2->TabIndex = 10;
			this->family2->Text = L"label27";
			this->family2->Visible = false;
			// 
			// radif2
			// 
			this->radif2->AutoSize = true;
			this->radif2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif2->Location = System::Drawing::Point(370, 52);
			this->radif2->Name = L"radif2";
			this->radif2->Size = System::Drawing::Size(31, 26);
			this->radif2->TabIndex = 11;
			this->radif2->Text = L"2";
			this->radif2->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(3, 81);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Visible = false;
			// 
			// name3
			// 
			this->name3->AutoSize = true;
			this->name3->Location = System::Drawing::Point(91, 78);
			this->name3->Name = L"name3";
			this->name3->Size = System::Drawing::Size(41, 13);
			this->name3->TabIndex = 13;
			this->name3->Text = L"label29";
			this->name3->Visible = false;
			// 
			// family3
			// 
			this->family3->AutoSize = true;
			this->family3->Location = System::Drawing::Point(203, 78);
			this->family3->Name = L"family3";
			this->family3->Size = System::Drawing::Size(41, 13);
			this->family3->TabIndex = 14;
			this->family3->Text = L"label30";
			this->family3->Visible = false;
			// 
			// radif3
			// 
			this->radif3->AutoSize = true;
			this->radif3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif3->Location = System::Drawing::Point(370, 78);
			this->radif3->Name = L"radif3";
			this->radif3->Size = System::Drawing::Size(31, 26);
			this->radif3->TabIndex = 15;
			this->radif3->Text = L"3";
			this->radif3->Visible = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(3, 107);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 16;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			// 
			// name4
			// 
			this->name4->AutoSize = true;
			this->name4->Location = System::Drawing::Point(91, 104);
			this->name4->Name = L"name4";
			this->name4->Size = System::Drawing::Size(41, 13);
			this->name4->TabIndex = 17;
			this->name4->Text = L"label32";
			this->name4->Visible = false;
			// 
			// family4
			// 
			this->family4->AutoSize = true;
			this->family4->Location = System::Drawing::Point(203, 104);
			this->family4->Name = L"family4";
			this->family4->Size = System::Drawing::Size(41, 13);
			this->family4->TabIndex = 18;
			this->family4->Text = L"label33";
			this->family4->Visible = false;
			// 
			// radif4
			// 
			this->radif4->AutoSize = true;
			this->radif4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif4->Location = System::Drawing::Point(370, 104);
			this->radif4->Name = L"radif4";
			this->radif4->Size = System::Drawing::Size(31, 26);
			this->radif4->TabIndex = 19;
			this->radif4->Text = L"4";
			this->radif4->Visible = false;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(3, 133);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 20;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			// 
			// name5
			// 
			this->name5->AutoSize = true;
			this->name5->Location = System::Drawing::Point(91, 130);
			this->name5->Name = L"name5";
			this->name5->Size = System::Drawing::Size(41, 13);
			this->name5->TabIndex = 21;
			this->name5->Text = L"label35";
			this->name5->Visible = false;
			// 
			// family5
			// 
			this->family5->AutoSize = true;
			this->family5->Location = System::Drawing::Point(203, 130);
			this->family5->Name = L"family5";
			this->family5->Size = System::Drawing::Size(41, 13);
			this->family5->TabIndex = 22;
			this->family5->Text = L"label36";
			this->family5->Visible = false;
			// 
			// radif5
			// 
			this->radif5->AutoSize = true;
			this->radif5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif5->Location = System::Drawing::Point(370, 130);
			this->radif5->Name = L"radif5";
			this->radif5->Size = System::Drawing::Size(31, 26);
			this->radif5->TabIndex = 23;
			this->radif5->Text = L"5";
			this->radif5->Visible = false;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(3, 159);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 24;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->Visible = false;
			// 
			// name6
			// 
			this->name6->AutoSize = true;
			this->name6->Location = System::Drawing::Point(91, 156);
			this->name6->Name = L"name6";
			this->name6->Size = System::Drawing::Size(39, 13);
			this->name6->TabIndex = 25;
			this->name6->Text = L"name6";
			this->name6->Visible = false;
			// 
			// family6
			// 
			this->family6->AutoSize = true;
			this->family6->Location = System::Drawing::Point(203, 156);
			this->family6->Name = L"family6";
			this->family6->Size = System::Drawing::Size(41, 13);
			this->family6->TabIndex = 26;
			this->family6->Text = L"label39";
			this->family6->Visible = false;
			// 
			// radif6
			// 
			this->radif6->AutoSize = true;
			this->radif6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif6->Location = System::Drawing::Point(370, 156);
			this->radif6->Name = L"radif6";
			this->radif6->Size = System::Drawing::Size(31, 26);
			this->radif6->TabIndex = 27;
			this->radif6->Text = L"6";
			this->radif6->Visible = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(3, 185);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 28;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->Visible = false;
			// 
			// name7
			// 
			this->name7->AutoSize = true;
			this->name7->Location = System::Drawing::Point(91, 182);
			this->name7->Name = L"name7";
			this->name7->Size = System::Drawing::Size(39, 13);
			this->name7->TabIndex = 29;
			this->name7->Text = L"name7";
			this->name7->Visible = false;
			// 
			// family7
			// 
			this->family7->AutoSize = true;
			this->family7->Location = System::Drawing::Point(203, 182);
			this->family7->Name = L"family7";
			this->family7->Size = System::Drawing::Size(41, 13);
			this->family7->TabIndex = 30;
			this->family7->Text = L"label42";
			this->family7->Visible = false;
			// 
			// radif7
			// 
			this->radif7->AutoSize = true;
			this->radif7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif7->Location = System::Drawing::Point(370, 182);
			this->radif7->Name = L"radif7";
			this->radif7->Size = System::Drawing::Size(31, 26);
			this->radif7->TabIndex = 31;
			this->radif7->Text = L"7";
			this->radif7->Visible = false;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(3, 211);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 32;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->Visible = false;
			// 
			// name8
			// 
			this->name8->AutoSize = true;
			this->name8->Location = System::Drawing::Point(91, 208);
			this->name8->Name = L"name8";
			this->name8->Size = System::Drawing::Size(41, 13);
			this->name8->TabIndex = 33;
			this->name8->Text = L"label44";
			this->name8->Visible = false;
			// 
			// family8
			// 
			this->family8->AutoSize = true;
			this->family8->Location = System::Drawing::Point(203, 208);
			this->family8->Name = L"family8";
			this->family8->Size = System::Drawing::Size(41, 13);
			this->family8->TabIndex = 34;
			this->family8->Text = L"label45";
			this->family8->Visible = false;
			// 
			// radif8
			// 
			this->radif8->AutoSize = true;
			this->radif8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif8->Location = System::Drawing::Point(370, 208);
			this->radif8->Name = L"radif8";
			this->radif8->Size = System::Drawing::Size(31, 26);
			this->radif8->TabIndex = 35;
			this->radif8->Text = L"8";
			this->radif8->Visible = false;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(3, 237);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 36;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->Visible = false;
			// 
			// name9
			// 
			this->name9->AutoSize = true;
			this->name9->Location = System::Drawing::Point(91, 234);
			this->name9->Name = L"name9";
			this->name9->Size = System::Drawing::Size(41, 13);
			this->name9->TabIndex = 37;
			this->name9->Text = L"label47";
			this->name9->Visible = false;
			// 
			// family9
			// 
			this->family9->AutoSize = true;
			this->family9->Location = System::Drawing::Point(203, 234);
			this->family9->Name = L"family9";
			this->family9->Size = System::Drawing::Size(41, 13);
			this->family9->TabIndex = 38;
			this->family9->Text = L"label48";
			this->family9->Visible = false;
			// 
			// radif9
			// 
			this->radif9->AutoSize = true;
			this->radif9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif9->Location = System::Drawing::Point(370, 234);
			this->radif9->Name = L"radif9";
			this->radif9->Size = System::Drawing::Size(31, 26);
			this->radif9->TabIndex = 39;
			this->radif9->Text = L"9";
			this->radif9->Visible = false;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(3, 263);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 40;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->Visible = false;
			// 
			// name10
			// 
			this->name10->AutoSize = true;
			this->name10->Location = System::Drawing::Point(91, 260);
			this->name10->Name = L"name10";
			this->name10->Size = System::Drawing::Size(41, 13);
			this->name10->TabIndex = 41;
			this->name10->Text = L"label50";
			this->name10->Visible = false;
			// 
			// family10
			// 
			this->family10->AutoSize = true;
			this->family10->Location = System::Drawing::Point(203, 260);
			this->family10->Name = L"family10";
			this->family10->Size = System::Drawing::Size(41, 13);
			this->family10->TabIndex = 42;
			this->family10->Text = L"label51";
			this->family10->Visible = false;
			// 
			// radif10
			// 
			this->radif10->AutoSize = true;
			this->radif10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif10->Location = System::Drawing::Point(370, 260);
			this->radif10->Name = L"radif10";
			this->radif10->Size = System::Drawing::Size(31, 35);
			this->radif10->TabIndex = 43;
			this->radif10->Text = L"10";
			this->radif10->Visible = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label53->Location = System::Drawing::Point(3, 13);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(82, 13);
			this->label53->TabIndex = 44;
			this->label53->Text = L"افزودن به آزمون";
			// 
			// radif1
			// 
			this->radif1->AutoSize = true;
			this->radif1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->radif1->Location = System::Drawing::Point(370, 26);
			this->radif1->Name = L"radif1";
			this->radif1->Size = System::Drawing::Size(31, 26);
			this->radif1->TabIndex = 7;
			this->radif1->Text = L"1";
			this->radif1->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Location = System::Drawing::Point(0, 307);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(159, 23);
			this->button12->TabIndex = 22;
			this->button12->Text = L"بازگشت به مشخصات آزمون";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
			// 
			// bazgashtbepanelmodir
			// 
			this->bazgashtbepanelmodir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bazgashtbepanelmodir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bazgashtbepanelmodir->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bazgashtbepanelmodir->Location = System::Drawing::Point(0, 309);
			this->bazgashtbepanelmodir->Name = L"bazgashtbepanelmodir";
			this->bazgashtbepanelmodir->Size = System::Drawing::Size(128, 23);
			this->bazgashtbepanelmodir->TabIndex = 21;
			this->bazgashtbepanelmodir->Text = L"بازگشت به صفحه اصلی";
			this->bazgashtbepanelmodir->UseVisualStyleBackColor = false;
			this->bazgashtbepanelmodir->Click += gcnew System::EventHandler(this, &MyForm::bazgashtbepanelmodir_Click);
			// 
			// buttonafzudanafrad
			// 
			this->buttonafzudanafrad->BackColor = System::Drawing::Color::Fuchsia;
			this->buttonafzudanafrad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonafzudanafrad->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonafzudanafrad->Location = System::Drawing::Point(410, 275);
			this->buttonafzudanafrad->Name = L"buttonafzudanafrad";
			this->buttonafzudanafrad->Size = System::Drawing::Size(128, 23);
			this->buttonafzudanafrad->TabIndex = 16;
			this->buttonafzudanafrad->Text = L"افزودن افراد به آزمون";
			this->buttonafzudanafrad->UseVisualStyleBackColor = false;
			this->buttonafzudanafrad->Click += gcnew System::EventHandler(this, &MyForm::buttonafzudanafrad_Click);
			// 
			// textBoxtedadsoala
			// 
			this->textBoxtedadsoala->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxtedadsoala->Location = System::Drawing::Point(585, 275);
			this->textBoxtedadsoala->Name = L"textBoxtedadsoala";
			this->textBoxtedadsoala->Size = System::Drawing::Size(95, 20);
			this->textBoxtedadsoala->TabIndex = 15;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label19->Location = System::Drawing::Point(582, 259);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(98, 13);
			this->label19->TabIndex = 14;
			this->label19->Text = L":تعداد سوالات آزمون";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label18->Location = System::Drawing::Point(468, 222);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(84, 13);
			this->label18->TabIndex = 13;
			this->label18->Text = L"زمان پایان آزمون";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label17->Location = System::Drawing::Point(573, 202);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 13);
			this->label17->TabIndex = 12;
			this->label17->Text = L"دقیقه";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label16->Location = System::Drawing::Point(573, 132);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(32, 13);
			this->label16->TabIndex = 11;
			this->label16->Text = L"دقیقه";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label15->Location = System::Drawing::Point(645, 202);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 10;
			this->label15->Text = L"ساعت";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label14->Location = System::Drawing::Point(645, 132);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"ساعت";
			// 
			// numericUpDownminend
			// 
			this->numericUpDownminend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownminend->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDownminend->Location = System::Drawing::Point(558, 215);
			this->numericUpDownminend->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			this->numericUpDownminend->Name = L"numericUpDownminend";
			this->numericUpDownminend->Size = System::Drawing::Size(47, 20);
			this->numericUpDownminend->TabIndex = 8;
			// 
			// numericUpDownhourend
			// 
			this->numericUpDownhourend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownhourend->Location = System::Drawing::Point(627, 215);
			this->numericUpDownhourend->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->numericUpDownhourend->Name = L"numericUpDownhourend";
			this->numericUpDownhourend->Size = System::Drawing::Size(53, 20);
			this->numericUpDownhourend->TabIndex = 7;
			// 
			// numericUpDownminstart
			// 
			this->numericUpDownminstart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownminstart->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDownminstart->Location = System::Drawing::Point(558, 145);
			this->numericUpDownminstart->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			this->numericUpDownminstart->Name = L"numericUpDownminstart";
			this->numericUpDownminstart->Size = System::Drawing::Size(47, 20);
			this->numericUpDownminstart->TabIndex = 6;
			// 
			// numericUpDownhourstart
			// 
			this->numericUpDownhourstart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownhourstart->Location = System::Drawing::Point(627, 145);
			this->numericUpDownhourstart->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->numericUpDownhourstart->Name = L"numericUpDownhourstart";
			this->numericUpDownhourstart->Size = System::Drawing::Size(53, 20);
			this->numericUpDownhourstart->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->Location = System::Drawing::Point(464, 151);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"زمان شروع آزمون";
			// 
			// textBoxbodjebandi
			// 
			this->textBoxbodjebandi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxbodjebandi->Location = System::Drawing::Point(506, 82);
			this->textBoxbodjebandi->Name = L"textBoxbodjebandi";
			this->textBoxbodjebandi->Size = System::Drawing::Size(172, 20);
			this->textBoxbodjebandi->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Location = System::Drawing::Point(485, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(193, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L":بودجه بندی جهت نمایش برای دانشجویان";
			// 
			// textBoxonvan
			// 
			this->textBoxonvan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxonvan->Location = System::Drawing::Point(506, 34);
			this->textBoxonvan->Name = L"textBoxonvan";
			this->textBoxonvan->Size = System::Drawing::Size(172, 20);
			this->textBoxonvan->TabIndex = 1;
			// 
			// onvan
			// 
			this->onvan->AutoSize = true;
			this->onvan->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->onvan->Location = System::Drawing::Point(613, 18);
			this->onvan->Name = L"onvan";
			this->onvan->Size = System::Drawing::Size(67, 13);
			this->onvan->TabIndex = 0;
			this->onvan->Text = L":عنوان آزمون";
			this->onvan->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(0, 309);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(128, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"بازگشت به صفحه ورود";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Fuchsia;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Location = System::Drawing::Point(410, 121);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(286, 81);
			this->button10->TabIndex = 19;
			this->button10->Text = L"مدیریت آزمون و بررسی آزمون های جاری";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Fuchsia;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Location = System::Drawing::Point(410, 34);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(286, 81);
			this->button11->TabIndex = 18;
			this->button11->Text = L"ایجاد آزمون و اضافه کردن دانشجو به آزمون";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(0, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"بازگشت به صفحه ورود";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(3, 309);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"بازگشت به صفحه ورود";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(284, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"لطفا تمامی فیلد ها را پر کنید";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(185, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(250, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"این نام کاربری قبلا توسط شخص دیگری استفاده شده";
			this->label5->Visible = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Fuchsia;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Location = System::Drawing::Point(577, 209);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 40);
			this->button8->TabIndex = 12;
			this->button8->Text = L"ثبت نام";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(639, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(496, 184);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(178, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label8->Location = System::Drawing::Point(624, 168);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L":رمز عبور";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(496, 135);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(178, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label9->Location = System::Drawing::Point(613, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L":نام کاربری";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(639, 110);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(496, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(178, 20);
			this->textBox5->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label11->Location = System::Drawing::Point(602, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L":نام خانوادگی";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(496, 33);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(178, 20);
			this->textBox6->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label12->Location = System::Drawing::Point(651, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L":نام";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(0, 309);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 23);
			this->button6->TabIndex = 17;
			this->button6->Text = L"بازگشت به صفحه ورود";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Fuchsia;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(400, 154);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(286, 81);
			this->button5->TabIndex = 1;
			this->button5->Text = L"تنایج و نمرات آزمون ها";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Fuchsia;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(400, 67);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(286, 81);
			this->button4->TabIndex = 0;
			this->button4->Text = L"آزمون های شما(مشاهده لیست آزمون ها و شرکت در آنها )";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(3, 309);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"بازگشت به صفحه ورود";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(284, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"لطفا تمامی فیلد ها را پر کنید";
			this->label3->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(185, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"این نام کاربری قبلا توسط شخص دیگری استفاده شده";
			this->label1->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Fuchsia;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(578, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 40);
			this->button1->TabIndex = 12;
			this->button1->Text = L"ثبت نام";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBoxshomaredaneshjoi
			// 
			this->textBoxshomaredaneshjoi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxshomaredaneshjoi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxshomaredaneshjoi->Location = System::Drawing::Point(496, 229);
			this->textBoxshomaredaneshjoi->Name = L"textBoxshomaredaneshjoi";
			this->textBoxshomaredaneshjoi->Size = System::Drawing::Size(178, 20);
			this->textBoxshomaredaneshjoi->TabIndex = 11;
			// 
			// labelshomaredaneshjuii
			// 
			this->labelshomaredaneshjuii->AutoSize = true;
			this->labelshomaredaneshjuii->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->labelshomaredaneshjuii->Location = System::Drawing::Point(583, 215);
			this->labelshomaredaneshjuii->Name = L"labelshomaredaneshjuii";
			this->labelshomaredaneshjuii->Size = System::Drawing::Size(90, 13);
			this->labelshomaredaneshjuii->TabIndex = 10;
			this->labelshomaredaneshjuii->Text = L":شماره دانشجویی";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(639, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(496, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(178, 20);
			this->textBox2->TabIndex = 8;
			// 
			// labelramz
			// 
			this->labelramz->AutoSize = true;
			this->labelramz->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->labelramz->Location = System::Drawing::Point(624, 168);
			this->labelramz->Name = L"labelramz";
			this->labelramz->Size = System::Drawing::Size(50, 13);
			this->labelramz->TabIndex = 7;
			this->labelramz->Text = L":رمز عبور";
			this->labelramz->Click += gcnew System::EventHandler(this, &MyForm::labelramz_Click);
			// 
			// textBoxusername
			// 
			this->textBoxusername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxusername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxusername->Location = System::Drawing::Point(496, 135);
			this->textBoxusername->Name = L"textBoxusername";
			this->textBoxusername->Size = System::Drawing::Size(178, 20);
			this->textBoxusername->TabIndex = 6;
			// 
			// labelusername
			// 
			this->labelusername->AutoSize = true;
			this->labelusername->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->labelusername->Location = System::Drawing::Point(613, 119);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(61, 13);
			this->labelusername->TabIndex = 5;
			this->labelusername->Text = L":نام کاربری";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Location = System::Drawing::Point(639, 110);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(0, 13);
			this->username->TabIndex = 4;
			// 
			// textBoxlastname
			// 
			this->textBoxlastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxlastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxlastname->Location = System::Drawing::Point(496, 83);
			this->textBoxlastname->Name = L"textBoxlastname";
			this->textBoxlastname->Size = System::Drawing::Size(178, 20);
			this->textBoxlastname->TabIndex = 3;
			// 
			// lastname
			// 
			this->lastname->AutoSize = true;
			this->lastname->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->lastname->Location = System::Drawing::Point(602, 67);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(72, 13);
			this->lastname->TabIndex = 2;
			this->lastname->Text = L":نام خانوادگی";
			// 
			// textBoxname
			// 
			this->textBoxname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBoxname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxname->Location = System::Drawing::Point(496, 33);
			this->textBoxname->Name = L"textBoxname";
			this->textBoxname->Size = System::Drawing::Size(178, 20);
			this->textBoxname->TabIndex = 1;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->name->Location = System::Drawing::Point(651, 20);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(23, 13);
			this->name->TabIndex = 0;
			this->name->Text = L":نام";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(328, 28);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(161, 13);
			this->label25->TabIndex = 25;
			this->label25->Text = L"شخصی با این مشخصات یافت نشد";
			this->label25->Visible = false;
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::Red;
			this->label26->Location = System::Drawing::Point(344, 27);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(138, 13);
			this->label26->TabIndex = 24;
			this->label26->Text = L"لطفا تمامی فیلد ها را پر کنید";
			this->label26->Visible = false;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(420, 125);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(198, 13);
			this->linkLabel2->TabIndex = 23;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"اگر قبلا ثبت نام نکردید اکنون ثبت نام کنید";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Fuchsia;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Location = System::Drawing::Point(620, 115);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 22;
			this->button17->Text = L"ورود";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(595, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 21;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label27->Location = System::Drawing::Point(645, 70);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 13);
			this->label27->TabIndex = 20;
			this->label27->Text = L":رمز عبور";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Location = System::Drawing::Point(595, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 19;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(3, 304);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(128, 23);
			this->button16->TabIndex = 17;
			this->button16->Text = L"بازگشت به صفحه ورود";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->label28->Location = System::Drawing::Point(634, 10);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(61, 13);
			this->label28->TabIndex = 18;
			this->label28->Text = L":نام کاربری";
			// 
			// shakhsi_yaftnashod
			// 
			this->shakhsi_yaftnashod->AutoSize = true;
			this->shakhsi_yaftnashod->ForeColor = System::Drawing::Color::Red;
			this->shakhsi_yaftnashod->Location = System::Drawing::Point(368, 68);
			this->shakhsi_yaftnashod->Name = L"shakhsi_yaftnashod";
			this->shakhsi_yaftnashod->Size = System::Drawing::Size(161, 13);
			this->shakhsi_yaftnashod->TabIndex = 7;
			this->shakhsi_yaftnashod->Text = L"شخصی با این مشخصات یافت نشد";
			this->shakhsi_yaftnashod->Visible = false;
			this->shakhsi_yaftnashod->Click += gcnew System::EventHandler(this, &MyForm::shakhsi_yaftnashod_Click);
			// 
			// porkonid
			// 
			this->porkonid->AutoSize = true;
			this->porkonid->ForeColor = System::Drawing::Color::Red;
			this->porkonid->Location = System::Drawing::Point(391, 68);
			this->porkonid->Name = L"porkonid";
			this->porkonid->Size = System::Drawing::Size(138, 13);
			this->porkonid->TabIndex = 6;
			this->porkonid->Text = L"لطفا تمامی فیلد ها را پر کنید";
			this->porkonid->Visible = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(407, 151);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(198, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"اگر قبلا ثبت نام نکردید اکنون ثبت نام کنید";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// buttonvorud
			// 
			this->buttonvorud->BackColor = System::Drawing::Color::Fuchsia;
			this->buttonvorud->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonvorud->Location = System::Drawing::Point(611, 141);
			this->buttonvorud->Name = L"buttonvorud";
			this->buttonvorud->Size = System::Drawing::Size(75, 23);
			this->buttonvorud->TabIndex = 4;
			this->buttonvorud->Text = L"ورود";
			this->buttonvorud->UseVisualStyleBackColor = false;
			this->buttonvorud->Click += gcnew System::EventHandler(this, &MyForm::buttonvorud_Click);
			// 
			// ramzobur
			// 
			this->ramzobur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ramzobur->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ramzobur->Location = System::Drawing::Point(586, 109);
			this->ramzobur->Name = L"ramzobur";
			this->ramzobur->PasswordChar = '*';
			this->ramzobur->Size = System::Drawing::Size(100, 20);
			this->ramzobur->TabIndex = 3;
			this->ramzobur->UseSystemPasswordChar = true;
			// 
			// ramz
			// 
			this->ramz->AutoSize = true;
			this->ramz->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ramz->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->ramz->Location = System::Drawing::Point(636, 93);
			this->ramz->Name = L"ramz";
			this->ramz->Size = System::Drawing::Size(50, 13);
			this->ramz->TabIndex = 2;
			this->ramz->Text = L":رمز عبور";
			this->ramz->Click += gcnew System::EventHandler(this, &MyForm::ramz_Click);
			// 
			// namekarbari
			// 
			this->namekarbari->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->namekarbari->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->namekarbari->Location = System::Drawing::Point(586, 49);
			this->namekarbari->Name = L"namekarbari";
			this->namekarbari->Size = System::Drawing::Size(100, 20);
			this->namekarbari->TabIndex = 1;
			// 
			// labelnamekarbari
			// 
			this->labelnamekarbari->AutoSize = true;
			this->labelnamekarbari->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelnamekarbari->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->labelnamekarbari->Location = System::Drawing::Point(625, 33);
			this->labelnamekarbari->Name = L"labelnamekarbari";
			this->labelnamekarbari->Size = System::Drawing::Size(61, 13);
			this->labelnamekarbari->TabIndex = 0;
			this->labelnamekarbari->Text = L":نام کاربری";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(0, 309);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(128, 23);
			this->button18->TabIndex = 18;
			this->button18->Text = L"بازگشت به صفحه ورود";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(707, 332);
			this->Controls->Add(this->safhevorud1);
			this->Controls->Add(this->panelt);
			this->Controls->Add(this->panelstu);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"آزمون یار";
			this->safhevorud1->ResumeLayout(false);
			this->safhevorud1->PerformLayout();
			this->vorudostad2->ResumeLayout(false);
			this->vorudostad2->PerformLayout();
			this->panelsabtnamedaneshjo3->ResumeLayout(false);
			this->panelsabtnamedaneshjo3->PerformLayout();
			this->paneldaneshjuu3_5->ResumeLayout(false);
			this->pansabtnameostad4->ResumeLayout(false);
			this->pansabtnameostad4->PerformLayout();
			this->panelaslostad5->ResumeLayout(false);
			this->moshakhasatasmun6->ResumeLayout(false);
			this->moshakhasatasmun6->PerformLayout();
			this->afzuddandaneshju7->ResumeLayout(false);
			this->afzudansoal->ResumeLayout(false);
			this->afzudansoal->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->listazmunhayeostad9->ResumeLayout(false);
			this->listazmunhayeostad9->PerformLayout();
			this->listazmunhayedaneshju10->ResumeLayout(false);
			this->listazmunhayedaneshju10->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownminend))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownhourend))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownminstart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownhourstart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->safhevorud1->Visible = true;
		this->vorudostad2->Visible = false;
		this->panelsabtnamedaneshjo3->Visible = false;
		this->paneldaneshjuu3_5->Visible = false;
		this->pansabtnameostad4->Visible = false;
		this->panelaslostad5->Visible = false;
		this->moshakhasatasmun6->Visible = false;
		this->afzuddandaneshju7->Visible = false;
		this->afzudansoal->Visible = false;

	}
	private: System::Void ramz_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelramz_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label5->Visible = false;
		this->label4->Visible = false;
		if (this->textBox6->Text->Length == 0 || this->textBox5->Text->Length == 0 || this->textBox4->Text->Length == 0 || this->textBox3->Text->Length == 0)
			this->label4->Visible = true;
		else {
			teacher^ stu = gcnew teacher(this->textBox6->Text, this->textBox5->Text, this->textBox4->Text, this->textBox3->Text);
			bool temp = false;
			for (int i = 0; i <= m; i++) {
				if (teachers[i]->Repetitious(stu)) {
					this->label5->Visible = true;
					temp = true;
					delete stu;
					break;
				}
			}
			if (!temp) {
				m++;
				teachers[m] = stu;
				curteacher = m;
				delete stu;
				this->safhevorud1->Visible = true;
				this->vorudostad2->Visible = true;
				this->panelsabtnamedaneshjo3->Visible = true;
				this->paneldaneshjuu3_5->Visible = true;
				this->pansabtnameostad4->Visible = true;
				this->panelaslostad5->Visible = true;
				this->moshakhasatasmun6->Visible = false;
				this->afzuddandaneshju7->Visible = false;
				this->afzudansoal->Visible = false;
				this->textBox6->Text = "";
				this->textBox5->Text = "";
				this->textBox4->Text = "";
				this->textBox3->Text = "";
				this->label5->Visible = false;
				this->label4->Visible = false;
			}

		}
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vorudostad2->Visible = true;
	this->safhevorud1->Visible = true;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
}
private: System::Void buttonvorud_Click(System::Object^ sender, System::EventArgs^ e) {
	this->porkonid->Visible = false;
	this->shakhsi_yaftnashod->Visible = false;

	if (this->namekarbari->Text->Length == 0 || this->ramzobur->Text->Length == 0){
		this->porkonid->Visible = true;
	this->shakhsi_yaftnashod->Visible = false;
}
	else {
		bool temp = false;
		
		for (int i = 0; i <= n; i++) {

			if (students[i]->finde(this->namekarbari->Text, this->ramzobur->Text))
			{
				curstudent = i;
				temp = true;
				break;
			}
		}
		if (!temp){
			this->shakhsi_yaftnashod->Visible = true;
		this->porkonid->Visible = false;
	}
		else {
			
			this->porkonid->Visible = false;
			this->shakhsi_yaftnashod->Visible = false;
			this->namekarbari->Text =""; this->ramzobur->Text ="";
			this->paneldaneshjuu3_5->Visible = true; 
			this->safhevorud1->Visible = true;
			this->vorudostad2->Visible = true;;
			this->panelsabtnamedaneshjo3->Visible =true;
			this->pansabtnameostad4->Visible = false;
			this->panelaslostad5->Visible = false;
			this->moshakhasatasmun6->Visible = false;
			this->afzuddandaneshju7->Visible = false;
			this->afzudansoal->Visible = false;
		}

}
	this->linkLabel7->Text = "";
	this->linkLabel8->Text = "";
	this->linkLabel9->Text = "";
	this->linkLabel10->Text = "";
	int temp = 0;
	array<String^>^ nameazmun = gcnew array< String^ >(4);
	for (int i = 0; i < 4; i++) {
		nameazmun[i] = "";
	}
	int k = 0;
	for (int i = 0; i <= tedademt; i++) {
		for (int j = 0; j < 10; j++)
			if (exams[i]->getstudent(j) == students[curstudent]) {
				nameazmun[k] = exams[i]->getname();
				k++;
			}
	}
	if (nameazmun[0]->Length != 0) {
		this->linkLabel7->Text = nameazmun[0];
		this->linkLabel7->Visible = true;
	}
	if (nameazmun[1]->Length != 0) {
		this->linkLabel8->Text = nameazmun[1];
		this->linkLabel8->Visible = true;
	}
	if (nameazmun[2]->Length != 0) {
		this->linkLabel9->Text = nameazmun[2];
		this->linkLabel9->Visible = true;
	}
	if (nameazmun[3]->Length != 0) {
		this->linkLabel10->Text = nameazmun[3];
		this->linkLabel10->Visible = true;
	}
};

private: System::Void shakhsi_yaftnashod_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->panelaslostad5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->porkonid->Visible = false;
	this->shakhsi_yaftnashod->Visible = false;
	this->namekarbari->Text = ""; this->ramzobur->Text = "";	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label26->Visible = false;
	this->label25->Visible = false;

	if (this->textBox1->Text->Length == 0 || this->textBox7->Text->Length == 0)
		this->label26->Visible = true;
	else {
		bool temp = false;

		for (int i = 0; i <= m; i++) {

			if (teachers[i]->finde(this->textBox7->Text, this->textBox1->Text))
			{
				curteacher = i;
					temp = true;
				break;
			}
		}
		if (!temp)
			this->label25->Visible = true;
		else {
			
			this->label26->Visible = false;
			this->label25->Visible = false;
			this->textBox1->Text = ""; this->textBox7->Text = "";
			this->safhevorud1->Visible = true;
			this->vorudostad2->Visible = true;;
			this->panelsabtnamedaneshjo3->Visible = true;
			this->paneldaneshjuu3_5->Visible = true;
			this->pansabtnameostad4->Visible =true;
			this->panelaslostad5->Visible = true;
			this->moshakhasatasmun6->Visible = false;
			this->afzuddandaneshju7->Visible = false;
			this->afzudansoal->Visible = false;
		}
	}
};
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->label26->Visible = false;
	this->label25->Visible = false;
	this->textBox1->Text = ""; this->textBox7->Text = "";
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Visible = false;
	this->label3->Visible = false;
	if (this->textBoxname->Text->Length == 0 || this->textBoxlastname->Text->Length == 0 || this->textBoxusername->Text->Length == 0 || this->textBox2->Text->Length == 0 || this->textBoxshomaredaneshjoi->Text->Length == 0){
		this->label3->Visible = true;
	this->label1->Visible = false;
}
	else {
		student^ stu = gcnew student(this->textBoxname->Text, this->textBoxlastname->Text, this->textBoxusername->Text, this->textBox2->Text, this->textBoxshomaredaneshjoi->Text);
		bool temp = false;
		for (int i = 0; i <= n; i++) {
			if (students[i]->Repetitious(stu)) {
				this->label1->Visible = true;
				temp = true;
				delete stu;
				break;
			}
		}
		if (!temp) {
			n++;
			students[n] = stu;
			curstudent = n;
			delete stu;
			this->paneldaneshjuu3_5->Visible = true;
			this->safhevorud1->Visible = true;
			this->vorudostad2->Visible = true;;
			this->panelsabtnamedaneshjo3->Visible = true;
			this->pansabtnameostad4->Visible = false;
			this->panelaslostad5->Visible = false;
			this->moshakhasatasmun6->Visible = false;
			this->afzuddandaneshju7->Visible = false;
			this->afzudansoal->Visible = false;
			this->textBoxname->Text = "";
			this->textBoxlastname->Text = "";
			this->textBoxusername->Text = "";
			this->textBox2->Text = "";
			this->textBoxshomaredaneshjoi->Text = "";
			this->label1->Visible = false;
			this->label3->Visible = false;
		}

	}
	this->linkLabel7->Text = "";
	this->linkLabel8->Text = "";
	this->linkLabel9->Text = "";
	this->linkLabel10->Text = "";
	int temp = 0;
	array<String^>^ nameazmun = gcnew array< String^ >(4);
	for (int i = 0; i < 4; i++) {
		nameazmun[i] = "";
	}
	int k = 0;
	for (int i = temp; i <= tedademt; i++) {
		for (int j = 0; j < 10; j++)
			if (exams[i]->getstudent(j) == students[curstudent]) {
				nameazmun[k] = exams[i]->getname();
				k++;
			}
	}
	if (nameazmun[0]->Length != 0) {
		this->linkLabel7->Text = nameazmun[0];
		this->linkLabel7->Visible = true;
	}
	if (nameazmun[1]->Length != 0) {
		this->linkLabel8->Text = nameazmun[1];
		this->linkLabel8->Visible = true;
	}
	if (nameazmun[2]->Length != 0) {
		this->linkLabel9->Text = nameazmun[2];
		this->linkLabel9->Visible = true;
	}
	if (nameazmun[3]->Length != 0) {
		this->linkLabel10->Text = nameazmun[3];
		this->linkLabel10->Visible = true;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = true;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	
	tedademt++;
}
private: System::Void buttonafzudanafrad_Click(System::Object^ sender, System::EventArgs^ e) {
	this->checkBox2->Checked = 0;
	this->checkBox3->Checked = 0;
	this->checkBox4->Checked = 0;
	this->checkBox5->Checked = 0;
	this->checkBox6->Checked = 0;
	this->checkBox7->Checked = 0;
	this->checkBox8->Checked = 0;
	this->checkBox9->Checked = 0;
	this->checkBox10->Checked = 0;
	this->checkBox11->Checked = 0;
	numberofquestions = 0;
	String^ na; String^ bodj;
	int st; int en;  int numoq;
	na = this->textBoxonvan->Text;
	bodj = this->textBoxbodjebandi->Text;
	st = (this->numericUpDownhourstart->DecimalPlaces) +this->numericUpDownminstart->DecimalPlaces;
	en = (this->numericUpDownhourend->DecimalPlaces) + this->numericUpDownminend->DecimalPlaces;
	numoq = int::Parse(this->textBoxtedadsoala->Text); // string to int
	int temp;
	this->linkLabel3->Text = "";
	this->linkLabel4->Text = "";
	this->linkLabel5->Text = "";
	this->linkLabel6->Text = "";
	int tt = 0;
	exam^ currentexam=gcnew exam(na, bodj, st, en,curteacher, numoq);
	exams[tedademt] =currentexam;
	for (int i = 0; i <= tedademt; i++) {
		if (exams[i]->getteacher() == curteacher) {
			this->linkLabel3->Text = exams[i]->getname();
			this->linkLabel3->Visible = true;
			temp = i;
			break;
		}

	}
	for (int i = temp + 1; i <= tedademt; i++) {
		if (exams[i]->getteacher() == curteacher) {
			this->linkLabel4->Text = exams[i]->getname();
			this->linkLabel4->Visible = true;
			temp = i;
			break;
		}
	}
	for (int i = temp + 1; i <= tedademt; i++) {
		if (exams[i]->getteacher() == curteacher) {
			this->linkLabel5->Text = exams[i]->getname();
			this->linkLabel5->Visible = true;
			temp = i;
			break;
		}
	}
	for (int i = temp + 1; i <= tedademt; i++) {
		if (exams[i]->getteacher() == curteacher) {
			this->linkLabel6->Text = exams[i]->getname();
			this->linkLabel6->Visible = true;
			temp = i;
			break;
		}
	}
	this->textBoxonvan->Text = "";
	this->textBoxbodjebandi->Text="";
	this->numericUpDownhourstart->DecimalPlaces = 0;
	this->numericUpDownminstart->DecimalPlaces = 0;
	this->numericUpDownhourend->DecimalPlaces = 0;
	this->numericUpDownminend->DecimalPlaces = 0;
	this->textBoxtedadsoala->Text = "";

	if (n >= tt) {
		this->name1->Text = students[tt]->getfirstname();
		this->family1->Text = students[tt]->getlastname();
		this->checkBox2->Visible = true;
		this->name1->Visible = true;
		this->family1->Visible = true;
		this->radif1->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name2->Text = students[tt]->getfirstname();
		this->family2->Text = students[tt]->getlastname();
		this->checkBox3->Visible = true;
		this->name2->Visible = true;
		this->family2->Visible = true;
		this->radif2->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name3->Text = students[tt]->getfirstname();
		this->family3->Text = students[tt]->getlastname();
		this->name3->Visible = true;
		this->family3->Visible = true;
		this->radif3->Visible = true;
		this->checkBox4->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name4->Text = students[tt]->getfirstname();
		this->family4->Text = students[tt]->getlastname();
		this->name4->Visible = true;
		this->family4->Visible = true;
		this->radif4->Visible = true;
		this->checkBox5->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name5->Text = students[tt]->getfirstname();
		this->family5->Text = students[tt]->getlastname();
		this->name5->Visible = true;
		this->family5->Visible = true;
		this->radif5->Visible = true;
		this->checkBox6->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name6->Text = students[tt]->getfirstname();
		this->family6->Text = students[tt]->getlastname();
		this->name6->Visible = true;
		this->family6->Visible = true;
		this->radif6->Visible = true;
		this->checkBox7->Visible = true;
		tt++;
	}

	if (n >= tt) {
		this->name7->Text = students[tt]->getfirstname();
		this->family7->Text = students[tt]->getlastname();
		this->name7->Visible = true;
		this->family7->Visible = true;
		this->radif7->Visible = true;
		this->checkBox8->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name8->Text = students[tt]->getfirstname();
		this->family8->Text = students[tt]->getlastname();
		this->name8->Visible = true;
		this->family8->Visible = true;
		this->radif8->Visible = true;
		this->checkBox9->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name9->Text = students[tt]->getfirstname();
		this->family9->Text = students[tt]->getlastname();
		this->name9->Visible = true;
		this->family9->Visible = true;
		this->radif9->Visible = true;
		this->checkBox10->Visible = true;
		tt++;
	}
	if (n >= tt) {
		this->name10->Text = students[tt]->getfirstname();
		this->family10->Text = students[tt]->getlastname();
		this->name10->Visible = true;
		this->family10->Visible = true;
		this->radif10->Visible = true;
		this->checkBox11->Visible = true;
		tt++;
	}
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = true;
	this->afzuddandaneshju7->Visible = true;
	this->afzudansoal->Visible = false;
}
private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible =true;
	this->moshakhasatasmun6->Visible = true;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
}
	  
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked)
		exams[tedademt]->setstudent(0, students[0]);
	if (this->checkBox3->Checked)
		exams[tedademt]->setstudent(1, students[1]);
	if (this->checkBox4->Checked)
		exams[tedademt]->setstudent(2, students[2]);
	if (this->checkBox5->Checked)
		exams[tedademt]->setstudent(3, students[3]);
	if (this->checkBox6->Checked)
		exams[tedademt]->setstudent(4, students[4]);
	if (this->checkBox7->Checked)
		exams[tedademt]->setstudent(5, students[5]);
	if (this->checkBox8->Checked)
		exams[tedademt]->setstudent(6, students[6]);
	if (this->checkBox9->Checked)
		exams[tedademt]->setstudent(7, students[7]);
	if (this->checkBox10->Checked)
		exams[tedademt]->setstudent(8, students[8]);
	if (this->checkBox11->Checked)
		exams[tedademt]->setstudent(9, students[9]);
	this->afzudansoal->Visible = true;
	this->checkBox2->Checked =false;
	this->checkBox3->Checked =false;
	this->checkBox4->Checked = false;
	this->checkBox5->Checked = false;
	this->checkBox6->Checked =false;
	this->checkBox7->Checked = false;
	this->checkBox8->Checked = false;
	this->checkBox9->Checked =false;
	this->checkBox10->Checked = false;
	this->checkBox11->Checked = false;
	this->panel18->Visible = false;

}
	   int numberofquestions = -1;
private: System::Void taidnosoal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox1->SelectedIndex == -1) {
			this->soaratsoal->Visible = true;
			this->label29->Visible = true;
			this->label24->Visible = false;
			this->taidnosoal->Visible = false;
			this->labelpasokhtashrihi->Visible = false;
			this->pasokhtashrihi->Visible = false;
			this->checkBoxtrue->Visible = false;
			this->checkBoxfalse->Visible = false;
			this->checkBoxgozine1->Visible = false;
			this->checkBoxgozine2->Visible = false;
			this->checkBoxgozine3->Visible = false;
			this->checkBoxgozine4->Visible = false;
			this->labelgozine1->Visible = false;
			this->labelgozine2->Visible = false;
			this->labelgozine3->Visible = false;
			this->labelgozine4->Visible = false;
			this->textBoxgozine1->Visible = false;
			this->textBoxgozine2->Visible = false;
			this->textBoxgozine3->Visible = false;
			this->textBoxgozine4->Visible = false;
			this->label29->Visible = false;
		}
		if (this->comboBox1->SelectedIndex == 0) {//testi
			this->soaratsoal->Visible = true;
			this->label24->Visible = true;
			this->taidnosoal->Visible = true;
			this->labelpasokhtashrihi->Visible = false;
			this->pasokhtashrihi->Visible = false;
			this->checkBoxtrue->Visible = false;
			this->checkBoxfalse->Visible = false;
			this->checkBoxgozine1->Visible = true;
			this->checkBoxgozine2->Visible = true;
			this->checkBoxgozine3->Visible = true;
			this->checkBoxgozine4->Visible = true;
			this->labelgozine1->Visible = true;
			this->labelgozine2->Visible = true;
			this->labelgozine3->Visible = true;
			this->labelgozine4->Visible = true;
			this->textBoxgozine1->Visible = true;
			this->textBoxgozine2->Visible = true;
			this->textBoxgozine3->Visible = true;
			this->textBoxgozine4->Visible = true;
			this->label29->Visible = false;
		}
		if (this->comboBox1->SelectedIndex == 1) {//tashrihi
			this->soaratsoal->Visible = true;
			this->label24->Visible = true;
			this->taidnosoal->Visible = true;
			this->labelpasokhtashrihi->Visible = true;
			this->pasokhtashrihi->Visible = true;
			this->checkBoxtrue->Visible = false;
			this->checkBoxfalse->Visible = false;
			this->checkBoxgozine1->Visible = false;
			this->checkBoxgozine2->Visible = false;
			this->checkBoxgozine3->Visible = false;
			this->checkBoxgozine4->Visible = false;
			this->labelgozine1->Visible = false;
			this->labelgozine2->Visible = false;
			this->labelgozine3->Visible = false;
			this->labelgozine4->Visible = false;
			this->textBoxgozine1->Visible = false;
			this->textBoxgozine2->Visible = false;
			this->textBoxgozine3->Visible = false;
			this->textBoxgozine4->Visible = false;
			
		}
		if (this->comboBox1->SelectedIndex == 2) {//sahihghalat
			this->soaratsoal->Visible = true;
			this->label24->Visible = true;
			this->taidnosoal->Visible = true;
			this->labelpasokhtashrihi->Visible = false;
			this->pasokhtashrihi->Visible = false;
			this->checkBoxtrue->Visible = true;
			this->checkBoxfalse->Visible = true;
			this->checkBoxgozine1->Visible = false;
			this->checkBoxgozine2->Visible = false;
			this->checkBoxgozine3->Visible = false;
			this->checkBoxgozine4->Visible = false;
			this->labelgozine1->Visible = false;
			this->labelgozine2->Visible = false;
			this->labelgozine3->Visible = false;
			this->labelgozine4->Visible = false;
			this->textBoxgozine1->Visible = false;
			this->textBoxgozine2->Visible = false;
			this->textBoxgozine3->Visible = false;
			this->textBoxgozine4->Visible = false;
			this->label29->Visible = false;
		}
	
}
	 
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	 numberofquestions++;
	String^ sorat = this->soaratsoal->Text;
	if (this->checkBoxgozine1->Visible == true&&numberofquestions<exams[tedademt]->getnumberofques()) {
		bool javab = 0;
		if (this->checkBoxgozine1->Checked == true)
			javab = 1;
		if (this->checkBoxgozine2->Checked == true)
			javab = 2;
		if (this->checkBoxgozine3->Checked == true)
			javab = 3;
		if (this->checkBoxgozine4->Checked == true)
			javab = 4;
		exams[tedademt]->setquestiontesti(numberofquestions, sorat, 1, this->textBoxgozine1->Text, this->textBoxgozine2->Text, this->textBoxgozine3->Text, this->textBoxgozine4->Text, javab);
		this->soaratsoal->Visible = false;
		this->label24->Visible = false;
		this->taidnosoal->Visible = true;
		this->labelpasokhtashrihi->Visible = false;
		this->pasokhtashrihi->Visible = false;
		this->checkBoxtrue->Visible = false;
		this->checkBoxfalse->Visible = false;
		this->checkBoxgozine1->Visible = false;
		this->checkBoxgozine2->Visible = false;
		this->checkBoxgozine3->Visible = false;
		this->checkBoxgozine4->Visible = false;
		this->labelgozine1->Visible = false;
		this->labelgozine2->Visible = false;
		this->labelgozine3->Visible = false;
		this->labelgozine4->Visible = false;
		this->textBoxgozine1->Visible = false;
		this->textBoxgozine2->Visible = false;
		this->textBoxgozine3->Visible = false;
		this->textBoxgozine4->Visible = false;
		this->label29->Visible = false;
	}
	if (this->pasokhtashrihi->Visible == 1 && numberofquestions < exams[tedademt]->getnumberofques()) {
		exams[tedademt]->setquestiontashrihi(numberofquestions, sorat, 2, this->pasokhtashrihi->Text);
		this->soaratsoal->Visible = false;
		this->label24->Visible = false;
		this->taidnosoal->Visible = true;
		this->labelpasokhtashrihi->Visible = false;
		this->pasokhtashrihi->Visible = false;
		this->checkBoxtrue->Visible = false;
		this->checkBoxfalse->Visible = false;
		this->checkBoxgozine1->Visible = false;
		this->checkBoxgozine2->Visible = false;
		this->checkBoxgozine3->Visible = false;
		this->checkBoxgozine4->Visible = false;
		this->labelgozine1->Visible = false;
		this->labelgozine2->Visible = false;
		this->labelgozine3->Visible = false;
		this->labelgozine4->Visible = false;
		this->textBoxgozine1->Visible = false;
		this->textBoxgozine2->Visible = false;
		this->textBoxgozine3->Visible = false;
		this->textBoxgozine4->Visible = false;
		this->label29->Visible = false;
	}
	if (this->checkBoxfalse->Visible == true && numberofquestions < exams[tedademt]->getnumberofques()) {
		bool javab = 1;
		if (checkBoxtrue->Checked)
			javab = 1;
		if (checkBoxfalse->Checked)
			javab = 0;
		exams[tedademt]->setquestiontrueorfalse(numberofquestions, sorat, 3, javab);
		this->soaratsoal->Visible = false;
		this->label24->Visible = false;
		this->taidnosoal->Visible = true;
		this->labelpasokhtashrihi->Visible = false;
		this->pasokhtashrihi->Visible = false;
		this->checkBoxtrue->Visible = false;
		this->checkBoxfalse->Visible = false;
		this->checkBoxgozine1->Visible = false;
		this->checkBoxgozine2->Visible = false;
		this->checkBoxgozine3->Visible = false;
		this->checkBoxgozine4->Visible = false;
		this->labelgozine1->Visible = false;
		this->labelgozine2->Visible = false;
		this->labelgozine3->Visible = false;
		this->labelgozine4->Visible = false;
		this->textBoxgozine1->Visible = false;
		this->textBoxgozine2->Visible = false;
		this->textBoxgozine3->Visible = false;
		this->textBoxgozine4->Visible = false;
		this->label29->Visible = false;
	}
	if (numberofquestions == exams[tedademt]->getnumberofques()) {
		this->panel18->Visible = true;
		this->soaratsoal->Visible = false;
		this->label24->Visible = false;
		this->taidnosoal->Visible = true;
		this->labelpasokhtashrihi->Visible = false;
		this->pasokhtashrihi->Visible = false;
		this->checkBoxtrue->Visible = false;
		this->checkBoxfalse->Visible = false;
		this->checkBoxgozine1->Visible = false;
		this->checkBoxgozine2->Visible = false;
		this->checkBoxgozine3->Visible = false;
		this->checkBoxgozine4->Visible = false;
		this->labelgozine1->Visible = false;
		this->labelgozine2->Visible = false;
		this->labelgozine3->Visible = false;
		this->labelgozine4->Visible = false;
		this->textBoxgozine1->Visible = false;
		this->textBoxgozine2->Visible = false;
		this->textBoxgozine3->Visible = false;
		this->textBoxgozine4->Visible = false;
		this->label29->Visible = false;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	tedademt--;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->label4->Visible = false;
	this->textBox6->Text = "";
	this->textBox5->Text = "";
	this->textBox4->Text = "";
	this->textBox3->Text = "";
	this->label5->Visible = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->textBoxname->Text = "";
	this->textBoxlastname->Text = "";
	this->textBoxusername->Text = "";
	this->textBox2->Text = "";
	this->textBoxshomaredaneshjoi->Text = "";
	this->label1->Visible = false;
	this->label3->Visible = false;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->label26->Visible = false;
	this->label25->Visible = false;
	this->textBox1->Text = ""; this->textBox7->Text = "";
}
private: System::Void bazgashtbepanelmodir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible =true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	tedademt--;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->porkonid->Visible = false;
	this->shakhsi_yaftnashod->Visible = false;
	this->namekarbari->Text = ""; this->ramzobur->Text = "";	this->safhevorud1->Visible = false;
	this->vorudostad2->Visible = false;;
	this->panelsabtnamedaneshjo3->Visible = false;
	this->paneldaneshjuu3_5->Visible = false;
	this->pansabtnameostad4->Visible = false;
	this->panelaslostad5->Visible = false;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->panel18->Visible = false;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->panel18->Visible = false;
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
	/**
	for (int i = temp + 1; i < tedademt; i++) {
		if (exams[i]->getteacher() == curteacher) {
			this->linkLabel5->Text = exams[i]->getname();
			temp = i;
			break;
		}
	}
	for (int i = temp + 1; i < tedademt; i++) {
		if (exams[i]->getteacher() == curteacher) {
			this->linkLabel6->Text = exams[i]->getname();
			temp = i;
			break;
		}
	}*/
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = true;
	this->afzuddandaneshju7->Visible = true;
	this->afzudansoal->Visible = true;
	this->panel18->Visible = true;
	this->listazmunhayeostad9->Visible = true;
	this->listazmunhayedaneshju10->Visible = false;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->panel18->Visible = false;
	this->listazmunhayeostad9->Visible = false;
}
private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = false;
	this->afzuddandaneshju7->Visible = false;
	this->afzudansoal->Visible = false;
	this->panel18->Visible = false;
	this->listazmunhayeostad9->Visible = false;
	this->listazmunhayedaneshju10->Visible = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->safhevorud1->Visible = true;
	this->vorudostad2->Visible = true;;
	this->panelsabtnamedaneshjo3->Visible = true;
	this->paneldaneshjuu3_5->Visible = true;
	this->pansabtnameostad4->Visible = true;
	this->panelaslostad5->Visible = true;
	this->moshakhasatasmun6->Visible = true;
	this->afzuddandaneshju7->Visible =true;
	this->afzudansoal->Visible = true;
	this->panel18->Visible =true;
	this->listazmunhayeostad9->Visible = true;
	this->listazmunhayedaneshju10->Visible = true;
}
};
};
