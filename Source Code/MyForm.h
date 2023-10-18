#pragma once

namespace firstApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ closeButton;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelAnswer;
	private: System::Windows::Forms::Button^ ACbtn;
	private: System::Windows::Forms::Button^ plusMinusBtn;
	private: System::Windows::Forms::Button^ procentBtn;
	private: System::Windows::Forms::Button^ divBtn;
	private: System::Windows::Forms::Button^ sevenBtn;
	private: System::Windows::Forms::Button^ eightBtn;
	private: System::Windows::Forms::Button^ nineBtn;
	private: System::Windows::Forms::Button^ mulBtn;
	private: System::Windows::Forms::Button^ plusBtn;
	private: System::Windows::Forms::Button^ threeBtn;
	private: System::Windows::Forms::Button^ twoBtn;
	private: System::Windows::Forms::Button^ oneBtn;
	private: System::Windows::Forms::Button^ minusBtn;
	private: System::Windows::Forms::Button^ sixBtn;
	private: System::Windows::Forms::Button^ fiveBtn;
	private: System::Windows::Forms::Button^ fourBtn;
	private: System::Windows::Forms::Button^ equalsBtn;
	private: System::Windows::Forms::Button^ dotBtn;
	private: System::Windows::Forms::Button^ zeroBtn;
	private: float firstNum;
	private: char userAction = ' ';
	private: bool isEqual = false;
	private: bool isDragging = false; // ‘лаг дл€ определени€, идет ли перетаскивание
	private: Point offset; // —мещение курсора относительно левого верхнего угла окна



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code


		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelAnswer = (gcnew System::Windows::Forms::Label());
			this->ACbtn = (gcnew System::Windows::Forms::Button());
			this->plusMinusBtn = (gcnew System::Windows::Forms::Button());
			this->procentBtn = (gcnew System::Windows::Forms::Button());
			this->divBtn = (gcnew System::Windows::Forms::Button());
			this->sevenBtn = (gcnew System::Windows::Forms::Button());
			this->eightBtn = (gcnew System::Windows::Forms::Button());
			this->nineBtn = (gcnew System::Windows::Forms::Button());
			this->mulBtn = (gcnew System::Windows::Forms::Button());
			this->plusBtn = (gcnew System::Windows::Forms::Button());
			this->threeBtn = (gcnew System::Windows::Forms::Button());
			this->twoBtn = (gcnew System::Windows::Forms::Button());
			this->oneBtn = (gcnew System::Windows::Forms::Button());
			this->minusBtn = (gcnew System::Windows::Forms::Button());
			this->sixBtn = (gcnew System::Windows::Forms::Button());
			this->fiveBtn = (gcnew System::Windows::Forms::Button());
			this->fourBtn = (gcnew System::Windows::Forms::Button());
			this->equalsBtn = (gcnew System::Windows::Forms::Button());
			this->dotBtn = (gcnew System::Windows::Forms::Button());
			this->zeroBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// closeButton
			// 
			this->closeButton->BackColor = System::Drawing::Color::Red;
			this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->closeButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->closeButton->Location = System::Drawing::Point(337, 1);
			this->closeButton->Margin = System::Windows::Forms::Padding(1);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(35, 30);
			this->closeButton->TabIndex = 3;
			this->closeButton->Text = L"X";
			this->closeButton->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->closeButton->UseVisualStyleBackColor = false;
			this->closeButton->Click += gcnew System::EventHandler(this, &MyForm::closeButton_Click);
			// 
			// labelName
			// 
			this->labelName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->labelName->Location = System::Drawing::Point(121, 1);
			this->labelName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(138, 31);
			this->labelName->TabIndex = 1;
			this->labelName->Text = L"Calculator";
			// 
			// labelAnswer
			// 
			this->labelAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAnswer->ForeColor = System::Drawing::Color::White;
			this->labelAnswer->Location = System::Drawing::Point(12, 51);
			this->labelAnswer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAnswer->Name = L"labelAnswer";
			this->labelAnswer->Size = System::Drawing::Size(326, 65);
			this->labelAnswer->TabIndex = 2;
			this->labelAnswer->Text = L"0";
			this->labelAnswer->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ACbtn
			// 
			this->ACbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ACbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ACbtn->ForeColor = System::Drawing::Color::White;
			this->ACbtn->Location = System::Drawing::Point(27, 149);
			this->ACbtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ACbtn->Name = L"ACbtn";
			this->ACbtn->Size = System::Drawing::Size(74, 57);
			this->ACbtn->TabIndex = 4;
			this->ACbtn->Text = L"AC";
			this->ACbtn->UseVisualStyleBackColor = false;
			this->ACbtn->Click += gcnew System::EventHandler(this, &MyForm::ACbtn_Click);
			// 
			// plusMinusBtn
			// 
			this->plusMinusBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusMinusBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusMinusBtn->ForeColor = System::Drawing::Color::White;
			this->plusMinusBtn->Location = System::Drawing::Point(106, 149);
			this->plusMinusBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->plusMinusBtn->Name = L"plusMinusBtn";
			this->plusMinusBtn->Size = System::Drawing::Size(74, 57);
			this->plusMinusBtn->TabIndex = 5;
			this->plusMinusBtn->Text = L"+\\-";
			this->plusMinusBtn->UseVisualStyleBackColor = false;
			this->plusMinusBtn->Click += gcnew System::EventHandler(this, &MyForm::plusMinusBtn_Click);
			// 
			// procentBtn
			// 
			this->procentBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->procentBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procentBtn->ForeColor = System::Drawing::Color::White;
			this->procentBtn->Location = System::Drawing::Point(186, 149);
			this->procentBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->procentBtn->Name = L"procentBtn";
			this->procentBtn->Size = System::Drawing::Size(74, 57);
			this->procentBtn->TabIndex = 6;
			this->procentBtn->Text = L"%";
			this->procentBtn->UseVisualStyleBackColor = false;
			this->procentBtn->Click += gcnew System::EventHandler(this, &MyForm::procentBtn_Click);
			// 
			// divBtn
			// 
			this->divBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->divBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divBtn->ForeColor = System::Drawing::Color::White;
			this->divBtn->Location = System::Drawing::Point(265, 149);
			this->divBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->divBtn->Name = L"divBtn";
			this->divBtn->Size = System::Drawing::Size(74, 57);
			this->divBtn->TabIndex = 7;
			this->divBtn->Text = L"/";
			this->divBtn->UseVisualStyleBackColor = false;
			this->divBtn->Click += gcnew System::EventHandler(this, &MyForm::divBtn_Click);
			// 
			// sevenBtn
			// 
			this->sevenBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->sevenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sevenBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sevenBtn->ForeColor = System::Drawing::Color::White;
			this->sevenBtn->Location = System::Drawing::Point(27, 212);
			this->sevenBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->sevenBtn->Name = L"sevenBtn";
			this->sevenBtn->Size = System::Drawing::Size(74, 57);
			this->sevenBtn->TabIndex = 8;
			this->sevenBtn->Text = L"7";
			this->sevenBtn->UseVisualStyleBackColor = false;
			this->sevenBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// eightBtn
			// 
			this->eightBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->eightBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eightBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eightBtn->ForeColor = System::Drawing::Color::White;
			this->eightBtn->Location = System::Drawing::Point(106, 212);
			this->eightBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->eightBtn->Name = L"eightBtn";
			this->eightBtn->Size = System::Drawing::Size(74, 57);
			this->eightBtn->TabIndex = 9;
			this->eightBtn->Text = L"8";
			this->eightBtn->UseVisualStyleBackColor = false;
			this->eightBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// nineBtn
			// 
			this->nineBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->nineBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nineBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nineBtn->ForeColor = System::Drawing::Color::White;
			this->nineBtn->Location = System::Drawing::Point(186, 212);
			this->nineBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->nineBtn->Name = L"nineBtn";
			this->nineBtn->Size = System::Drawing::Size(74, 57);
			this->nineBtn->TabIndex = 10;
			this->nineBtn->Text = L"9";
			this->nineBtn->UseVisualStyleBackColor = false;
			this->nineBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// mulBtn
			// 
			this->mulBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->mulBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mulBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mulBtn->ForeColor = System::Drawing::Color::White;
			this->mulBtn->Location = System::Drawing::Point(265, 212);
			this->mulBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->mulBtn->Name = L"mulBtn";
			this->mulBtn->Size = System::Drawing::Size(74, 57);
			this->mulBtn->TabIndex = 11;
			this->mulBtn->Text = L"*";
			this->mulBtn->UseVisualStyleBackColor = false;
			this->mulBtn->Click += gcnew System::EventHandler(this, &MyForm::mulBtn_Click);
			// 
			// plusBtn
			// 
			this->plusBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->plusBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusBtn->ForeColor = System::Drawing::Color::White;
			this->plusBtn->Location = System::Drawing::Point(265, 338);
			this->plusBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->plusBtn->Name = L"plusBtn";
			this->plusBtn->Size = System::Drawing::Size(74, 57);
			this->plusBtn->TabIndex = 19;
			this->plusBtn->Text = L"+";
			this->plusBtn->UseVisualStyleBackColor = false;
			this->plusBtn->Click += gcnew System::EventHandler(this, &MyForm::plusBtn_Click);
			// 
			// threeBtn
			// 
			this->threeBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->threeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->threeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->threeBtn->ForeColor = System::Drawing::Color::White;
			this->threeBtn->Location = System::Drawing::Point(186, 338);
			this->threeBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->threeBtn->Name = L"threeBtn";
			this->threeBtn->Size = System::Drawing::Size(74, 57);
			this->threeBtn->TabIndex = 18;
			this->threeBtn->Text = L"3";
			this->threeBtn->UseVisualStyleBackColor = false;
			this->threeBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// twoBtn
			// 
			this->twoBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->twoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->twoBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->twoBtn->ForeColor = System::Drawing::Color::White;
			this->twoBtn->Location = System::Drawing::Point(106, 338);
			this->twoBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->twoBtn->Name = L"twoBtn";
			this->twoBtn->Size = System::Drawing::Size(74, 57);
			this->twoBtn->TabIndex = 17;
			this->twoBtn->Text = L"2";
			this->twoBtn->UseVisualStyleBackColor = false;
			this->twoBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// oneBtn
			// 
			this->oneBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->oneBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->oneBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->oneBtn->ForeColor = System::Drawing::Color::White;
			this->oneBtn->Location = System::Drawing::Point(27, 338);
			this->oneBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->oneBtn->Name = L"oneBtn";
			this->oneBtn->Size = System::Drawing::Size(74, 57);
			this->oneBtn->TabIndex = 16;
			this->oneBtn->Text = L"1";
			this->oneBtn->UseVisualStyleBackColor = false;
			this->oneBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// minusBtn
			// 
			this->minusBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->minusBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minusBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minusBtn->ForeColor = System::Drawing::Color::White;
			this->minusBtn->Location = System::Drawing::Point(265, 275);
			this->minusBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->minusBtn->Name = L"minusBtn";
			this->minusBtn->Size = System::Drawing::Size(74, 57);
			this->minusBtn->TabIndex = 15;
			this->minusBtn->Text = L"-";
			this->minusBtn->UseVisualStyleBackColor = false;
			this->minusBtn->Click += gcnew System::EventHandler(this, &MyForm::minusBtn_Click);
			// 
			// sixBtn
			// 
			this->sixBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->sixBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sixBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sixBtn->ForeColor = System::Drawing::Color::White;
			this->sixBtn->Location = System::Drawing::Point(186, 275);
			this->sixBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->sixBtn->Name = L"sixBtn";
			this->sixBtn->Size = System::Drawing::Size(74, 57);
			this->sixBtn->TabIndex = 14;
			this->sixBtn->Text = L"6";
			this->sixBtn->UseVisualStyleBackColor = false;
			this->sixBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// fiveBtn
			// 
			this->fiveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->fiveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fiveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fiveBtn->ForeColor = System::Drawing::Color::White;
			this->fiveBtn->Location = System::Drawing::Point(106, 275);
			this->fiveBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->fiveBtn->Name = L"fiveBtn";
			this->fiveBtn->Size = System::Drawing::Size(74, 57);
			this->fiveBtn->TabIndex = 13;
			this->fiveBtn->Text = L"5";
			this->fiveBtn->UseVisualStyleBackColor = false;
			this->fiveBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// fourBtn
			// 
			this->fourBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->fourBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fourBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fourBtn->ForeColor = System::Drawing::Color::White;
			this->fourBtn->Location = System::Drawing::Point(27, 275);
			this->fourBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->fourBtn->Name = L"fourBtn";
			this->fourBtn->Size = System::Drawing::Size(74, 57);
			this->fourBtn->TabIndex = 12;
			this->fourBtn->Text = L"4";
			this->fourBtn->UseVisualStyleBackColor = false;
			this->fourBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// equalsBtn
			// 
			this->equalsBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->equalsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equalsBtn->ForeColor = System::Drawing::Color::White;
			this->equalsBtn->Location = System::Drawing::Point(265, 401);
			this->equalsBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->equalsBtn->Name = L"equalsBtn";
			this->equalsBtn->Size = System::Drawing::Size(74, 57);
			this->equalsBtn->TabIndex = 23;
			this->equalsBtn->Text = L"=";
			this->equalsBtn->UseVisualStyleBackColor = false;
			this->equalsBtn->Click += gcnew System::EventHandler(this, &MyForm::equalsBtn_Click);
			// 
			// dotBtn
			// 
			this->dotBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->dotBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dotBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dotBtn->ForeColor = System::Drawing::Color::White;
			this->dotBtn->Location = System::Drawing::Point(186, 401);
			this->dotBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dotBtn->Name = L"dotBtn";
			this->dotBtn->Size = System::Drawing::Size(74, 57);
			this->dotBtn->TabIndex = 22;
			this->dotBtn->Text = L",";
			this->dotBtn->UseVisualStyleBackColor = false;
			this->dotBtn->Click += gcnew System::EventHandler(this, &MyForm::dotBtn_Click);
			// 
			// zeroBtn
			// 
			this->zeroBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->zeroBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zeroBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zeroBtn->ForeColor = System::Drawing::Color::White;
			this->zeroBtn->Location = System::Drawing::Point(27, 401);
			this->zeroBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->zeroBtn->Name = L"zeroBtn";
			this->zeroBtn->Size = System::Drawing::Size(153, 57);
			this->zeroBtn->TabIndex = 20;
			this->zeroBtn->Text = L"0";
			this->zeroBtn->UseVisualStyleBackColor = false;
			this->zeroBtn->Click += gcnew System::EventHandler(this, &MyForm::Numbers_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(372, 500);
			this->Controls->Add(this->equalsBtn);
			this->Controls->Add(this->dotBtn);
			this->Controls->Add(this->zeroBtn);
			this->Controls->Add(this->plusBtn);
			this->Controls->Add(this->threeBtn);
			this->Controls->Add(this->twoBtn);
			this->Controls->Add(this->oneBtn);
			this->Controls->Add(this->minusBtn);
			this->Controls->Add(this->sixBtn);
			this->Controls->Add(this->fiveBtn);
			this->Controls->Add(this->fourBtn);
			this->Controls->Add(this->mulBtn);
			this->Controls->Add(this->nineBtn);
			this->Controls->Add(this->eightBtn);
			this->Controls->Add(this->sevenBtn);
			this->Controls->Add(this->divBtn);
			this->Controls->Add(this->procentBtn);
			this->Controls->Add(this->plusMinusBtn);
			this->Controls->Add(this->ACbtn);
			this->Controls->Add(this->labelAnswer);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->closeButton);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void Numbers_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ btn = safe_cast<Button^>(sender);
			this->labelAnswer->ForeColor = Color::White;
			if (this->labelAnswer->Text == "0" || isEqual) {
				this->labelAnswer->Text = btn->Text;
				isEqual = false;
			}
			else {
				this->labelAnswer->Text += btn->Text;
			}
		}
		private: System::Void plusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			mathAction('+');
		}

		private: System::Void minusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			mathAction('-');
		}

		private: System::Void mulBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			mathAction('*');
		}

		private: System::Void divBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			mathAction('/');
		}

		private: System::Void mathAction(char action) {
			this->firstNum = System::Convert::ToDouble(this->labelAnswer->Text);
			this->userAction = action;
			this->labelAnswer->Text = "0";
		}

		private: System::Void equalsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (userAction == ' ') return;

			float secondNum = System::Convert::ToDouble(this->labelAnswer->Text);
			float answer = this->firstNum;

			switch (this->userAction) {
				case '+':
					answer += secondNum;
					break;
				case '-':
					answer -= secondNum;
					break;
				case '/':
					if(secondNum != 0) answer /= secondNum;
					else {
						answer = 0;
						this->labelAnswer->ForeColor = Color::Red;
						MessageBox::Show(this, "ƒеление на 0 невозможно.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					break;
				case '*':
					answer *= secondNum;
					break;
				case '%':
					answer *= secondNum;
					answer /= 100;
					break;
			}

			this->isEqual = true;
			this->labelAnswer->Text = System::Convert::ToString(answer);

		}

		private: System::Void ACbtn_Click(System::Object^ sender, System::EventArgs^ e) {
			this->labelAnswer->ForeColor = Color::White;
			this->labelAnswer->Text = "0";
			this->firstNum = 0;
			this->userAction = ' ';
			this->isEqual = false;
		}

		private: System::Void plusMinusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			float temp = System::Convert::ToDouble(this->labelAnswer->Text);
			temp *= -1;
			this->labelAnswer->Text = System::Convert::ToString(temp);
		}

		private: System::Void procentBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			mathAction('%');
		}

		private: System::Void dotBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if(!this->labelAnswer->Text->Contains(",")) this->labelAnswer->Text += ",";
		}
		private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				isDragging = true;
				offset = Point(e->X, e->Y);
			}
		}

		private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (isDragging) {
				Point newLocation = Point(this->Left + e->X - offset.X, this->Top + e->Y - offset.Y);
				this->Location = newLocation;
			}
		}

		private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			isDragging = false;
		}
	};
}
