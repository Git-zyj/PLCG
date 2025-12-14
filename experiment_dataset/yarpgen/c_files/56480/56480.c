/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (~((var_0 ? var_9 : (249 % 2016))));
    var_13 = ((!((var_4 && (var_9 * var_1)))));
    var_14 = (max(((((var_8 - var_6) ? var_4 : var_8))), -163967559));
    var_15 *= var_0;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 + 2] = ((2600396186 ? (((var_0 >= 83) ? (!2931065149) : var_5)) : ((((var_1 < (((var_4 | (arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 -= ((var_6 ? 1601929019 : (arr_9 [i_2 + 3] [i_1] [i_0 - 1] [i_0])));
                    var_17 = (((max((arr_8 [i_2 - 2] [i_0 - 2]), 15)) - 210));
                }
            }
        }
    }
    #pragma endscop
}
