/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((~52) * ((var_10 ? var_2 : (arr_0 [i_0])))));
        var_14 = (arr_0 [i_0]);
        arr_3 [i_0] = (~var_7);
        var_15 = 55;
        var_16 = (var_2 ^ var_1);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = (((var_11 ^ (-7083645616857685904 != var_11))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 = ((1938568811 ? (-2147483647 - 1) : -1938568811));
                    var_19 ^= (((((~6382086195102602582) && ((max(var_3, -1463014726603441774))))) ? (((((0 ? -16777216 : var_11)) > (!-8332850277082558519)))) : 74));
                    var_20 = var_5;
                    var_21 = var_5;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_22 = 11;
        arr_17 [i_4] = ((((-(~7))) < -1));
        arr_18 [i_4] = -1811630357;
    }
    #pragma endscop
}
