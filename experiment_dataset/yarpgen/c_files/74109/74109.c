/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = 226;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 += max(((var_7 < (max((arr_2 [i_0]), var_9)))), ((!(((arr_0 [i_0]) && var_5)))));
        var_14 = ((((!((min((arr_0 [i_0]), var_6)))))) > ((-(arr_0 [i_0]))));
        var_15 = (min(var_15, var_0));
        var_16 = ((var_10 ? var_2 : ((min((((1871098524 < (arr_0 [i_0])))), (max(2073599544, (arr_0 [i_0]))))))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((-(min(29, var_1))));
        var_17 = (arr_1 [i_1]);
        arr_6 [i_1] = (((arr_2 [i_1]) | (arr_3 [i_1] [i_1 - 4])));
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_2 - 2] [i_4] [i_4] = (max(((((min(var_6, 63))) && (50 >= 36))), (((((var_5 ? var_4 : var_5))) >= (max(1871098524, (arr_1 [i_4])))))));
                    var_18 += (arr_10 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
