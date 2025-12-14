/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (+((((max((arr_1 [i_0]), -18721))) | (max((arr_0 [i_0]), var_2)))));
        var_19 += (-(min((arr_1 [i_0]), ((2088876352 ? 1175555712 : 1)))));
        var_20 = ((!((max(-1532697109, 56526)))));
        var_21 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((~(min(2088876352, (!-1727150464)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = (arr_4 [i_1]);

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_23 = (max(var_23, 9016));
                            var_24 = ((((var_6 <= (var_16 && var_3))) ? 9010 : (max((arr_8 [i_2 + 3] [i_2 - 4] [i_5 - 2] [i_5 - 1]), (25467 + 18721)))));
                        }
                    }
                }
            }
            var_25 = (((var_0 >= var_16) ? (arr_4 [i_2 + 1]) : (((((((arr_9 [i_1] [i_1] [i_1]) || (arr_8 [i_2] [i_2] [11] [i_2]))) || ((min(var_4, (arr_9 [i_2] [i_2] [10]))))))))));
            var_26 = (!18720);
            var_27 = 3873742360;
        }
    }
    var_28 ^= (min(((~(86 != 1986141926))), var_11));
    #pragma endscop
}
