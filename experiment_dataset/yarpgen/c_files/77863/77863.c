/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? var_7 : var_9));
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = max((min((min(-100, 33554176)), (max(var_4, 10556429565233982058)))), ((((arr_7 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? (arr_1 [i_0 + 1] [i_2 - 1]) : (arr_7 [i_2 - 2] [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                    var_14 = var_10;
                    var_15 = (min(((var_8 ? var_4 : (arr_5 [i_0] [i_0 + 2]))), (arr_5 [i_0] [i_0 - 2])));
                }
            }
        }
    }
    var_16 = max(((-var_5 ? 53655 : ((var_4 ? var_6 : var_3)))), ((min(var_1, var_3))));
    var_17 = var_1;
    #pragma endscop
}
