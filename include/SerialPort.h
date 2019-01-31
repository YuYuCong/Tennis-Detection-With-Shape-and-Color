// //////////////////////////////////////////////////////////////////////////  

// /// COPYRIGHT NOTICE  

// /// Copyright (c) 2009, 锟斤拷锟叫科硷拷锟斤拷学tickTick Group  锟斤拷锟斤拷权锟斤拷锟斤拷锟斤拷  

// /// All rights reserved.  

// ///   

// /// @file    SerialPort.h    

// /// @brief   锟斤拷锟斤拷通锟斤拷锟斤拷头锟侥硷拷  

// ///  

// /// 锟斤拷锟侥硷拷锟斤拷纱锟斤拷锟酵拷锟斤拷锟斤拷锟斤拷锟斤拷  

// ///  

// /// @version 1.0     

// /// @author  卢锟斤拷   

// /// @E-mail锟斤拷lujun.hust@gmail.com  

// /// @date    2010/03/19  

// ///  

// ///  锟睫讹拷说锟斤拷锟斤拷  

// //////////////////////////////////////////////////////////////////////////  



// #ifndef SERIALPORT_H_  

// #define SERIALPORT_H_  



// #include <Windows.h>  



// /** 锟斤拷锟斤拷通锟斤拷锟斤拷

// *

// *  锟斤拷锟斤拷实锟斤拷锟剿对达拷锟节的伙拷锟斤拷锟斤拷锟斤拷

// *  锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟街革拷锟斤拷锟斤拷诘锟斤拷锟斤拷荨锟斤拷锟斤拷锟街革拷锟斤拷锟斤拷莸锟斤拷锟斤拷锟�

// */

// class CSerialPort

// {

// public:

// 	CSerialPort(void);

// 	~CSerialPort(void);



// public:



// 	/** 锟斤拷始锟斤拷锟斤拷锟节猴拷锟斤拷

// 	*

// 	*  @param:  UINT portNo 锟斤拷锟节憋拷锟�,默锟斤拷值为1,锟斤拷COM1,注锟斤拷,锟斤拷锟斤拷锟斤拷要锟斤拷锟斤拷9

// 	*  @param:  UINT baud   锟斤拷锟斤拷锟斤拷,默锟斤拷为9600

// 	*  @param:  char parity 锟角凤拷锟斤拷锟斤拷锟脚夹ｏ拷锟�,'Y'锟斤拷示锟斤拷要锟斤拷偶校锟斤拷,'N'锟斤拷示锟斤拷锟斤拷要锟斤拷偶校锟斤拷

// 	*  @param:  UINT databits 锟斤拷锟斤拷位锟侥革拷锟斤拷,默锟斤拷值为8锟斤拷锟斤拷锟斤拷位

// 	*  @param:  UINT stopsbits 停止位使锟矫革拷式,默锟斤拷值为1

// 	*  @param:  DWORD dwCommEvents 默锟斤拷为EV_RXCHAR,锟斤拷只要锟秸凤拷锟斤拷锟斤拷一锟斤拷锟街凤拷,锟斤拷锟斤拷锟揭伙拷锟斤拷录锟�

// 	*  @return: bool  锟斤拷始锟斤拷锟角凤拷晒锟�

// 	*  @note:   锟斤拷使锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟结供锟侥猴拷锟斤拷前,锟斤拷锟饺碉拷锟矫憋拷锟斤拷锟斤拷锟斤拷锟叫达拷锟节的筹拷始锟斤拷

// 	*锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷   /n锟斤拷锟斤拷锟斤拷锟结供锟斤拷一些锟斤拷锟矫的达拷锟节诧拷锟斤拷锟斤拷锟斤拷,锟斤拷锟斤拷要锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷细锟斤拷DCB锟斤拷锟斤拷,锟斤拷使锟斤拷锟斤拷锟截猴拷锟斤拷

// 	*           /n锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷时锟斤拷锟皆讹拷锟截闭达拷锟斤拷,锟斤拷锟斤拷锟斤拷锟街达拷泄乇沾锟斤拷锟�

// 	*  @see:

// 	*/

// 	bool InitPort(UINT  portNo = 1, UINT  baud = CBR_9600, char  parity = 'N', UINT  databits = 8, UINT  stopsbits = 1, DWORD dwCommEvents = EV_RXCHAR);



// 	/** 锟斤拷锟节筹拷始锟斤拷锟斤拷锟斤拷

// 	*

// 	*  锟斤拷锟斤拷锟斤拷锟结供直锟接革拷锟斤拷DCB锟斤拷锟斤拷锟斤拷锟矫达拷锟节诧拷锟斤拷

// 	*  @param:  UINT portNo

// 	*  @param:  const LPDCB & plDCB

// 	*  @return: bool  锟斤拷始锟斤拷锟角凤拷晒锟�

// 	*  @note:   锟斤拷锟斤拷锟斤拷锟结供锟矫伙拷锟皆讹拷锟斤拷卮锟斤拷诔锟绞硷拷锟斤拷锟斤拷锟�

// 	*  @see:

// 	*/

