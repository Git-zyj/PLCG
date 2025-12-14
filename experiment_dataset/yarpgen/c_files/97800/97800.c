/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 & (var_7 <= var_3)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0 - 3] [i_1] [1] = (((arr_4 [i_0 + 1] [6] [i_0] [6]) ? (arr_1 [i_0 - 2]) : (5089143904767306915 / -97)));
                                var_13 *= (((arr_5 [i_3] [i_1 - 1]) >> (((((-32767 - 1) ? -18163445744820930176 : 475707699)) - 283298328888621414))));
                                arr_11 [i_1] [18] [i_1] [i_3] [i_1] = var_11;
                            }
                        }
                    }
                }
                var_14 = (max(var_14, ((min(((-64 ? 3393 : 10)), (((3333036264 <= ((96 ? (arr_6 [i_0] [i_1] [i_1] [i_0] [6] [i_0]) : -5628612332756991669))))))))));
                arr_12 [i_1] [i_1] = ((var_11 ? (max(var_2, (arr_7 [i_0] [15]))) : (((262143 ? ((-5628612332756991657 ? 4145113690896454745 : var_11)) : var_11)))));
            }
        }
    }
    #pragma endscop
}
