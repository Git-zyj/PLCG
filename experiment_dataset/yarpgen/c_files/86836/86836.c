/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((var_0 ? var_5 : (min(46351, 551526221))))) ? ((max((max(-2373, 3301028405)), (((var_0 ? 331161067 : var_5)))))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((-795320911 ? (arr_3 [i_1]) : ((max((arr_2 [i_0]), (arr_3 [i_0]))))));
                arr_8 [i_0] [i_0] [i_1] = arr_4 [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = (((max(5356823481244093746, -331161055)) + ((((((13 ? 182 : 1))) ? (arr_10 [i_0] [i_1] [i_1]) : (max(var_14, (arr_10 [i_0] [i_1] [i_1]))))))));
                            arr_13 [i_1] [i_0] [i_1] [i_1] [i_1] [i_3] = ((((((((-1 ? 4095290361 : 1))) ? (min(168, -5)) : -7))) ? (((arr_3 [i_2]) ? 1 : 0)) : (-2147483647 - 1)));
                            arr_14 [i_0] [i_1] [i_1] [i_1] = ((((20068 ? -21243 : 1)) + ((551526231 / (arr_11 [i_0] [i_1] [i_3])))));
                        }
                    }
                }
                var_17 = ((-1124452063 == ((12664751427765517193 ? 20043 : (min(0, 18446744073709551601))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_4] [i_0] [i_1] = ((((((arr_6 [i_1]) ? 18446744073709551611 : (arr_11 [i_4] [i_1] [i_4]))))) && ((((8447 ? (arr_10 [i_1] [i_1] [i_1]) : -32651)))));
                                var_18 = (((arr_16 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 2]) - ((min(0, (arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
