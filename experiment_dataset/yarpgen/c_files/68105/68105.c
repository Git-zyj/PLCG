/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((max(98, (83 >= 98)))));
        arr_4 [i_0] = (max((arr_2 [i_0]), ((((255 == (arr_1 [i_0])))))));
        var_10 = (max(var_10, (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_11 = (arr_6 [i_1]);
        arr_7 [i_1] [12] = (((((~(arr_5 [i_1])))) ? 7576601076744377368 : (~1)));
        var_12 = (((((0 ? (arr_5 [i_1]) : 17473))) ? (arr_6 [14]) : ((-31661 ? (arr_5 [i_1]) : (arr_6 [i_1])))));
    }
    var_13 = (((max(var_7, var_1)) == ((((((((-127 - 1) + 2147483647)) << (((-3571 + 3572) - 1)))))))));
    var_14 = (var_2 * var_8);
    var_15 = (!13544);
    #pragma endscop
}
