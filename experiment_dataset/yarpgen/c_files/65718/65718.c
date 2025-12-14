/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] &= (((((~(arr_1 [1] [1])))) > ((115 ? 2028104819592027076 : 119))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((255 ? (arr_2 [i_0] [9]) : var_3)) % (arr_5 [i_1 - 3] [i_1 - 3])));
            arr_7 [i_0] [5] [i_0] = (var_5 || 255);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 = (min(var_15, (((-(arr_1 [i_0] [i_2]))))));
            arr_11 [i_0] = (arr_10 [i_2]);
        }
    }
    var_16 = (max(var_16, (((!((((var_10 ? var_9 : var_0)))))))));
    #pragma endscop
}
