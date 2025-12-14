/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1, 4294967292));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min((max(1, (((arr_5 [i_1]) ? 3470042395 : var_11)))), ((max(((-(arr_0 [11]))), ((0 ? (arr_1 [i_0]) : (arr_3 [i_1]))))))));
                arr_8 [10] = ((((min((arr_3 [10]), (arr_3 [12])))) << (((arr_3 [12]) - 21252))));
                arr_9 [i_0] [i_1] [i_1] = ((((((!((((arr_1 [i_1]) ? (arr_4 [i_0] [i_1]) : 13))))))) - -8866635019362019749));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_16 [i_3] [7] = ((~((((528482304 ? (arr_12 [i_2]) : (arr_12 [i_2])))))));
                arr_17 [i_2] [i_2] [i_2] = (max(((((min(-7476, (arr_15 [i_2 - 3] [i_2] [i_2])))) ? ((min(194, var_9))) : ((max((arr_12 [i_3]), 1))))), (((!(arr_12 [i_2 + 1]))))));
                arr_18 [1] = 13;
            }
        }
    }
    var_18 = min(((max((!var_8), var_10))), ((((max(var_14, var_1))) ? ((var_10 ? var_10 : 1379515092428935407)) : -656277725)));
    #pragma endscop
}
