/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_7;
    var_17 *= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = (max((arr_4 [i_2] [i_0]), (~var_11)));
                            var_18 = (max((max((arr_0 [i_0]), ((-(arr_8 [i_2] [i_1 + 2] [7]))))), (arr_1 [i_0] [i_0])));
                        }
                    }
                }
                var_19 = (max(var_19, ((-(((((max(var_10, var_9))) > ((max(var_4, (arr_1 [i_0] [1])))))))))));
            }
        }
    }
    var_20 = (max(var_20, (90 | -1549802580)));
    var_21 = ((((max(var_0, var_15))) ? (max(((var_9 ? var_9 : var_7)), -var_13)) : var_14));
    #pragma endscop
}
