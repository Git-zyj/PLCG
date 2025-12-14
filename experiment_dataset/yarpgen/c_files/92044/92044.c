/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((min((arr_6 [i_2 + 1] [1]), (arr_2 [i_1 - 2]))))));
                    var_11 = ((1 ? 1036751714 : (max(((87 + (arr_8 [i_0] [i_2 - 2]))), (arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1])))));
                    var_12 -= (((2723385516 / -2147483620) ? ((((arr_3 [i_1 + 1] [i_1 - 2]) * (arr_3 [i_1 - 1] [i_1 - 1])))) : ((((var_1 ? 1918019728 : var_6)) * (arr_0 [i_0])))));
                    arr_9 [i_0] [5] [i_2] = ((min(((var_8 ? 0 : var_9)), (arr_4 [1] [9] [i_1 - 1]))));
                }
            }
        }
    }
    var_13 = ((var_1 ^ var_8) ? var_5 : var_6);
    var_14 = var_8;
    var_15 = (((((var_8 + ((max(var_1, var_4)))))) ? (((var_9 == (min(var_6, var_9))))) : ((var_4 ? var_5 : var_4))));
    var_16 = (max(var_16, var_9));
    #pragma endscop
}
