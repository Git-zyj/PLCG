/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [6] [4] = (((-61 <= (arr_2 [i_0]))));
        var_11 = ((((+(max((arr_0 [i_0] [i_0]), var_1)))) == ((((min(var_4, var_5)))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_12 = (max(((~(arr_2 [i_1]))), (((!(arr_2 [i_1]))))));
        arr_8 [i_1] = (((~17370057779293592861) & (min((max(var_8, 1076686294415958754)), ((((arr_7 [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_7 [i_1]))))))));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_13 = ((min((arr_9 [i_2]), 0)));
        arr_13 [i_2] [i_2] = (min((((-44 && (((101 ? var_7 : (arr_9 [i_2]))))))), 2147483647));
        var_14 = ((-((((((arr_11 [i_2]) == -95))) * (((!(arr_12 [i_2] [i_2]))))))));
    }
    #pragma endscop
}
