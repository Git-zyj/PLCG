/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 *= (((((arr_1 [i_0]) >> (((arr_1 [11]) - 1299552904733608739)))) >= ((~(arr_1 [i_0])))));
        arr_2 [i_0] &= (min((arr_1 [i_0]), ((26921 ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [16] = (((arr_1 [10]) ? (((((((arr_3 [i_1] [1]) <= var_8)))) + var_10)) : (arr_4 [i_1] [i_1])));
        arr_7 [i_1] &= ((((2325 ? 1 : 731845781)) + (((var_4 + 2147483647) >> (((arr_0 [i_1] [i_1]) - 12323666515364630455))))));
        var_15 += (arr_4 [i_1] [19]);
    }
    #pragma endscop
}
