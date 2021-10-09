object Form6: TForm6
  Left = 0
  Top = 0
  Caption = #1040#1085#1072#1083#1080#1079#1099
  ClientHeight = 714
  ClientWidth = 1092
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label6: TLabel
    Left = 8
    Top = 8
    Width = 90
    Height = 19
    Caption = #1042#1080#1076' '#1087#1088#1086#1073#1099
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 63
    Width = 158
    Height = 19
    Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#8470' '#1087#1088#1086#1073#1099
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 171
    Width = 545
    Height = 526
    DataSource = DataModule2.DataSource2
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnCellClick = DBGrid1CellClick
    OnMouseMove = DBGrid1MouseMove
    Columns = <
      item
        Expanded = False
        FieldName = 'ID_probi'
        Title.Caption = #8470' '#1087#1088#1086#1073#1099
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Naz_Gost'
        Title.Caption = #1053#1072#1079'. '#1043#1054#1057#1058
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Nom_GOST'
        Title.Caption = #8470' '#1043#1054#1057#1058#1072
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Raz_frakcii'
        Title.Caption = #1056#1072#1079#1088#1103#1076' '#1092#1088#1072#1082#1094#1080#1080
        Width = 90
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Sdal'
        Title.Caption = #1057#1076#1072#1083
        Width = 90
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Data_registrasii'
        Title.Caption = #1044#1072#1090#1072' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080
        Width = 100
        Visible = True
      end>
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 33
    Width = 305
    Height = 21
    Style = csDropDownList
    TabOrder = 1
    OnChange = ComboBox1Change
  end
  object Edit1: TEdit
    Left = 172
    Top = 60
    Width = 74
    Height = 21
    TabOrder = 2
    OnChange = Edit1Change
    OnKeyPress = Edit1KeyPress
  end
  object Button2: TButton
    Left = 895
    Top = 399
    Width = 113
    Height = 26
    Caption = #1054#1073#1085#1086#1074#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
    TabOrder = 3
    OnClick = Button2Click
  end
  object StringGrid2: TStringGrid
    Left = 575
    Top = 171
    Width = 319
    Height = 254
    ColCount = 4
    DefaultColWidth = 80
    Enabled = False
    RowCount = 10
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ParentFont = False
    ScrollBars = ssNone
    TabOrder = 4
    OnSelectCell = StringGrid2SelectCell
  end
  object Panel1: TPanel
    Left = 575
    Top = 431
    Width = 506
    Height = 266
    Enabled = False
    TabOrder = 5
    object Label3: TLabel
      Left = 16
      Top = 15
      Width = 145
      Height = 19
      Caption = #1052#1086#1088#1086#1079#1086#1089#1090#1086#1081#1082#1086#1089#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 16
      Top = 42
      Width = 88
      Height = 19
      Caption = #1055#1088#1086#1095#1085#1086#1089#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 16
      Top = 96
      Width = 117
      Height = 19
      Caption = #1048#1089#1090#1080#1088#1072#1077#1084#1086#1089#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 16
      Top = 123
      Width = 236
      Height = 19
      Caption = #1057#1086#1076#1077#1088#1078#1072#1085#1080#1077' '#1089#1083#1072#1073#1099#1093' '#1095#1072#1089#1090#1080#1094
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Left = 16
      Top = 150
      Width = 279
      Height = 19
      Caption = #1057#1086#1076#1077#1088#1078#1072#1085#1080#1077' '#1087#1086#1083#1080#1074#1080#1076#1085#1099#1093' '#1095#1072#1089#1090#1080#1094
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 16
      Top = 177
      Width = 97
      Height = 19
      Caption = #1040#1082#1090#1080#1074#1085#1086#1089#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label12: TLabel
      Left = 16
      Top = 202
      Width = 108
      Height = 19
      Caption = #1060#1086#1088#1084#1072' '#1079#1077#1088#1085#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label13: TLabel
      Left = 16
      Top = 227
      Width = 114
      Height = 19
      Caption = #1059#1089#1090#1086#1081#1095#1077#1074#1086#1089#1090#1100
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 16
      Top = 67
      Width = 294
      Height = 19
      Caption = #1057#1086#1076#1077#1088#1078#1072#1085#1080#1077' '#1084#1077#1090#1072#1083#1080#1095#1077#1089#1082#1080#1093' '#1095#1072#1089#1090#1080#1094
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object ComboBox2: TComboBox
      Left = 320
      Top = 13
      Width = 145
      Height = 21
      TabOrder = 0
      OnKeyDown = ComboBox2KeyDown
      OnKeyPress = ComboBox2KeyPress
    end
    object ComboBox3: TComboBox
      Left = 320
      Top = 40
      Width = 145
      Height = 21
      TabOrder = 1
      OnKeyDown = ComboBox3KeyDown
      OnKeyPress = ComboBox3KeyPress
    end
    object ComboBox4: TComboBox
      Left = 320
      Top = 67
      Width = 145
      Height = 21
      TabOrder = 2
      OnKeyDown = ComboBox4KeyDown
      OnKeyPress = ComboBox4KeyPress
    end
    object ComboBox5: TComboBox
      Left = 320
      Top = 94
      Width = 145
      Height = 21
      TabOrder = 3
      OnKeyDown = ComboBox5KeyDown
      OnKeyPress = ComboBox5KeyPress
    end
    object ComboBox6: TComboBox
      Left = 320
      Top = 121
      Width = 145
      Height = 21
      TabOrder = 4
      OnKeyDown = ComboBox6KeyDown
      OnKeyPress = ComboBox6KeyPress
    end
    object ComboBox7: TComboBox
      Left = 320
      Top = 148
      Width = 145
      Height = 21
      TabOrder = 5
      OnKeyDown = ComboBox7KeyDown
      OnKeyPress = ComboBox7KeyPress
    end
    object ComboBox8: TComboBox
      Left = 320
      Top = 175
      Width = 145
      Height = 21
      TabOrder = 6
      OnKeyDown = ComboBox8KeyDown
      OnKeyPress = ComboBox8KeyPress
    end
    object ComboBox10: TComboBox
      Left = 320
      Top = 202
      Width = 145
      Height = 21
      TabOrder = 7
      OnKeyDown = ComboBox10KeyDown
      OnKeyPress = ComboBox10KeyPress
    end
    object ComboBox11: TComboBox
      Left = 320
      Top = 229
      Width = 145
      Height = 21
      TabOrder = 8
      OnKeyDown = ComboBox11KeyDown
      OnKeyPress = ComboBox11KeyPress
    end
    object Button1: TButton
      Left = 471
      Top = 9
      Width = 25
      Height = 25
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 9
      OnClick = Button1Click
    end
    object Button4: TButton
      Left = 471
      Top = 36
      Width = 25
      Height = 25
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 10
      OnClick = Button4Click
    end
    object Button6: TButton
      Left = 471
      Top = 90
      Width = 25
      Height = 25
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 11
      OnClick = Button6Click
    end
    object Button9: TButton
      Left = 471
      Top = 171
      Width = 25
      Height = 25
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 12
      OnClick = Button9Click
    end
    object Button10: TButton
      Left = 471
      Top = 198
      Width = 25
      Height = 25
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 13
      OnClick = Button10Click
    end
    object Button11: TButton
      Left = 471
      Top = 227
      Width = 25
      Height = 25
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 14
      OnClick = Button11Click
    end
  end
  object DateTimePicker2: TDateTimePicker
    Left = 1104
    Top = 33
    Width = 32
    Height = 38
    Date = 43156.774430405090000000
    Time = 43156.774430405090000000
    TabOrder = 6
    Visible = False
  end
  object Button3: TButton
    Left = 351
    Top = 31
    Width = 113
    Height = 25
    Caption = #1054#1073#1085#1091#1083#1080#1090#1100' '#1087#1088#1086#1073#1091
    TabOrder = 7
    OnClick = Button3Click
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 108
    Width = 545
    Height = 57
    Caption = #1044#1072#1090#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    object CheckBox2: TCheckBox
      Left = 357
      Top = 22
      Width = 145
      Height = 21
      Caption = #1054#1090#1092#1080#1083#1100#1090#1088#1086#1074#1072#1090#1100'?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnClick = CheckBox2Click
    end
    object DateTimePicker1: TDateTimePicker
      Left = 27
      Top = 22
      Width = 134
      Height = 24
      Date = 43156.774430405090000000
      Time = 43156.774430405090000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
    end
    object DateTimePicker3: TDateTimePicker
      Left = 191
      Top = 22
      Width = 136
      Height = 24
      Date = 43156.774430405090000000
      Time = 43156.774430405090000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
    end
  end
  object Button5: TButton
    Left = 951
    Top = 8
    Width = 123
    Height = 25
    Caption = #1054#1089#1085#1086#1074#1099' '#1087#1088#1086#1074#1077#1076#1077#1085#1080#1103
    TabOrder = 9
    OnClick = Button5Click
  end
  object Timer1: TTimer
    Interval = 2
    OnTimer = Timer1Timer
    Left = 1104
    Top = 80
  end
end
