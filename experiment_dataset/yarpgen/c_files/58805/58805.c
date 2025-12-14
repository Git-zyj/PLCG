/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((!8191) ? 1 : var_4))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (!52)));
                    var_12 += ((((((10260 != 1) * (((arr_6 [i_1] [i_1]) * (arr_7 [i_0] [i_0] [i_0])))))) ? (!1) : (((255 ? (var_0 != 1) : -39)))));
                }
            }
        }
    }
    #pragma endscop
}
