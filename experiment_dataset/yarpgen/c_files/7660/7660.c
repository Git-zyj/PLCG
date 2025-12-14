/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (min(1808478972, (((((min(1, -5902443580249684726))) ? ((max(var_8, var_2))) : var_0)))));
    var_11 ^= 186;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((127 ? (arr_0 [i_0] [i_0]) : ((max(((((arr_2 [i_0]) || 1))), ((2896037827 ? (arr_1 [i_0]) : var_6)))))));
        var_13 = (((((!(arr_0 [i_0] [i_0])))) * (((!(arr_2 [i_0]))))));
        arr_3 [i_0] = (!9691);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 ^= ((-27510 ? 0 : (arr_2 [i_1])));
        var_15 = (max(var_15, 1398929454));
        arr_7 [i_1] [i_1] = (((arr_1 [i_1]) ^ 8434955983999023319));
        arr_8 [i_1] [i_1] = (-9223372036854775807 - 1);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 = (((arr_9 [7]) ? (((arr_10 [i_2]) ? (arr_9 [i_2]) : ((var_4 ? var_2 : var_0)))) : 1));
        var_17 = ((50426535 ? 1 : 1));
        var_18 = (min(var_18, 92));
    }
    var_19 = var_3;
    #pragma endscop
}
