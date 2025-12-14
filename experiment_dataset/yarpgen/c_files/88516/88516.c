/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [3] [15] [i_2] = (56 != -12);
                    var_15 *= ((((((var_11 && (-9223372036854775807 - 1))))) == (((((!(arr_4 [i_2] [i_2] [i_2]))) || ((!(arr_3 [2] [i_1 - 1] [i_0]))))))));
                }
            }
        }
    }
    var_16 -= min(var_3, (var_0 / 227));
    #pragma endscop
}
