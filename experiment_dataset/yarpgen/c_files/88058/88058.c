/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 -= (min(((((var_6 <= (arr_0 [i_0] [i_0]))) ? (arr_0 [i_0] [i_0]) : -var_4)), var_1));
        var_12 = (min(var_12, ((((((arr_1 [i_0]) ? -var_8 : var_9)) | ((max((arr_1 [i_0]), var_4))))))));
        var_13 = (min(var_13, (((((min(var_5, (arr_1 [i_0])))))))));
        arr_2 [6] |= (max(((-(arr_1 [i_0]))), var_2));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (--7641648618906583776);
        var_14 = (arr_4 [i_1]);
        var_15 = (max(var_15, ((!((!(arr_5 [i_1])))))));
        var_16 += var_1;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_17 = (-(arr_7 [i_2]));
        var_18 = (((((var_0 == var_3) ? ((min(var_7, (arr_0 [4] [1])))) : (arr_7 [i_2])))) ? ((((var_6 < (arr_1 [4]))))) : (1374725021 * 2920242274));
        var_19 |= (((var_7 ? var_9 : (arr_8 [2]))));
        var_20 = (min(var_20, var_8));
        var_21 = (arr_7 [i_2]);
    }
    #pragma endscop
}
