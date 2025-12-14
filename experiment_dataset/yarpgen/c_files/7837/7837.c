/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(531667819, 3));
        var_13 += (max((max((arr_0 [i_0]), -1)), (((-1553020841 ? 3 : 612910217)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = ((((((-818817443 ? 3 : 4)))) ? ((-(arr_6 [i_1] [i_1]))) : (((((max((arr_3 [i_1]), (arr_5 [i_1])))) ? ((-2147483631 ? (arr_4 [i_1] [5]) : (arr_5 [10]))) : (arr_4 [8] [i_1]))))));
        arr_7 [i_1] = max(((-(arr_6 [i_1] [i_1]))), (arr_4 [i_1] [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_15 = ((var_11 ? (((arr_4 [i_1] [i_3]) ? (arr_4 [i_1] [i_4]) : var_0)) : (min((arr_4 [i_2] [i_2]), (arr_4 [i_3] [i_3])))));
                        var_16 = ((var_8 < (((((23 ? 112 : -2147483647))) ? (20 % var_5) : (min((arr_2 [i_2]), 18177970943921525245))))));
                    }
                }
            }
        }
    }
    var_17 = (((var_4 % var_5) ? ((var_0 ? var_10 : -var_4)) : var_3));
    var_18 = ((-((-2147483647 ? (!-1379314647) : (min(4294967279, var_2))))));
    var_19 = ((18 ? -2147483639 : 65535));
    #pragma endscop
}
