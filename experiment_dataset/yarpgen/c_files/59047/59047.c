/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = ((12519165203445189793 & ((-5927578870264361806 ? (var_2 > 549755682816) : (12519165203445189793 - 12519165203445189800)))));
        var_13 -= (((((var_0 & var_7) < -23286)) ? ((max(224, var_4))) : (((5927578870264361822 - 127) - (var_8 && 100)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (10 && 1);

            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                var_14 += (-32767 - 1);
                arr_9 [i_0] [i_1] [i_2] = -32760;
                var_15 ^= (((((~((-2774 ? var_0 : 24594))))) ? ((12519165203445189794 ? ((var_4 ? 32767 : 6)) : 14980)) : (((2147483647 - (max(var_5, var_8)))))));

                /* vectorizable */
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    var_16 &= (((var_6 / -31809) & -2955983575198251619));
                    var_17 = ((((1 ? 1 : 2772)) + -22588));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    var_18 = (((var_2 + 2147483647) << var_6));
                    var_19 = ((var_2 ? 16360827668043733735 : 12519165203445189794));
                    var_20 += (var_4 % 32767);

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_4 + 1] [i_5] = ((var_10 > ((72057594037927935 << (((-24467 + 24499) - 32))))));
                        var_21 = (((~9147138505862574465) != (!var_11)));
                    }
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_25 [i_0] [i_1] [i_6] [i_6] = (((var_11 ^ 1) << (252 || var_0)));
                    var_22 = (!var_6);
                    arr_26 [i_0] [i_6] = (((var_9 | 24) & (-516345861 + var_11)));
                }
            }
        }
    }
    var_23 = ((var_3 * (35183835217920 > 8)));
    #pragma endscop
}
