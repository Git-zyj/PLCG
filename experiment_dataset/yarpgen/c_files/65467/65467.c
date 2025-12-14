/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 0;
        var_14 = ((-(1073709056 >= -250170999)));
        var_15 = (min(var_15, (((((29043 >> (6 | 1))) & 613283975)))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((-((((115 >> (2147483647 - 2147483616)))))));
            arr_7 [i_0] = (min((min(12050433049848312288, (min(4611685743549480960, 24)))), -1850486177));

            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, -1));
                        var_17 = 1;
                        var_18 |= 62212;
                        arr_16 [i_0] [10] [6] = -8323182218573488831;
                        var_19 = (((2977372270 == 12879) + ((9 >> (3590323333 - 3590323290)))));
                    }
                    for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, (--0)));
                        arr_20 [i_0] [i_1] [i_2] [i_0] [1] = 3297573332;
                        arr_21 [i_0] [7] [i_0] [9] = -10;
                    }
                    arr_22 [10] [i_1 - 1] [i_1] [i_0] = ((255 != (-2147483618 ^ 117)));

                    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_21 = (11 != 0);
                        var_22 = (((-127 - 1) / -55));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_31 [8] [i_2] [i_3] &= (0 == 211);
                        arr_32 [i_0] [i_1 + 1] [i_2] [i_0] [i_1] = ((14728 >> (!510)));
                    }
                    var_23 ^= 28;
                }
                var_24 = -0;
            }
        }
        arr_33 [2] [10] &= (max(-62, (((((0 || (-2147483647 - 1)))) * (1455603226 < -1)))));
    }

    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_36 [i_8] [i_8] = (min(1521099073, ((min((-392997118569898446 >= 1), (~160))))));
        var_25 = (min((min(1138075898, ((min(30699, -3447))))), 1));
        var_26 = 6130;
    }
    #pragma endscop
}
