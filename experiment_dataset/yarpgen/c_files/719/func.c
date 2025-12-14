/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/719
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
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8578)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) min(((unsigned short)59592), (((/* implicit */unsigned short) (short)32765))))))) ? (((/* implicit */int) var_13)) : (min((((/* implicit */int) (short)11556)), ((((_Bool)1) ? (((/* implicit */int) (short)11541)) : (((/* implicit */int) (short)32759)))))))))));
                    var_22 -= ((/* implicit */unsigned short) min(((~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-39)), (arr_1 [i_1])))))), (((/* implicit */int) (signed char)2))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_3] [i_0] [i_0 + 3] [i_0 - 1] [i_1 + 2] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1 + 1])), (var_6)))))) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_2] [i_3] [i_4])) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32762)), (arr_6 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((/* implicit */int) max(((unsigned short)6067), (((/* implicit */unsigned short) arr_12 [i_3 - 1] [i_3] [i_3] [i_0 - 1])))))))));
                                var_24 -= ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_15))));
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_5] [i_1] [i_5] [i_1 + 2] |= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_5])))));
                    var_26 |= var_17;
                    var_27 = ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)10896)) * (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [(short)10] [i_5])) : (((/* implicit */int) (unsigned short)33381))))))) ? (arr_11 [i_0 + 1] [10LL] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))));
                    var_28 ^= ((/* implicit */short) (~(min(((+(((/* implicit */int) (unsigned short)15015)))), (((/* implicit */int) ((unsigned short) (unsigned short)10896)))))));
                }
                var_29 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((unsigned short) (short)27793))), ((-(((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2] [i_1])))))) >> (((((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551612ULL)))) ? (((/* implicit */int) (short)11551)) : (((/* implicit */int) (unsigned short)9)))) - (11548)))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) min((var_30), (max((((/* implicit */long long int) var_0)), (var_6)))));
    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_4)))) ? (((/* implicit */int) (short)30305)) : (max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_5)))), (((/* implicit */int) var_11)))))))));
}
