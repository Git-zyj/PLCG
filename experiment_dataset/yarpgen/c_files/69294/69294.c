/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = ((0 ^ ((((3381741481 ? 2599063448897720564 : 120)) << 1))));
        arr_2 [i_0] = var_11;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((-109 > (max((((arr_4 [i_1]) - var_10)), ((((arr_4 [5]) <= (arr_1 [i_1]))))))));
        arr_6 [i_1] [i_1] &= (((((arr_4 [i_1]) ^ ((((arr_4 [i_1 + 1]) ? var_12 : var_2))))) == (((-(min(-1, -115)))))));
    }
    var_15 -= (~var_4);
    var_16 = ((~(min(1623052554, -1897407238))));
    var_17 = (((max(((var_0 ? 1871493716749797593 : var_7)), (var_13 - var_3))) + -var_13));
    #pragma endscop
}
