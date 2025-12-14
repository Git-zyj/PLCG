/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 65521;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = ((((((-var_5 ? (((-9223372036854775807 - 1) ? (arr_3 [i_1]) : 9223372036854775807)) : (~var_5))) + 9223372036854775807)) >> (var_4 - 12472)));
                arr_6 [i_0] [i_0] [i_0] = (max((arr_3 [i_0]), (~9223372036854775793)));
                arr_7 [i_1] = 7655045198609832727;
                var_17 = (min(var_17, var_0));
            }
        }
    }
    var_18 = ((((-var_2 ? 16527371514084261459 : (!13156))) | var_4));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = 266569586;
        arr_11 [i_2] [i_2] = (min(((-(min(var_13, (arr_8 [i_2]))))), (((-(arr_0 [1]))))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_20 = (min(var_20, (arr_12 [i_3])));
        var_21 = (min(var_21, 61410));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_17 [i_4] = (((~var_0) ? (arr_15 [i_4]) : (!4148)));
        var_22 = ((~(arr_16 [i_4])));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_23 = 1;
        arr_22 [i_5] [i_5] = -6099538732064847021;
        arr_23 [i_5] [i_5] = 9223372036854775807;
        var_24 = (max(var_24, ((max(((((min(var_6, (arr_16 [i_5])))) ? 1 : (!1562809022849812257))), (((arr_12 [i_5 + 1]) ^ (arr_13 [i_5 + 1]))))))));
    }
    var_25 = 965025585;
    #pragma endscop
}
