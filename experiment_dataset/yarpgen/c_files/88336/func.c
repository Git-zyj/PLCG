/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88336
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = (+(arr_0 [i_0]));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_17 = min((arr_6 [i_0] [i_2] [i_2 - 1] [i_2]), (arr_6 [i_0] [i_0] [i_1] [i_0]));
                    var_18 &= ((/* implicit */long long int) ((((/* implicit */long long int) 524439117)) <= (4LL)));
                }
                for (int i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    var_19 = ((/* implicit */long long int) 524439115);
                    var_20 = ((/* implicit */unsigned long long int) (((~((~(var_6))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 524439115)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) 199576987))))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3 + 2] [i_3])) || (((/* implicit */_Bool) arr_7 [i_1] [i_3 - 1] [i_3 + 2] [i_3 - 4]))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        var_22 = 524439117;
                        var_23 = ((/* implicit */signed char) (+(94688223847652885ULL)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_18 [i_5] [i_5] = ((/* implicit */long long int) (~(var_7)));
                            var_24 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_17 [i_0] [i_0] [7ULL] [i_0] [i_6] [i_5] [i_4]) : (arr_17 [i_0] [i_1] [i_1] [7ULL] [i_5 + 2] [i_5] [(signed char)8]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5])) ? (var_6) : (((/* implicit */int) var_14)))))));
                            arr_19 [i_0] [i_4] [i_4] [i_0] [i_6] &= (+(arr_17 [i_5 - 2] [i_1] [i_4] [i_5] [i_5 - 2] [i_5] [i_1]));
                            var_25 = ((/* implicit */signed char) ((unsigned long long int) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 2]));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_22 [i_7] [i_5] [i_4] [7LL] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((-(((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_4] [(signed char)7] [i_7] [i_1] [i_7])) ? (((/* implicit */long long int) -740354043)) : (var_13))))) : (((/* implicit */long long int) (~(var_6))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_0])), (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_1])) ? (803437782) : (((var_9) % (arr_4 [i_0] [13] [i_5 - 2] [i_7])))))) : (((max((((/* implicit */long long int) arr_21 [i_7] [13LL] [i_4] [i_0] [i_0])), (8151694223250842348LL))) - (((/* implicit */long long int) var_7))))));
                        }
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [11LL] [11LL] [i_4] [11LL] [i_4]))));
                            var_28 = ((/* implicit */long long int) var_0);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -964405354)) ? (-199576987) : (-1706587606)));
                        }
                        var_30 = ((/* implicit */int) max((var_30), (((int) max((18352055849861898732ULL), (((/* implicit */unsigned long long int) arr_6 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 - 2])))))));
                    }
                    var_31 -= ((/* implicit */unsigned long long int) 1555999458);
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_1]) & (arr_0 [i_0])))));
                }
            }
        } 
    } 
    var_33 += max((1653420255), (((max((var_11), (var_8))) % (var_2))));
}
