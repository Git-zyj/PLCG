/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((min(((min(var_9, var_10))), -var_0))) ? var_10 : ((max((!var_8), (max(15, -26)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [10] = max(((min((1 % 1), (((((-127 - 1) + 2147483647)) << (1 - 1)))))), (min((-127 - 1), (-4040908783285738643 % 23))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((((max((arr_5 [16]), (~1)))) && (arr_7 [i_0] [i_0])));
                        }
                    }
                }
                arr_13 [i_0] [3] = ((0 * (arr_4 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
