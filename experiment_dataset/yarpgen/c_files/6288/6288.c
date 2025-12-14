/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(var_0, (min(var_7, var_3)))), (((!(var_16 ^ var_11))))));
    var_19 = ((var_6 >= (max((max(var_16, var_15)), (var_9 * var_5)))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_20 |= ((-(max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1])))));
        var_21 = (min(var_21, (max((max((arr_0 [i_0] [2]), (min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))), ((+(max((arr_1 [i_0]), (arr_1 [i_0 - 1])))))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((~(min((arr_2 [i_1] [i_1 + 1]), (arr_2 [2] [i_1 - 1])))));
        var_22 |= (min((((-(arr_0 [6] [i_1 - 1])))), (((!((min((arr_1 [i_1]), (arr_2 [i_1] [i_1 - 1])))))))));
        arr_5 [i_1] [i_1] = min((((((arr_2 [i_1] [9]) ^ (arr_0 [12] [12]))) & (arr_3 [i_1 + 2]))), (max(178, -30)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [4] [4] = (max(((~(((!(arr_1 [i_2])))))), (((((max((arr_6 [i_2] [6]), (arr_7 [i_2] [14])))) && (((arr_6 [i_2] [i_2]) || (arr_6 [i_2] [i_2]))))))));
        arr_9 [i_2] [i_2] |= (4767290025412530649 > 511);
    }
    #pragma endscop
}
