/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_5, var_2))) ? (((!(~var_15)))) : var_4));
    var_17 = (var_11 - var_13);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((((((((arr_1 [i_0]) ? 0 : 34662))) ? (var_11 - 34682) : (!var_12)))) ? (~var_3) : ((-((min(2308, 30876)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? ((var_8 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_2] [i_3]))) : 34662));
                        arr_13 [i_0] [1] [14] [i_1] = 30896;
                        arr_14 [i_0] [5] [i_1] [i_3] = (((((arr_0 [i_2]) - (((min(var_1, var_10)))))) - (((((((arr_9 [i_1]) ? var_13 : 4261753361))) ? 30876 : (((arr_8 [i_1]) ? var_2 : var_0)))))));
                        arr_15 [i_1] [i_1] [i_2] [5] [5] = var_3;
                    }
                }
            }
        }
        arr_16 [i_0] [0] |= (((((var_4 ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])))) ? (min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) : (arr_5 [i_0] [i_0])));
        arr_17 [2] = var_10;
        arr_18 [i_0] = (min(((127 ? 3853222062 : var_9)), ((min(var_7, -var_1)))));
    }
    #pragma endscop
}
