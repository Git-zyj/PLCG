/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((~(arr_4 [i_1 - 1] [i_1 - 1])));
                var_12 = (max((max((arr_3 [i_1 - 1]), (arr_4 [12] [i_1]))), ((((max((arr_4 [3] [i_1 + 1]), var_2)) <= -var_0)))));
                arr_5 [i_1] = (max((((max(var_10, (arr_4 [7] [0]))) % (((arr_3 [i_1]) ? (arr_2 [11] [i_1]) : var_10)))), ((((2094628802 ? 2094628802 : 23))))));
            }
        }
    }
    var_13 = -var_0;
    var_14 = ((!(((((var_6 ? var_10 : var_0)) - var_7)))));
    var_15 = (((((max(var_10, var_4))) - (min(var_2, var_2)))));
    var_16 = ((6961091745269106371 ? 2094628817 : 12));
    #pragma endscop
}
