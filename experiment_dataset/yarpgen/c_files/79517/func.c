/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79517
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        var_11 = ((((/* implicit */long long int) (-(((/* implicit */int) (short)-5525))))) / ((((!(((/* implicit */_Bool) 8822423809618085272ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 67108863)) : (var_9))))));
                        arr_13 [i_2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 67108863)) : (var_9))) : (var_8)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)116))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29009))) : (8759223912343720486LL)))), ((-(var_1))))));
                    }
                    arr_14 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (11506719272942799112ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (36028797018963967ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) >= (((/* implicit */int) (short)19661))))))))));
                    var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-27023)) ? (872573308761108276ULL) : (872573308761108276ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (0ULL) : (var_5)))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                                arr_20 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] = (-(var_9));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min(((-(var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(var_9)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) min((((11707249727873908832ULL) % (872573308761108276ULL))), (min((18446744073709551615ULL), (562949953421311ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))) : ((+(var_3))))));
    var_16 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8062930007911074600LL)) ? (11707249727873908844ULL) : (((/* implicit */unsigned long long int) 948035100148242870LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775784LL)) ? (8759223912343720483LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15785)))))) : (min((11411874370676989341ULL), (((/* implicit */unsigned long long int) (unsigned char)128)))))));
}
