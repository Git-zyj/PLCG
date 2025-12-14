/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((((((arr_3 [i_0 + 2]) ? 245 : var_10))) ? (var_1 | 3414556660) : (((var_7 << (((((((-9223372036854775807 - 1) - -9223372036854775792)) + 35)) - 7))))))))));
                    var_13 = 0;
                }
            }
        }
    }
    var_14 = (min(var_14, (((var_7 ? -1 : 0)))));
    #pragma endscop
}
