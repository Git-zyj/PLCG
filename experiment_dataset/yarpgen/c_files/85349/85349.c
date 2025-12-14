/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                var_15 += ((min(-8120039412381650823, -1694729174012141333)));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_16 = ((206 ? 11877508491764916908 : ((min(-8120039412381650821, 0)))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (arr_3 [i_1 + 1] [i_1 - 4]);
                    var_17 = -32751;
                }
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    var_18 = (((((min((arr_0 [i_0]), (arr_5 [i_1] [i_1])))) ? (arr_5 [3] [i_1]) : ((max((arr_11 [i_0] [i_0] [8]), -1))))));
                    arr_13 [i_1] [i_1 - 4] [i_3 - 2] = var_1;
                }
                var_19 = (max(var_19, ((min((((arr_4 [0] [0]) ? var_13 : 251)), var_8)))));
            }
        }
    }
    var_20 = ((var_7 ? var_2 : var_14));
    #pragma endscop
}
