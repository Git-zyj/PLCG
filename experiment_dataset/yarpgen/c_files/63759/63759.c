/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_0]);
        var_19 += ((32762 ? 4294967295 : -1));
        arr_2 [i_0] [i_0] = (min(-16114, 1299335837));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = var_1;
        arr_6 [i_1] [i_1] = ((+(((arr_4 [i_1] [1]) | 24))));
        arr_7 [i_1] = ((215 ? 15 : 16117));
        var_20 = var_4;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_21 -= ((~(((((1 ? 15602450057672350830 : 148))) ? 102 : ((var_4 ? 2040 : 32765))))));
        var_22 = (min(var_22, var_12));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_23 += (-97 * -2040);
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [14] [i_5] [i_5] [i_3] = ((((~(arr_17 [i_5 - 1] [i_4 - 2]))) | ((60 ? 2043 : 1))));
                        arr_24 [i_6] [i_5] = (min(227, ((((arr_12 [i_5 - 1]) >= 31)))));
                        var_24 += var_8;
                    }
                }
            }
        }
    }
    var_25 = var_13;
    var_26 = (min(var_26, (((0 ? -101 : (min(((var_2 ? 483198590 : var_0)), var_10)))))));
    #pragma endscop
}
