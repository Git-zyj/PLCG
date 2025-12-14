/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(((~((min(-5764, -5775))))), ((-((min(3, (arr_1 [i_0]))))))));
        var_13 = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] [i_0] = ((!(((~(max(3335784074085910284, 1)))))));
                        arr_10 [i_0] [i_0] [i_2] [i_0] = (((-1 ? 18659 : 1)));
                        var_14 = (((((4882811357707167382 ? 56 : 1)))));
                    }
                }
            }
        }
        var_15 = ((-1 ? 10536356865097227721 : 10536356865097227721));
        var_16 = ((((((5753 ? 92 : 1)))) ? (arr_8 [i_0] [1] [1] [i_0]) : ((-((-15 ? 1 : 1))))));
    }
    var_17 *= ((!(var_9 ^ -1979041388)));
    #pragma endscop
}
