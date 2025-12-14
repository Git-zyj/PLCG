/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(((var_9 ? ((8935141660703064064 ? var_11 : var_10)) : var_8)), (~var_10));
    var_14 = var_6;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (-((((min(var_6, 120))) ? var_7 : var_10)));
        arr_3 [i_0 + 2] = var_10;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = ((-(arr_5 [i_1] [i_1])));
        arr_8 [i_1] = max(((~((var_1 ? (arr_6 [i_1]) : -307280935)))), ((max((arr_6 [i_1]), var_12))));
        arr_9 [i_1] = ((!(arr_4 [i_1])));
        var_16 = ((5934650825581179242 ? -5266264944731555557 : 3));
        arr_10 [i_1] = ((((!(arr_5 [i_1] [i_1]))) ? ((((arr_5 [i_1] [i_1]) ? 0 : (arr_5 [i_1] [i_1])))) : (arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((!((min((((arr_4 [i_2]) ? (arr_6 [i_2]) : (arr_11 [9] [i_2]))), (((arr_5 [i_2] [i_2]) ? var_1 : var_4)))))));
        arr_14 [i_2] = 10921;
        var_17 = ((((!(15 + var_2))) ? (!var_0) : -var_2));
        var_18 = -5;
        var_19 = max(var_7, ((~(arr_4 [i_2]))));
    }
    #pragma endscop
}
