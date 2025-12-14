/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = ((((min(var_7, var_9))) ? (((max(120, 183)))) : (((3045272851 >= 0) ? (var_8 - var_8) : 7959938808853787358))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, 8361446230662334030));
                                arr_15 [i_4] [i_1] &= ((((min(3548832380420483162, 1)) / (min(2373395485319045724, 2747957877597781207)))));
                            }
                        }
                    }
                    var_14 += (min(((var_0 | (arr_8 [i_1] [4] [i_1 - 1] [i_1 - 2]))), (((arr_8 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 2]) ? (arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 2]) : (arr_8 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))));
                    arr_16 [i_1] [i_1] [i_1] = ((24 ? (arr_13 [i_0] [i_0] [i_1] [1] [i_1 + 1] [9]) : ((((arr_9 [i_0] [i_0] [i_1] [7] [i_2] [i_2]) + var_4)))));
                }
            }
        }
    }
    var_15 = var_5;
    var_16 = (~(min((~8970733035811925203), 41208)));
    #pragma endscop
}
