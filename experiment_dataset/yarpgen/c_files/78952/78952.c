/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (6361271551470680380 | 1);
                var_17 = (max(var_17, var_5));
                var_18 = ((0 && (var_2 | 154)));
                arr_6 [2] = (((3412957556634415701 << (17179869183 - 17179869182))));
            }
        }
    }
    var_19 = 6266097945101791076;
    var_20 = (37384 % 4294967283);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = ((4294967283 - (~0)));
                var_22 = ((((~(arr_8 [i_3]))) >= var_5));
                arr_13 [i_2] [i_2] = var_15;
            }
        }
    }
    #pragma endscop
}