// 	bool InitPort(UINT  portNo, const LPDCB& plDCB);



// 	/** 锟斤拷锟斤拷锟斤拷锟斤拷叱锟�

// 	*

// 	*  锟斤拷锟斤拷锟斤拷锟竭筹拷锟斤拷啥源锟斤拷锟斤拷锟斤拷莸募锟斤拷锟�,锟斤拷锟斤拷锟斤拷锟秸碉拷锟斤拷锟斤拷锟捷达拷印锟斤拷锟斤拷幕锟斤拷锟�

// 	*  @return: bool  锟斤拷锟斤拷锟角凤拷晒锟�

// 	*  @note:   锟斤拷锟竭筹拷锟窖撅拷锟斤拷锟节匡拷锟斤拷状态时,锟斤拷锟斤拷flase

// 	*  @see:

// 	*/

// 	bool OpenListenThread();



// 	/** 锟截闭硷拷锟斤拷锟竭筹拷

// 	*

// 	*

// 	*  @return: bool  锟斤拷锟斤拷锟角凤拷晒锟�

// 	*  @note:   锟斤拷锟矫憋拷锟斤拷锟斤拷锟斤拷,锟斤拷锟斤拷锟斤拷锟节碉拷锟竭程斤拷锟结被锟截憋拷

// 	*  @see:

// 	*/

// 	bool CloseListenTread();



// 	/** 锟津串匡拷写锟斤拷锟斤拷

// 	*

// 	*  锟斤拷锟斤拷锟斤拷锟斤拷锟叫碉拷锟斤拷锟斤拷写锟诫到锟斤拷锟斤拷

// 	*  @param:  unsigned char * pData 指锟斤拷锟斤拷要写锟诫串锟节碉拷锟斤拷锟捷伙拷锟斤拷锟斤拷

// 	*  @param:  unsigned int length 锟斤拷要写锟斤拷锟斤拷锟斤拷莩锟斤拷锟�

// 	*  @return: bool  锟斤拷锟斤拷锟角凤拷晒锟�

// 	*  @note:   length锟斤拷要锟斤拷锟斤拷pData锟斤拷指锟津缓筹拷锟斤拷锟侥达拷小

// 	*  @see:

// 	*/

// 	bool WriteData(unsigned char* pData, unsigned int length);



// 	/** 锟斤拷取锟斤拷锟节伙拷锟斤拷锟斤拷锟叫碉拷锟街斤拷锟斤拷

// 	*

// 	*

// 	*  @return: UINT  锟斤拷锟斤拷锟角凤拷晒锟�

// 	*  @note:   锟斤拷锟斤拷锟节伙拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷时,锟斤拷锟斤拷0

// 	*  @see:

// 	*/

// 	UINT GetBytesInCOM();



// 	/** 锟斤拷取锟斤拷锟节斤拷锟秸伙拷锟斤拷锟斤拷锟斤拷一锟斤拷锟街节碉拷锟斤拷锟斤拷

// 	*

// 	*

// 	*  @param:  char & cRecved 锟斤拷哦锟饺★拷锟斤拷莸锟斤拷址锟斤拷锟斤拷锟�

// 	*  @return: bool  锟斤拷取锟角凤拷晒锟�

// 	*  @note:

// 	*  @see:

// 	*/

// 	bool ReadChar(char &cRecved);



// private:



// 	/** 锟津开达拷锟斤拷

// 	*

// 	*

// 	*  @param:  UINT portNo 锟斤拷锟斤拷锟借备锟斤拷

// 	*  @return: bool  锟斤拷锟角凤拷晒锟�

// 	*  @note:

// 	*  @see:

// 	*/

// 	bool openPort(UINT  portNo);



// 	/** 锟截闭达拷锟斤拷

// 	*

// 	*

// 	*  @return: void  锟斤拷锟斤拷锟角凤拷晒锟�

// 	*  @note:

// 	*  @see:

// 	*/

// 	void ClosePort();



// 	/** 锟斤拷锟节硷拷锟斤拷锟竭筹拷

// 	*

// 	*  锟斤拷锟斤拷锟斤拷锟皆达拷锟节碉拷锟斤拷锟捷猴拷锟斤拷息

// 	*  @param:  void * pParam 锟竭程诧拷锟斤拷

// 	*  @return: UINT WINAPI 锟竭程凤拷锟斤拷值

// 	*  @note:

// 	*  @see:

// 	*/

// 	static UINT WINAPI ListenThread(void* pParam);



// private:



// 	/** 锟斤拷锟节撅拷锟� */

// 	HANDLE  m_hComm;



// 	/** 锟竭筹拷锟剿筹拷锟斤拷志锟斤拷锟斤拷 */

// 	static bool s_bExit;



// 	/** 锟竭程撅拷锟� */

// 	volatile HANDLE    m_hListenThread;



// 	/** 同锟斤拷锟斤拷锟斤拷,锟劫斤拷锟斤拷锟斤拷锟斤拷 */

// 	CRITICAL_SECTION   m_csCommunicationSync;       //!< 锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�  



// };



// #endif //SERIALPORT_H_ 