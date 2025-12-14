/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_18 += (0 % 1);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = var_13;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = (max(var_19, (((var_3 >= ((((((arr_6 [17] [i_1] [i_1]) ? (arr_7 [i_2] [i_2] [i_1]) : (arr_8 [i_1])))) ? (arr_3 [13]) : (arr_4 [i_1]))))))));
            arr_9 [9] [i_2] = (!6);
            arr_10 [i_1] [4] = ((!(((((min(var_3, (arr_4 [i_1])))) ? (!var_0) : (arr_8 [i_1]))))));
        }
    }
    var_20 &= -var_9;
    var_21 = (min(var_21, var_5));
    #pragma endscop
}
