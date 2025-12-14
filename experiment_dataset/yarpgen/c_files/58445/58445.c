/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((arr_3 [i_1]) ? (!0) : var_10))));
                    var_12 += (((var_9 && (((var_6 ? 25975 : 29870))))));
                    var_13 = ((532202197 >> (2657435277327815686 - 2657435277327815667)));
                }
            }
        }
    }
    var_14 = (max(var_14, (((max((2198956146688 - var_0), 1)) + 8410475164999090824))));
    var_15 = ((((max(var_9, var_8))) << (((max(((max(0, 215))), ((var_7 ? var_0 : var_10)))) - 196))));
    #pragma endscop
}
