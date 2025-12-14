/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((2759125953 == ((((min((arr_2 [7] [i_0] [i_1]), (arr_1 [i_1])))) / ((var_12 ? (arr_2 [2] [i_1] [i_0]) : var_5))))))));
                var_16 = (max(var_16, 13));
                var_17 = (~9);
                var_18 = (max(var_18, 1450021782381178161));
                var_19 = ((!((min(var_12, var_0)))));
            }
        }
    }
    var_20 = ((+(((18446744073709551579 << 34) >> (((~var_11) - 11241917284923063473))))));
    var_21 = var_1;
    var_22 = var_8;
    #pragma endscop
}
