/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    var_12 += (((((var_7 ? (max(var_10, (arr_4 [i_0] [i_1] [i_2]))) : var_10))) ? -var_1 : (((-(~1))))));
                    var_13 = (min((min((arr_1 [i_2 - 1]), (arr_0 [14] [i_0]))), var_10));
                    var_14 &= (!(((((var_7 ? 1 : var_2)) ^ (arr_6 [i_0])))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_15 = (min(var_15, (((~(max(2071627029, (~var_5))))))));
                    var_16 = (min(var_16, ((((min((var_7 == var_0), var_3)) <= var_10)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] = (min((((min(1, var_1)))), (min((max(var_10, var_2)), var_3))));
                                arr_17 [i_4] [i_0] = ((((min(48, (arr_11 [16] [16] [19] [i_4] [i_5] [i_0])))) ? (99 == 35) : (((((min(var_3, (arr_15 [i_0] [i_1] [i_3] [i_4] [i_5])))) != var_9)))));
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [i_5] = var_2;
                            }
                        }
                    }
                    var_17 ^= min(((((~var_5) <= var_5))), ((((min(var_7, 228))) ? (min(var_1, var_10)) : var_4)));
                    var_18 = (min((((!(~var_7)))), ((235 ? 24 : (arr_8 [i_0] [i_3])))));
                }
                var_19 = (min(var_19, -1587342679426821875));
                var_20 |= (((((arr_5 [6] [i_1]) ? var_9 : (arr_5 [8] [i_1])))) ? var_2 : ((1 ? (arr_8 [14] [i_1]) : -1648549479)));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
