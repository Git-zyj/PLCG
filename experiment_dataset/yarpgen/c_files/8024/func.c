/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8024
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
    var_20 = ((/* implicit */long long int) var_1);
    var_21 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-1)))))) ? (min((((((/* implicit */int) (short)6218)) / (((/* implicit */int) (short)-14)))), ((-(((/* implicit */int) (short)-18)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_14))))), (var_9))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_14))) % (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_1 [i_0] [i_0]) : (max((((/* implicit */unsigned long long int) var_13)), (35184371957760ULL)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_1 [3LL] [i_0]) / (arr_2 [17LL])))))) ? (arr_1 [i_0] [i_0]) : (((((arr_2 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) << (((((unsigned long long int) 18446744073709551596ULL)) - (18446744073709551564ULL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_2 [(unsigned char)2]) : (max((((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_6 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (unsigned short)43183)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((signed char) var_16));
                        arr_12 [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (var_7)))) && (((/* implicit */_Bool) (+(var_15))))))) << (((((/* implicit */int) min((max((((/* implicit */unsigned short) var_13)), (var_9))), (((/* implicit */unsigned short) ((unsigned char) var_9)))))) - (107)))));
                        arr_13 [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] [i_2] = ((/* implicit */long long int) arr_4 [i_3] [i_2] [i_0]);
                        var_25 = ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_1 [i_2] [i_2])));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_16 [(signed char)7] [(unsigned short)4] [3U] [i_2] [i_4] = ((/* implicit */short) arr_10 [i_2] [i_1] [7U] [6ULL]);
                        arr_17 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) var_7)) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)238)) && (((/* implicit */_Bool) (unsigned short)22352))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = var_19;
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_0] [(signed char)9] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))));
                        var_26 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_5])) ? (((/* implicit */int) arr_9 [i_5] [i_0] [i_1] [i_2] [i_2] [i_5])) : (((/* implicit */int) (unsigned char)235)))))));
                        arr_22 [i_1] [i_1] [i_1] [i_2] [i_1] [(short)6] = var_18;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_27 = ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [(signed char)17] [2ULL] [i_6])))) : (arr_11 [i_0] [i_0] [(unsigned short)13] [i_0] [i_5] [i_0]));
                            arr_25 [3U] [i_1] [i_2] [i_2] [i_6] = ((((/* implicit */_Bool) (short)32755)) ? (arr_11 [i_6] [i_5 - 2] [i_5 + 3] [i_5 - 1] [i_5 - 1] [i_5 + 1]) : (arr_11 [1ULL] [i_5 + 2] [i_5 + 1] [i_5] [i_5 - 2] [i_5 + 1]));
                        }
                        for (long long int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            arr_28 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((unsigned long long int) var_19)) : (((unsigned long long int) arr_5 [i_1] [i_2] [(signed char)14]))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)238)) != (((/* implicit */int) (signed char)127))));
                            var_29 = ((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_7 + 1] [i_7] [(_Bool)1]);
                            var_30 = ((/* implicit */int) ((unsigned long long int) ((long long int) (unsigned short)22331)));
                        }
                        for (long long int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] [2U] [i_2] [9U] [2U] = ((/* implicit */unsigned long long int) var_17);
                            arr_33 [i_8] [i_5 + 2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        }
                    }
                    arr_34 [7LL] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_7)) + (((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_0] [10LL] [i_0]))))))) ? (((var_12) + (((/* implicit */long long int) ((/* implicit */int) (short)3))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    arr_35 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_1] [i_1] [(unsigned char)1] [i_1] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19)))))) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) : (max(((-2147483647 - 1)), (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_1] [i_2] [(short)6])))))));
                }
            } 
        } 
        var_31 *= ((/* implicit */unsigned int) var_19);
    }
    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
    {
        arr_39 [i_9] [i_9] = min((((((/* implicit */_Bool) ((unsigned short) arr_27 [i_9]))) ? (var_3) : (((/* implicit */unsigned long long int) arr_36 [i_9 + 3] [i_9])))), (((/* implicit */unsigned long long int) (short)-4096)));
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((unsigned long long int) (+(arr_29 [i_9] [i_9] [18LL] [i_9])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (short)32755))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9 + 3] [i_9 + 2]))) : (arr_7 [i_9] [i_9])))) : ((+(-1346478137995308210LL)))))))))));
        arr_40 [i_9] [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)3)) > (((/* implicit */int) (short)28))));
    }
}
