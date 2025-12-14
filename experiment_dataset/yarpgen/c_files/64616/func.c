/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64616
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
    var_16 = ((/* implicit */short) 4294967295U);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22702)) ? (-8193952616019164467LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (short)-16384);
                    arr_9 [i_2] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_2 + 1])) >= (arr_6 [i_2])))), (max((((/* implicit */int) (short)-22702)), (-1440284706)))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (unsigned char)238);
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-22702))));
                        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)11] [i_2] [i_2] [(unsigned short)7]))) : (4053519417U)))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (short)22702);
                        arr_19 [i_2] [i_1] = ((/* implicit */signed char) max((max((((/* implicit */int) ((((/* implicit */long long int) 742131777)) <= (-8193952616019164467LL)))), (min((var_11), (((/* implicit */int) (short)-22703)))))), (1440284705)));
                        arr_20 [i_2] [i_2 + 1] [i_1] [i_2] = ((/* implicit */_Bool) (((+(min((((/* implicit */unsigned long long int) -7196919457795781647LL)), (arr_6 [i_2]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                        var_20 = ((/* implicit */short) var_13);
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2 + 1] [i_2] [i_4] [i_4]))))) ? (max((7196919457795781646LL), (((/* implicit */long long int) arr_10 [i_0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        arr_24 [i_0] [i_2] [i_2 + 1] [i_5] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) min((var_12), ((short)32)))), (arr_23 [i_2 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                        arr_25 [i_0] [i_2] [i_5 - 1] = ((/* implicit */long long int) (short)22702);
                        arr_26 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */int) (short)-22702)), (((((/* implicit */_Bool) 1440284706)) ? (((/* implicit */int) (short)-22702)) : (1777575505)))));
                    }
                    var_21 += 0LL;
                }
            } 
        } 
    } 
}
