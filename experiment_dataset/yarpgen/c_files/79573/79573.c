/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (max((((!(arr_0 [i_0])))), (max((min((arr_1 [i_0] [i_0]), var_4)), -5364972076064937808))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (9550979837280535939 << (9550979837280535939 - 9550979837280535914));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = (9550979837280535939 == 6979873400662426285);
                                var_18 = -5364972076064937808;
                                var_19 = (max(var_19, ((((!8895764236429015676) ? -8061355936995186306 : (((max(11836, 0)))))))));
                            }
                        }
                    }
                    arr_17 [i_1] = ((arr_0 [i_0]) - 8849006343482611080);
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = (var_15 && var_15);
    var_22 = -7452047996434295447;
    var_23 = ((((((((var_12 ? var_1 : 5499799157123670570))) ? 1783046812860885490 : 12415344437608635068))) ^ (max(8895764236429015677, 21084))));
    #pragma endscop
}
