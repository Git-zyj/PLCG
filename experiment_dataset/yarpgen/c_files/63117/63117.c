/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_3] = ((~(((((var_13 ? var_13 : var_7))) ? var_12 : ((max(121, -18073)))))));
                        var_16 = (max((~-970015407600343760), -970015407600343760));
                    }
                }
            }
        }
        var_17 = (max(var_17, ((max(var_11, (((((~970015407600343776) + 9223372036854775807)) >> (var_9 - 67))))))));
        arr_13 [i_0] [i_0] = (((((var_13 ? var_8 : var_12))) ? (!var_12) : ((var_6 ? var_5 : (-970015407600343760 % 970015407600343776)))));
        var_18 += ((970015407600343788 || (((100 ? 2104930335 : (max(18446744073709551615, -970015407600343744)))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_19 = ((~((max(var_14, var_3)))));
        var_20 = ((((((!1761353918403666569) ? var_3 : ((max(var_10, var_15)))))) ? ((((var_9 ? var_8 : var_15)) >> (((max(var_15, -707773398)) + 707773420)))) : (((((max(var_13, var_2))) ? var_4 : var_14)))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_19 [i_5] &= ((min(var_7, (var_9 + 970015407600343788))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_6] = ((((!var_8) == ((-103 ? var_7 : var_4)))) ? -var_11 : (((((min(3594836990, var_3))) != (0 / -970015407600343772)))));
            arr_24 [i_5] [i_6] [i_6] &= max((((var_3 ? (1 < var_3) : 567198607))), ((var_11 ? var_0 : -22941502075777716)));
        }
        var_21 = (min((max(var_4, var_0)), var_6));
        var_22 = var_10;
        arr_25 [i_5] [1] = ((~(max(((1006771095 ? 2314674015 : 9223372036854775807)), 4572410717581955061))));
    }
    var_23 = (max(((max(var_14, 64866))), (max(-2103749465, 3566379351))));
    #pragma endscop
}
