/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66105
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
    var_14 = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) -2096722933)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_4)))) ? ((+(var_8))) : (var_7))))));
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_10)))) < (((((/* implicit */_Bool) (short)15196)) ? (((/* implicit */unsigned long long int) var_13)) : (var_0)))))), (min((max((var_4), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) var_1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_8);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) (-(var_10)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = (-(var_12));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_1 + 2] [i_1] [i_3] [i_4] [i_4])) ? (arr_13 [i_1 + 3] [i_1 + 2] [i_3] [i_3] [i_3] [i_4] [i_4]) : (arr_13 [i_1 + 3] [i_1 + 2] [i_3] [i_4] [i_4] [i_4] [i_4])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_18 [i_5] [i_5] = arr_2 [i_0];
                        arr_19 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                        arr_20 [i_5] [i_2] [i_1 + 1] [i_1] [i_5] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_0] [i_1 + 1] [i_1] [i_1 + 3]));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                        arr_26 [i_0] [i_0] [i_2] [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) ((var_8) << (((((/* implicit */int) arr_21 [i_0] [i_1 - 1])) - (24)))));
                    }
                }
            } 
        } 
    } 
}
