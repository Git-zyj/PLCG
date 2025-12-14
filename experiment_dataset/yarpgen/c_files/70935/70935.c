/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = var_5;
                var_19 = (max(var_19, ((((arr_3 [i_1]) ? ((((arr_2 [18] [i_0] [i_1 - 1]) > (~var_1)))) : 0)))));
                arr_4 [i_0] = (((arr_1 [i_0]) > (max(var_17, (arr_2 [i_0] [i_1 + 1] [i_1 - 1])))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 *= (((((min(3, var_2) > 139)))));
                                var_21 = (min((((((17163091968 > (arr_6 [i_0] [i_1] [i_2])))))), (~8034152276219109637)));
                            }
                        }
                    }
                    var_22 = (arr_2 [i_0] [i_0] [i_2]);
                    var_23 -= (max((arr_8 [i_0] [i_0] [1]), (var_14 > var_17)));
                    var_24 = ((((((0 ? var_0 : 1005572797174568792))) ? 10412591797490441976 : ((((arr_11 [i_0] [2] [2] [i_2 - 2]) ? 26811 : (arr_12 [17] [i_0] [i_1] [i_2] [i_2 + 1] [i_2])))))));
                }
            }
        }
    }
    var_25 = (min(var_25, (((15316 > ((max(var_4, 10412591797490441979))))))));
    #pragma endscop
}
