/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_5;
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((((min(var_2, (arr_0 [i_0])))) ? ((var_11 | ((max(var_5, var_1))))) : ((var_13 ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_17 -= (((17653315640412177745 | 18446744073709551609) | (((min((arr_0 [i_0]), (arr_0 [i_0])))))));
            var_18 -= var_2;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] &= (var_4 * 285978576338026496);
            var_19 = ((((((arr_5 [i_2] [i_0] [i_0]) ? (arr_1 [i_0] [i_2]) : (arr_1 [i_0] [i_2])))) ? (((arr_5 [i_0] [i_2] [i_2]) ^ (arr_1 [i_0] [i_2]))) : (((arr_1 [i_2] [i_2]) ^ (arr_5 [i_0] [i_0] [i_2])))));
            var_20 &= ((((arr_6 [i_0] [i_0]) | ((((arr_7 [i_2]) >= var_5))))));
        }
    }
    #pragma endscop
}
