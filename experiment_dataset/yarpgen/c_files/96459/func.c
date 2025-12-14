/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96459
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
    var_17 = ((/* implicit */int) (~(var_3)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned int) arr_0 [i_3]);
                        arr_11 [i_0 + 1] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 1651133316))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 2])), (((arr_2 [i_1] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12)))))))));
                        arr_12 [i_0] = ((/* implicit */unsigned short) var_1);
                        var_20 = ((/* implicit */_Bool) -1651133317);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) (signed char)-1)) % (((((/* implicit */_Bool) 1651133317)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) ((short) (unsigned short)0))))))))));
                        var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 3044965485999230213LL)) && (((/* implicit */_Bool) -1777168290812288784LL)))))) || (((/* implicit */_Bool) ((((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_4])) >= (arr_10 [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_6 [(short)10] [i_1] [i_2]))))))));
                        var_23 *= ((/* implicit */short) (unsigned short)48701);
                    }
                    arr_15 [i_2] [5U] [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)14))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_10 [i_0] [i_0]) == (((/* implicit */long long int) arr_5 [i_0] [i_1])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) > (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */int) ((_Bool) ((_Bool) var_16))))));
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    arr_19 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12)))) ? (((arr_8 [i_0 + 2] [i_1] [i_0] [(short)8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (1633433892U))))))) : (max((((((/* implicit */_Bool) (signed char)-15)) ? (arr_16 [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54126))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_0] [i_0 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))))))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (1777168290812288783LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_13))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1777168290812288783LL)) ? (((/* implicit */int) (short)30368)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1 - 1] [i_6] [i_6] [i_7] [i_6] [i_7]))))) : (((/* implicit */int) arr_14 [i_1 + 2] [i_1] [i_7] [i_7] [i_7] [i_7])))))));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [i_0] = ((((/* implicit */unsigned long long int) -1651133317)) != (((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_0 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_28 [i_8] [i_9]) + (arr_28 [i_9] [i_9])))) ? (((/* implicit */long long int) var_3)) : (min((1777168290812288783LL), (((/* implicit */long long int) (short)-30369)))))))));
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (-8625811318299092485LL)))))))));
                var_30 -= ((/* implicit */short) ((unsigned long long int) arr_27 [i_8]));
                var_31 += ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_9])))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (67108863LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
}
