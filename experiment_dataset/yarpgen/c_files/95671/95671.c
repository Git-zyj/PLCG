/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = 1;
        var_15 = (max(var_15, 2469870853));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_16 [i_2] [i_2] = 1623046281698397393;
                            var_16 = -8401;
                            arr_17 [i_0] [1] [i_2] [i_3] [i_3] = -975983254;
                        }
                        var_17 -= -6791245404750595701;
                        arr_18 [i_0] [i_0] [8] [4] [i_3 - 1] &= 132;
                        arr_19 [i_0] [i_1] [i_2 + 2] [i_2] = 17087056956160128985;

                        for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_18 = 72;
                            var_19 = (-32767 - 1);
                            var_20 = (max(var_20, 242));
                        }
                        for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_2] = 254;
                            var_21 = (min(var_21, -6859687209124899748));
                            arr_28 [i_2] [i_3] [i_3] [i_2] [i_2] [i_1 + 1] [i_2] = 7021441331358197206;
                            arr_29 [i_0] [i_1] [i_6] [i_1] [i_2] [i_3 - 1] = 244;
                            var_22 = (min(var_22, -5744803345439625358));
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, 14394520132022552381));
                            arr_34 [i_2] [i_3] [i_2] [i_1 - 1] [i_2] = 1;
                            var_24 *= 123;
                            var_25 = 95;
                        }
                    }
                }
            }
        }
    }
    var_26 |= var_0;
    var_27 = var_10;
    var_28 = (max(var_28, var_12));
    var_29 -= var_6;
    #pragma endscop
}
