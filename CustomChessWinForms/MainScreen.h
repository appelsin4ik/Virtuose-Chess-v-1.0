#pragma once

namespace CustomChessWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainScreen
	/// </summary>
	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:
		MainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ grid_ms;
	protected:

	protected:

	protected:
	private:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grid_ms = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// grid_ms
			// 
			this->grid_ms->ColumnCount = 8;
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->Location = System::Drawing::Point(1, 2);
			this->grid_ms->Name = L"grid_ms";
			this->grid_ms->RowCount = 8;
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->grid_ms->Size = System::Drawing::Size(622, 489);
			this->grid_ms->TabIndex = 0;
			this->grid_ms->Click += gcnew System::EventHandler(this, &MainScreen::grid_ms_Click);
			// 
			// MainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(623, 490);
			this->Controls->Add(this->grid_ms);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainScreen";
			this->Text = L"MainScreen";
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void grid_ms_Click(System::Object^ sender, System::EventArgs^ e) {

		int w = grid_ms->Width;
		int h = grid_ms->Height;




	}
	};
}
