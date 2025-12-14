/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((max(var_17, (arr_3 [i_0])))) > var_14));
                arr_8 [10] [i_1] [10] = ((((((arr_1 [i_0] [i_1]) ? 237 : var_13)) + (arr_1 [i_0] [i_1]))));
                var_19 = (max(var_19, ((((min((max(var_11, (arr_0 [i_0] [i_1]))), (arr_3 [i_0]))) << (((min(((min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_1])))), (max(705522139, var_14)))) - 3193841318)))))));
            }
        }
    }
    var_20 -= var_11;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_21 *= (min(var_4, ((((arr_10 [i_2 - 1] [i_2 - 2]) ? (arr_12 [24]) : (arr_13 [i_2 + 1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((max((((((arr_16 [i_2] [i_3] [i_4] [i_5]) ^ (arr_19 [i_4] [i_4] [i_4]))))), (arr_18 [i_4]))))));
                            var_23 = (min(var_23, ((max((((arr_13 [i_2 - 2]) ? (arr_13 [i_2 - 2]) : (arr_13 [i_2 - 1]))), (min((arr_13 [i_2 + 1]), (arr_13 [i_2 - 2]))))))));
                            arr_20 [i_2] [i_2] [i_4] [i_5] = ((max(4294967293, (17908001904175678185 > var_8))));
                        }
                    }
                }
            }
        }
    }
    var_24 = max(var_15, 2994866567127825524);
    #pragma endscop
}
