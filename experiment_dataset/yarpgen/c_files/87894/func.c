/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87894
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
    var_11 |= ((/* implicit */_Bool) var_10);
    var_12 = ((/* implicit */int) (short)-28359);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))) : (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((((/* implicit */int) var_6)), (arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) : (arr_1 [i_0] [i_0])));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (arr_0 [i_0]))) : ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)27200)) : (1325495837)))))));
        var_16 = arr_2 [i_0] [i_0];
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28359)) ? (((/* implicit */int) (short)-28359)) : (((/* implicit */int) var_6))))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1])) : (((/* implicit */int) (short)-512))))) : (((var_2) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1])))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) var_7);
                    arr_12 [i_1 - 1] [i_2] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)14193))))) ? ((+(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 14; i_7 += 4) 
                        {
                            {
                                arr_25 [i_4] [i_6] [i_7 - 2] = ((/* implicit */unsigned short) max((arr_18 [i_6] [i_4 + 1] [i_6] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35769)) ? (((/* implicit */int) (short)28359)) : (((/* implicit */int) var_1)))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-534)) ? (-100555656) : (((/* implicit */int) (short)-512)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_21 [i_5] [i_4 - 1] [i_5] [(unsigned short)2]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (short)-28335))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (short)-28359)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-28386)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_7)) ? (((var_2) ? (4344868007101344979LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
}
