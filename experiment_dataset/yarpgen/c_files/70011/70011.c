/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 ^= ((((((((var_9 ? 8386560 : 0))) ? (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (!23791)))) ? (((!(1 | var_6)))) : ((((27511 ? 1 : var_2)) >> ((((447898686 ? var_10 : var_10)) + 224465854))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 ^= var_5;
                                var_15 &= ((((1 | (arr_13 [9] [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 2]))) >= 212));
                            }
                        }
                    }
                    var_16 = ((-((((((arr_1 [i_0] [i_1 - 1]) ? var_2 : 1))) ? (min(var_2, 18446744073709551615)) : -645972103670274165))));
                    arr_15 [i_2 - 1] [i_2] [i_1] [i_0] = -1;
                    var_17 = ((-2095629209 ? (((-2337560265378318192 ? 134217664 : 16709089113356674850))) : (((51 < (arr_13 [i_0] [1] [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_18 |= (!var_5);
    #pragma endscop
}
