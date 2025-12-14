/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -10304;
    var_17 = ((((min(4267111090703463110, ((min(65526, -16318)))))) | 5386214426991681426));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] = (((min((arr_7 [i_3] [i_2 - 3] [i_3] [i_3 + 3]), var_5)) & var_9));
                        var_18 = ((((arr_9 [i_2] [i_2 - 1] [i_3 + 2] [i_3 + 3] [i_3]) + (arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 3] [i_3 + 2] [i_3 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2 - 1] [i_1] [i_4] [i_0] = (((((-(arr_8 [i_2 - 1] [i_1] [i_2 - 3] [i_4])))) || (arr_7 [i_0] [i_2] [i_4] [i_5])));
                                arr_18 [i_0] [i_1] [i_2 + 1] = (arr_7 [i_0] [i_1] [i_2 + 2] [i_4]);
                            }
                        }
                    }
                    var_19 ^= (max((arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2 - 2]), (((!((min((arr_5 [i_0] [i_1] [i_2 - 3]), var_4))))))));
                    var_20 = (max(var_20, (((~(max(var_15, (arr_1 [i_0] [i_1]))))))));
                    arr_19 [i_1] [i_0] = ((+((2301 ? (((arr_0 [i_0]) + var_6)) : (arr_15 [i_0] [i_0] [i_1] [i_2 - 3] [i_2] [i_2 - 3])))));
                }
            }
        }
    }
    var_21 = (!13060529646717870218);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                var_22 = (max(var_22, var_12));
                var_23 = (max(var_23, (arr_24 [i_6] [i_6] [i_7])));
            }
        }
    }
    #pragma endscop
}
