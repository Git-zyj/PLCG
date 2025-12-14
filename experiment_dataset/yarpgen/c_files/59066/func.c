/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59066
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
    var_19 = var_17;
    var_20 = ((/* implicit */unsigned short) ((int) -1));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) (short)29728)));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551601ULL))));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            arr_15 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_4 + 1] [i_0 + 2] [i_3]))));
                            arr_16 [i_2] = ((((/* implicit */int) (unsigned short)65535)) << (((arr_3 [i_0] [i_1 + 1] [i_1 + 1]) - (3564427020227836991LL))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            arr_20 [i_2] [(_Bool)1] [(short)18] [i_3] [i_3] [23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0 - 1]))) : ((+(467851827U)))));
                            var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_21 [i_1] [i_2] [(short)13] [(unsigned short)22] [i_3] [i_2 + 1] = ((/* implicit */signed char) ((unsigned long long int) (short)583));
                    }
                    arr_22 [i_2] [(unsigned char)7] = ((/* implicit */unsigned short) ((unsigned char) arr_19 [i_2] [i_2] [i_2 - 1] [i_2] [i_2]));
                }
            } 
        } 
        arr_23 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) 17828747990316444246ULL)))));
        var_23 += ((/* implicit */unsigned char) arr_18 [i_0 + 1] [i_0 + 1] [(short)10] [i_0 + 1] [i_0 + 1]);
        var_24 += ((/* implicit */long long int) ((int) arr_8 [i_0] [(unsigned short)0] [i_0 + 2]));
    }
    for (long long int i_6 = 1; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_26 [i_6] = max((max((0ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_6 + 2] [i_6]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1943)) ? (((/* implicit */int) (unsigned short)29387)) : (((/* implicit */int) (unsigned short)0))))));
        var_25 = ((/* implicit */unsigned char) ((int) (~((+(18446744073709551601ULL))))));
    }
    var_26 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-1943)), (max((((/* implicit */unsigned long long int) (unsigned char)115)), (9223372036854775807ULL)))));
}
