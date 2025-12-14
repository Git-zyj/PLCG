/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (-2147483633 ^ 16513712313938205702);
        arr_4 [i_0] = (max(((min((max(var_14, (arr_0 [i_0] [i_0]))), ((min(144, 38473)))))), (max((((-7115 ? var_3 : var_16))), (max(35184103653376, var_10))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (max((((arr_5 [i_1 + 1]) ^ (arr_5 [i_1 + 1]))), ((((arr_5 [i_1 + 1]) ? var_3 : var_13)))));
        arr_8 [i_1 + 1] = ((!((max(((-(arr_5 [17]))), 9015842069519374311)))));
    }
    var_18 = ((-(max(((var_8 ? -9223372036854775800 : var_1)), var_5))));
    var_19 = var_4;
    #pragma endscop
}
