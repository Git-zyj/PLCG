/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [4] [5] = (min(0, -75747186));
                arr_7 [i_1] = ((-((~(arr_3 [i_0] [i_1 + 1] [i_0])))));
            }
        }
    }
    var_10 = (-((-((18446744073709551615 ? var_5 : var_2)))));
    var_11 += var_5;
    #pragma endscop
}
