/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, 8102663867302480838));
        var_15 = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_1] = ((65527 ? -1741254362 : -1741254362));
            var_16 ^= 1;
            arr_7 [i_0] [i_1] [i_1] = -1741254377;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = -8284811446326784798;
            var_18 *= (((1220128306 ? 1 : 65502)));
            var_19 = (65488 || 8);
        }
        var_20 &= (!65527);
        var_21 *= 1;
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = ((~(4467570830351532032 && 6255344655241574009)));
        arr_14 [i_3] [i_3] = (-1741254363 + -61);
        arr_15 [i_3] = ((~((65528 ? 670579964 : 64238))));
    }
    #pragma endscop
}
