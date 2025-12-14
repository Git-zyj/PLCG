/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, -66));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 ^= (((var_13 ? -66 : 16916784620064425853)));
                            var_20 &= (max((((arr_11 [i_2] [i_1] [i_3 - 1] [i_3 - 1] [i_3]) ? 68 : (arr_11 [i_0] [i_2] [i_3 + 1] [i_2] [i_3]))), ((((~var_0) && ((max(1266262762439741878, 2972662181))))))));
                            var_21 += (((arr_1 [i_3 + 1]) ? 55 : ((var_10 ? (var_2 / var_2) : (arr_8 [i_1] [i_1] [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = ((var_9 > (max(var_17, ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            var_23 = (max(var_23, (arr_1 [i_5])));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_24 = ((((arr_19 [i_6] [i_6 - 2]) ? (~var_15) : (arr_5 [i_6] [i_6 + 2] [i_6]))));
        var_25 = (max(433251606, 255));
        var_26 = var_4;
        var_27 = (min(var_27, ((((arr_11 [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 3]) ? ((~(arr_9 [14] [i_6] [14]))) : 772784689)))));
    }
    for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
    {
        var_28 = ((var_0 != (arr_19 [i_7] [i_7])));
        var_29 = ((((-((max((arr_22 [i_7]), var_4))))) == ((~(arr_19 [i_7] [i_7])))));
    }
    #pragma endscop
}
