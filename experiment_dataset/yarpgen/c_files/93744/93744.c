/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0] [i_0]) ^ (max(1341986336237947350, -36)))) ^ 4294967295));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = 65535;
            arr_6 [i_1] = max(135, ((((min(1, var_0))) + ((122 ? 7947 : var_11)))));
            var_16 = var_13;
        }
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2 - 1] = (((((var_14 ? -1954862452 : (arr_2 [i_2])))) != (((((-(arr_0 [i_2 + 2])))) ? ((var_2 * (arr_3 [i_2] [i_2]))) : ((max((arr_2 [i_2]), (arr_1 [i_2] [i_2]))))))));
        var_17 -= (min((((arr_2 [i_2 - 2]) ? (arr_2 [i_2 + 3]) : (arr_2 [i_2 + 2]))), (min((arr_4 [i_2 + 1]), (arr_4 [i_2 + 3])))));
        var_18 = 1753771835;
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = 18446744073709551615;
        var_19 &= ((((((arr_8 [1]) ? (arr_12 [4]) : (arr_0 [i_3]))) & 544615587)));
    }
    var_20 = ((-(((((var_12 ? var_1 : var_7))) ? var_5 : (max(var_0, -1954862442))))));
    var_21 ^= (((((min(2147483647, var_8))) ? (max(var_1, var_7)) : (~var_13))));
    #pragma endscop
}
