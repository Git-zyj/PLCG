/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = 109;
        arr_5 [3] = (~-14);
        arr_6 [i_0] [i_0] = 0;
        arr_7 [i_0] = 25;
        arr_8 [i_0] = (46 ^ 146);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_12 [i_1] = (max((min((30584 - 0), ((min(11331, var_6))))), (max(-19, 974532689))));
        arr_13 [i_1] = ((~(max(255, 4611686018427387903))));
        arr_14 [i_1] = 11591;
    }
    var_12 = ((!((max((var_6 >= var_6), (min(-2147483641, 16383)))))));
    #pragma endscop
}
