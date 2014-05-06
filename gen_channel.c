#include<stdio.h>

/*
% 功能：信道相应生成函数
% 输入：
%               nTx：发送天线数
%               nRx：接收天线数
%          FFT_SIZE：FFT变换点数
%       channelFreq：频域信道标记
%        channelMod：信道模型
%          carrBand：每个载波带宽
% 输出：
%             Hcell：频域信道输出
%                 h：时域信道输出
*/
channel* gen_channel(int nTx, int nRx, int FFT_SIZE, int channelFreq, int channelMod, int carrBand, int iSimu, int CELL_RADIUS, int nUE) {

	if(channelFreq) {
	}
	else {
	}
