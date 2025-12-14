/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((1365790122 ? (var_9 >= var_0) : (((var_0 < (((var_2 ? var_13 : var_10))))))));
    var_19 = (min(var_19, 255));
    var_20 = -17517;
    var_21 = (var_10 + var_15);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (((-((14617405089189561779 ? 255 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (!4822));
                            var_23 = (((((var_10 ? (arr_2 [i_2 + 1] [i_3]) : (arr_4 [i_0] [i_3])))) ? (((arr_9 [i_3] [i_3 + 1] [i_3 - 2] [i_3 + 2] [i_3]) + (arr_4 [i_0] [i_2 - 1]))) : ((-(arr_3 [i_0 + 1] [i_1 - 1] [i_2 + 1])))));
                            arr_11 [i_0] [i_0] = (max(((((max(-1365790122, (arr_3 [i_3] [i_1] [i_2])))) ? (arr_1 [i_0 + 1]) : ((14617405089189561803 + (arr_9 [i_0] [i_1] [i_1 - 2] [i_2 - 2] [i_1 - 2]))))), (min(1550774726, (min(1365790122, 14617405089189561773))))));
                        }
                    }
                }
                arr_12 [i_0] = ((65535 << (2263045092346033613 - 2263045092346033608)));
            }
        }
    }
    #pragma endscop
}
