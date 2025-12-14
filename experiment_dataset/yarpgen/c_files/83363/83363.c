/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_2;
    var_11 &= ((!((((var_6 ? var_2 : var_7)) != var_3))));
    var_12 = ((-(min((~-1367422482), 127))));
    var_13 = (min(-1648083831, 704006424922638722));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (!0);
        arr_2 [i_0] = (!-var_4);
        arr_3 [i_0] [i_0] = ((!(((var_2 ? (arr_0 [1] [11]) : var_3)))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [14] |= (arr_4 [i_1] [14]);
        arr_8 [0] |= ((17742737648786912894 ? 57 : 1648083830));
        var_15 = (max(var_15, var_2));
    }
    #pragma endscop
}
