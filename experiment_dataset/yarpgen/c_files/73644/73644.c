/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 += var_2;
                    var_13 = ((~((min(197, var_6)))));
                    arr_9 [17] [17] [i_2] [i_0] = ((var_11 ? (arr_1 [i_1]) : 8431));
                    var_14 *= ((~(((((((arr_6 [i_2] [i_1]) != (arr_8 [i_0] [i_0] [i_0])))) > var_5)))));
                    arr_10 [i_1] [i_1] = (max((min((min((arr_2 [2] [10]), 8405)), (((~(arr_0 [12])))))), ((((34602771 ? var_0 : var_1))))));
                }
            }
        }
    }
    var_15 = 15905;
    var_16 = (min(var_16, ((max(110, 978570174)))));
    #pragma endscop
}
