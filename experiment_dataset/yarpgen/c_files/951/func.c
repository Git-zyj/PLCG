/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/951
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max(((signed char)127), ((signed char)(-127 - 1))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 3637557888U))));
                    var_17 *= ((/* implicit */unsigned char) arr_0 [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_18 *= ((/* implicit */short) min((arr_4 [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 736381223U))))))))));
                        arr_11 [i_2] = ((/* implicit */unsigned int) max(((~(arr_10 [i_1] [i_1] [3] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0])) ? (arr_0 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))) ? (max((86287773), (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_3]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) max((arr_4 [i_4] [i_4] [i_4]), (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2] [i_2] [(short)0])) ? (min((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_0] [i_3] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [20ULL] [i_2]))) : (arr_6 [4U] [i_3])))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((arr_3 [i_2]), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)1152))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)-127)))), (((/* implicit */int) arr_12 [i_1] [(signed char)4] [i_1] [i_1] [i_1]))))) & ((((~(arr_0 [i_4]))) & (((((/* implicit */_Bool) 3558586072U)) ? (((/* implicit */long long int) 3218871820U)) : (-4792862959423202547LL)))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [6ULL] [i_4])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (max((((/* implicit */unsigned long long int) 4294967295U)), (arr_4 [i_0] [i_0] [i_0])))))))));
                        }
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((var_6) ? (arr_15 [i_0] [i_2 + 1] [i_2] [i_5] [i_0]) : (arr_15 [i_0] [i_2 + 1] [i_2] [i_0] [i_1]))), (max((arr_15 [i_0] [i_2 + 1] [(signed char)5] [i_0] [i_5]), (((/* implicit */long long int) (signed char)-35))))));
                        arr_17 [i_0] [i_1] [i_0] [i_5] |= ((/* implicit */signed char) ((((((/* implicit */int) max((arr_8 [i_2 + 3] [i_2 + 3] [i_0]), (arr_8 [i_2 + 2] [i_2 - 1] [i_5])))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_2] [i_2 + 1] [i_2] [7]))) - (2348348420113707279ULL)))));
                        var_23 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_8)))) && (((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2] [i_2])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) arr_19 [i_2]);
                        var_25 = ((/* implicit */signed char) (~(((((/* implicit */long long int) min((2177635631U), (((/* implicit */unsigned int) (short)-32764))))) & ((((_Bool)1) ? (-7850425418187651749LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_1] [i_6] [i_2] &= ((unsigned char) 1635788930U);
                    }
                }
            }
        } 
    } 
    var_26 += ((/* implicit */short) var_7);
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_8))) : (min((((/* implicit */unsigned long long int) max((2133630833), (((/* implicit */int) (short)7663))))), (min((((/* implicit */unsigned long long int) var_7)), (2362356379989632194ULL))))))))));
}
