#pragma once

namespace BMICalculatorApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            PopulateRecipeLists();
            bmiCategoryLabel->Visible = true;
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ heightLabel;
        System::Windows::Forms::TextBox^ heightTextBox;
        System::Windows::Forms::Label^ weightLabel;
        System::Windows::Forms::TextBox^ weightTextBox;
        System::Windows::Forms::Button^ calculateButton;
        System::Windows::Forms::Label^ bmiLabel;
        System::Windows::Forms::Label^ suggestionLabel;
        System::Windows::Forms::ComboBox^ breakfastComboBox;
        System::Windows::Forms::ComboBox^ lunchComboBox;
        System::Windows::Forms::ComboBox^ dinnerComboBox;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

           System::Windows::Forms::Label^ bmiCategoryLabel; // New label to display the BMI category


        void InitializeComponent(void)
        {
            this->heightLabel = (gcnew System::Windows::Forms::Label());
            this->heightTextBox = (gcnew System::Windows::Forms::TextBox());
            this->weightLabel = (gcnew System::Windows::Forms::Label());
            this->weightTextBox = (gcnew System::Windows::Forms::TextBox());
            this->calculateButton = (gcnew System::Windows::Forms::Button());
            this->bmiLabel = (gcnew System::Windows::Forms::Label());
            this->suggestionLabel = (gcnew System::Windows::Forms::Label());
            this->breakfastComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->lunchComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->dinnerComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->bmiCategoryLabel = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // heightLabel
            // 
            this->heightLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->heightLabel->AutoSize = true;
            this->heightLabel->BackColor = System::Drawing::Color::Transparent;
            this->heightLabel->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->heightLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->heightLabel->Location = System::Drawing::Point(304, 185);
            this->heightLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->heightLabel->Name = L"heightLabel";
            this->heightLabel->Size = System::Drawing::Size(215, 32);
            this->heightLabel->TabIndex = 0;
            this->heightLabel->Text = L"Height (cm):";
            // 
            // heightTextBox
            // 
            this->heightTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->heightTextBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->heightTextBox->Location = System::Drawing::Point(523, 185);
            this->heightTextBox->Margin = System::Windows::Forms::Padding(2);
            this->heightTextBox->Name = L"heightTextBox";
            this->heightTextBox->Size = System::Drawing::Size(361, 39);
            this->heightTextBox->TabIndex = 1;
            // 
            // weightLabel
            // 
            this->weightLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->weightLabel->AutoSize = true;
            this->weightLabel->BackColor = System::Drawing::Color::Transparent;
            this->weightLabel->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->weightLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->weightLabel->Location = System::Drawing::Point(304, 233);
            this->weightLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->weightLabel->Name = L"weightLabel";
            this->weightLabel->Size = System::Drawing::Size(211, 32);
            this->weightLabel->TabIndex = 2;
            this->weightLabel->Text = L"Weight (kg):";
            // 
            // weightTextBox
            // 
            this->weightTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->weightTextBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->weightTextBox->Location = System::Drawing::Point(523, 228);
            this->weightTextBox->Margin = System::Windows::Forms::Padding(2);
            this->weightTextBox->Name = L"weightTextBox";
            this->weightTextBox->Size = System::Drawing::Size(361, 39);
            this->weightTextBox->TabIndex = 3;
            // 
            // calculateButton
            // 
            this->calculateButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->calculateButton->AutoSize = true;
            this->calculateButton->BackColor = System::Drawing::Color::Blue;
            this->calculateButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->calculateButton->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
            this->calculateButton->FlatAppearance->BorderSize = 10;
            this->calculateButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->calculateButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->calculateButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->calculateButton->Location = System::Drawing::Point(629, 281);
            this->calculateButton->Margin = System::Windows::Forms::Padding(2);
            this->calculateButton->Name = L"calculateButton";
            this->calculateButton->Size = System::Drawing::Size(141, 49);
            this->calculateButton->TabIndex = 4;
            this->calculateButton->Text = L"Calculate";
            this->calculateButton->UseVisualStyleBackColor = false;
            this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
            // 
            // bmiLabel
            // 
            this->bmiLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bmiLabel->AutoSize = true;
            this->bmiLabel->BackColor = System::Drawing::Color::Transparent;
            this->bmiLabel->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bmiLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->bmiLabel->Location = System::Drawing::Point(304, 346);
            this->bmiLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->bmiLabel->Name = L"bmiLabel";
            this->bmiLabel->Size = System::Drawing::Size(90, 32);
            this->bmiLabel->TabIndex = 5;
            this->bmiLabel->Text = L"BMI:";
            // 
            // suggestionLabel
            // 
            this->suggestionLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->suggestionLabel->AutoSize = true;
            this->suggestionLabel->BackColor = System::Drawing::Color::Transparent;
            this->suggestionLabel->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->suggestionLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->suggestionLabel->Location = System::Drawing::Point(304, 395);
            this->suggestionLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->suggestionLabel->Name = L"suggestionLabel";
            this->suggestionLabel->Size = System::Drawing::Size(206, 32);
            this->suggestionLabel->TabIndex = 6;
            this->suggestionLabel->Text = L"Suggestion:";
            // 
            // breakfastComboBox
            // 
            this->breakfastComboBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->breakfastComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->breakfastComboBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->breakfastComboBox->FormattingEnabled = true;
            this->breakfastComboBox->Location = System::Drawing::Point(304, 530);
            this->breakfastComboBox->Margin = System::Windows::Forms::Padding(2);
            this->breakfastComboBox->Name = L"breakfastComboBox";
            this->breakfastComboBox->Size = System::Drawing::Size(580, 39);
            this->breakfastComboBox->TabIndex = 7;
            // 
            // lunchComboBox
            // 
            this->lunchComboBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lunchComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->lunchComboBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lunchComboBox->FormattingEnabled = true;
            this->lunchComboBox->Location = System::Drawing::Point(304, 609);
            this->lunchComboBox->Margin = System::Windows::Forms::Padding(2);
            this->lunchComboBox->Name = L"lunchComboBox";
            this->lunchComboBox->Size = System::Drawing::Size(580, 39);
            this->lunchComboBox->TabIndex = 8;
            // 
            // dinnerComboBox
            // 
            this->dinnerComboBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->dinnerComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->dinnerComboBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->dinnerComboBox->FormattingEnabled = true;
            this->dinnerComboBox->Location = System::Drawing::Point(304, 683);
            this->dinnerComboBox->Margin = System::Windows::Forms::Padding(2);
            this->dinnerComboBox->Name = L"dinnerComboBox";
            this->dinnerComboBox->Size = System::Drawing::Size(580, 39);
            this->dinnerComboBox->TabIndex = 9;
            // 
            // bmiCategoryLabel
            // 
            this->bmiCategoryLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->bmiCategoryLabel->AutoSize = true;
            this->bmiCategoryLabel->BackColor = System::Drawing::Color::Transparent;
            this->bmiCategoryLabel->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bmiCategoryLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->bmiCategoryLabel->Location = System::Drawing::Point(304, 443);
            this->bmiCategoryLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->bmiCategoryLabel->Name = L"bmiCategoryLabel";
            this->bmiCategoryLabel->Size = System::Drawing::Size(244, 32);
            this->bmiCategoryLabel->TabIndex = 5;
            this->bmiCategoryLabel->Text = L"BMI Category:";
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label1->Location = System::Drawing::Point(304, 650);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(138, 32);
            this->label1->TabIndex = 10;
            this->label1->Text = L"Dinner:";
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label2->Location = System::Drawing::Point(304, 575);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(127, 32);
            this->label2->TabIndex = 11;
            this->label2->Text = L"Lunch:";
            // 
            // label3
            // 
            this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label3->Location = System::Drawing::Point(304, 496);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(190, 32);
            this->label3->TabIndex = 12;
            this->label3->Text = L"BreakFast:";
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label4->Location = System::Drawing::Point(623, 57);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(142, 41);
            this->label4->TabIndex = 13;
            this->label4->Text = L"BMAX";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // MyForm
            // 
            this->AllowDrop = true;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlText;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1320, 838);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dinnerComboBox);
            this->Controls->Add(this->lunchComboBox);
            this->Controls->Add(this->breakfastComboBox);
            this->Controls->Add(this->suggestionLabel);
            this->Controls->Add(this->bmiLabel);
            this->Controls->Add(this->calculateButton);
            this->Controls->Add(this->weightTextBox);
            this->Controls->Add(this->weightLabel);
            this->Controls->Add(this->heightTextBox);
            this->Controls->Add(this->bmiCategoryLabel);
            this->Controls->Add(this->heightLabel);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"BMI Calculator";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        void PopulateRecipeLists()
        {
            // Populate the breakfastComboBox with recipes for each BMI category
            breakfastComboBox->Items->AddRange(gcnew cli::array< String^ >(5) {
                "1. Avocado Toast", "2. Greek Yogurt with Berries", "3. Banana Nut Smoothie",
                    "4. Oatmeal with Almonds", "5. Scrambled Eggs with Spinach"
            });

            // Populate the lunchComboBox with recipes for each BMI category
            lunchComboBox->Items->AddRange(gcnew cli::array< String^ >(5) {
                "1. Grilled Chicken Salad", "2. Quinoa and Roasted Vegetables", "3. Lentil Soup",
                    "4. Grilled Turkey Sandwich", "5. Caesar Salad with Grilled Shrimp"
            });

            // Populate the dinnerComboBox with recipes for each BMI category
            dinnerComboBox->Items->AddRange(gcnew cli::array< String^ >(5) {
                "1. Baked Salmon", "2. Steamed Asparagus", "3. Brown Rice",
                    "4. Baked Chicken Breast", "5. Quinoa Pilaf"
            });
        }

        void calculateButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double height, weight;
            if (!Double::TryParse(heightTextBox->Text, height) || !Double::TryParse(weightTextBox->Text, weight) || height <= 0 || weight <= 0)
            {
                MessageBox::Show("Please enter valid height and weight values.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            double bmi = CalculateBMI(height, weight);
            bmiLabel->Text = "BMI: " + bmi.ToString("F2");
            suggestionLabel->Text = GetSuggestionBasedOnBMI(bmi);
        }

        double CalculateBMI(double height, double weight)
        {
            // Formula to calculate BMI: weight (kg) / (height (m) * height (m))
            double heightInMeters = height / 100.0; // Convert height from cm to meters
            return weight / (heightInMeters * heightInMeters);
        }

        String^ GetSuggestionBasedOnBMI(double bmi)
        {
            // Add more recipes for each BMI category based on the user's BMI
            String^ breakfastSuggestion;
            String^ lunchSuggestion;
            String^ dinnerSuggestion;
            String^ bmiCategory;

            if (bmi < 18.5)
            {
                bmiCategory = "Underweight";
                breakfastSuggestion = "1. Avocado Toast\n2. Greek Yogurt with Berries\n3. Banana Nut Smoothie\n4. Peanut Butter and Banana Sandwich\n5. Chia Seed Pudding";
                lunchSuggestion = "1. Grilled Chicken Salad\n2. Quinoa and Roasted Vegetables\n3. Lentil Soup\n4. Spinach and Feta Wrap\n5. Fruit and Nut Salad";
                dinnerSuggestion = "1. Baked Salmon\n2. Steamed Asparagus\n3. Brown Rice\n4. Veggie Stir-Fry\n5. Chickpea Curry";
            }
            else if (bmi >= 18.5 && bmi < 24.9)
            {
                bmiCategory = "Healthy (Normal Weight)";
                breakfastSuggestion = "1. Oatmeal with Almonds\n2. Scrambled Eggs with Spinach\n3. Fresh Fruit Salad\n4. Smoothie Bowl\n5. Veggie Omelette";
                lunchSuggestion = "1. Grilled Turkey Sandwich\n2. Caesar Salad with Grilled Shrimp\n3. Vegetable Stir Fry\n4. Caprese Salad\n5. Quinoa Salad with Chickpeas";
                dinnerSuggestion = "1. Baked Chicken Breast\n2. Quinoa Pilaf\n3. Roasted Brussels Sprouts\n4. Stuffed Bell Peppers\n5. Grilled Portobello Mushrooms";
            }
            else if (bmi >= 25 && bmi < 29.9)
            {
                bmiCategory = "Overweight";
                breakfastSuggestion = "1. Whole Grain Pancakes\n2. Veggie Omelette\n3. Mixed Nuts\n4. Breakfast Burrito\n5. Breakfast Quesadilla";
                lunchSuggestion = "1. Turkey and Avocado Wrap\n2. Mixed Greens Salad\n3. Sweet Potato Fries\n4. Tomato Basil Pasta\n5. Greek Chicken Pita";
                dinnerSuggestion = "1. Grilled Steak\n2. Baked Potatoes\n3. Steamed Green Beans\n4. Chicken Fajitas\n5. Mediterranean Stuffed Peppers";
            }
            else
            {
                bmiCategory = "Obese";
                breakfastSuggestion = "1. Chia Seed Pudding\n2. Spinach and Feta Omelette\n3. Green Smoothie\n4. Smoked Salmon Bagel\n5. Breakfast Quinoa Bowl";
                lunchSuggestion = "1. Quinoa Salad with Chickpeas\n2. Grilled Portobello Mushrooms\n3. Cucumber Salad\n4. Sushi Bowl\n5. Lentil and Roasted Vegetable Salad";
                dinnerSuggestion = "1. Grilled Vegetable Skewers\n2. Lentil Stew\n3. Cauliflower Rice\n4. Veggie Sushi Rolls\n5. Stuffed Acorn Squash";
            }
            bmiCategoryLabel->Text = "BMI Category: " + bmiCategory; // Update the BMI category label text

            // Update the ComboBoxes with the appropriate recipes for the user's BMI
            breakfastComboBox->Text = "";
            lunchComboBox->Text = "";
            dinnerComboBox->Text = "";
            breakfastComboBox->Items->Clear();
            lunchComboBox->Items->Clear();
            dinnerComboBox->Items->Clear();

            breakfastComboBox->Items->AddRange(breakfastSuggestion->Split('\n'));
            lunchComboBox->Items->AddRange(lunchSuggestion->Split('\n'));
            dinnerComboBox->Items->AddRange(dinnerSuggestion->Split('\n'));

            return "Choose a recipe from the drop-down lists for each meal.";
        }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {\
    
    this->BackgroundImage = Image::FromFile("bmi.jpg");



}
};
}
