/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [i_0]), (min(((~(arr_1 [i_0]))), (arr_0 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = 45845;
        arr_4 [i_0] = ((((max(((32686 ? -5330485773326332984 : -5330485773326332974)), (((arr_1 [i_0]) ? var_9 : var_5))))) ? ((max(5330485773326332982, (((arr_0 [i_0]) ? -623300203 : var_8))))) : (max(((1 ? 2311620109 : -32665)), ((max(12, var_15)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {

                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_2] [i_3] [1] [i_2] = (min((max((arr_5 [i_3 - 2]), (arr_5 [i_1]))), (~var_4)));
                                var_16 ^= 1410860251;
                            }
                        }
                    }
                    var_17 = ((((var_6 | (((-6382596359523101010 ? 1 : (arr_17 [i_1] [i_1] [i_2] [i_3]))))))) && (max((min(var_5, (arr_6 [i_2]))), (arr_18 [i_1] [i_3 + 1] [22] [22] [i_3]))));
                    var_18 = max((min((arr_18 [i_1] [i_2] [i_3 - 1] [i_1] [i_2]), (arr_18 [i_1] [15] [i_3 - 2] [i_1] [i_1]))), (max((arr_18 [i_1] [i_2] [i_3 - 1] [9] [19]), (arr_18 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]))));

                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        arr_24 [i_1] [2] [i_3] [i_6] [i_1] [i_6] = 5816091631827258015;
                        arr_25 [i_1] [i_6] = (min((arr_15 [14] [i_3] [i_2] [i_1]), (!var_5)));
                    }
                }
                arr_26 [i_2] = (max((((((min(48, var_7))) ? (((arr_16 [i_1] [i_1] [i_1]) ^ 31)) : var_2))), (max((~119), (var_3 | -4332107033229511663)))));
            }
        }
    }
    #pragma endscop
}
