/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 != (((var_1 < ((max(19, var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_4;
                    arr_8 [i_0] [i_0] [i_0] = ((((max(4, 19))) / ((min(255, 1)))));
                    arr_9 [i_1] = (5379942363220449251 / -5);
                }
            }
        }
    }
    var_17 = ((~(((-18 + 2147483647) >> (2 ^ 15)))));
    #pragma endscop
}
