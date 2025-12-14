/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_12, (((~543350107) ? ((max(var_5, 44691))) : var_2))));
    var_14 = ((((min((max(var_6, var_5)), var_9))) ? (max(((max(var_8, var_5))), ((var_6 ? var_1 : var_5)))) : ((((-121 * 65516) ^ ((min(var_2, var_4))))))));
    var_15 = max((((~(var_11 ^ var_4)))), var_7);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((~(arr_1 [i_0 - 1])))) ? (((((-859329005 ? (arr_2 [i_0]) : 16907801217451051515))) ? (arr_2 [i_0 - 1]) : (127 > 43328))) : ((46 << ((((~(arr_1 [i_0]))) - 11965))))));
        var_16 -= ((((var_5 | (((arr_2 [i_0 - 1]) << (((arr_0 [i_0 + 1]) + 87)))))) | (arr_2 [i_0])));
        var_17 += (((var_5 ^ (1538942856258500078 == 43316))));
        arr_4 [i_0] = (max(((((((arr_0 [i_0]) - 401536011609932377))) ? ((22207 ? (arr_1 [9]) : (arr_1 [i_0]))) : -var_12)), ((((-1 - (arr_0 [i_0 - 1]))) * (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    #pragma endscop
}
