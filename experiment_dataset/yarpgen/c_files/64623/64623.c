/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((((max((arr_0 [i_2]), var_14)) >= (((var_9 - (arr_3 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 71));
                                var_22 = (((((~(arr_3 [i_1 - 1] [14])))) ? 7260729318999140269 : var_9));
                            }
                        }
                    }
                    var_23 &= var_0;
                }
            }
        }
    }
    var_24 = (max(var_24, (-23729 - 23729)));
    var_25 = -100;
    var_26 -= 23739;
    var_27 = ((17299248058757599156 - (-var_15 - var_16)));
    #pragma endscop
}
