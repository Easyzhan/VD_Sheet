# VD_Sheet
类似于微博&amp;微信的底部弹出框
####使用方法:
      
    _sheet = [[VD_Sheet alloc] initWithFrame:self.view.bounds titleArr:_titleArray];
    __weak typeof(_sheet) weakA = _sheet;
    weakA.Click = ^(NSInteger clickIndex) {

        NSLog(@"----clickindex = %@",_titleArray[clickIndex]);
      
        [weakA hiddenSheet];
    };
    [self.navigationController.view addSubview:_sheet];
      }
      - (VD_Sheet *)sheet{

    if (_sheet == nil) {
        _sheet = [[VD_Sheet alloc] initWithFrame:self.view.bounds titleArr:_titleArray];
    }
       return _sheet;
    }
    
  *传入的的titleArray = @[@"二代身份证",@"港澳通行证",@"台湾通行证",@"护照"];*
![image](https://ww1.sinaimg.cn/large/006tNbRwgy1fd4sh8ia4gj30ku12agoj.jpg)
