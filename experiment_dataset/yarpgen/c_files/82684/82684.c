/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = min(var_7, (arr_2 [i_1 + 1]));
                    arr_8 [i_1] = (((arr_1 [i_0] [i_2]) ? (-32767 - 1) : var_8));
                }
            }
        }
        arr_9 [17] = (min((32763 > 63), (((arr_4 [i_0] [i_0] [i_0] [i_0]) != (arr_4 [6] [6] [i_0] [i_0])))));
    }
    var_13 = (min(var_13, ((max(var_3, (((184 ? 4035145247 : 66))))))));
    #pragma endscop
}
