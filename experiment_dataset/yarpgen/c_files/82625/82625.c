/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((((32761 ? (arr_2 [i_0] [i_0] [i_0]) : 32766))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = ((-(min(-32760, (((-5214741924448067445 == (arr_8 [i_3 + 1] [i_2] [i_1] [1]))))))));
                            var_20 = (max(var_20, (arr_8 [i_0] [1] [i_0] [i_0])));
                            var_21 = var_5;
                            arr_11 [i_0] [i_1] [i_2 - 1] [i_3] = 1;
                        }
                    }
                }
            }
        }
    }
    var_22 = (min((!var_3), ((var_2 ? (~var_1) : (((((-127 - 1) > -32763))))))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                {
                    var_23 = ((arr_14 [i_5 - 2] [i_5 - 1]) ? (min((arr_18 [i_5 - 2] [i_5 - 1] [i_5 + 1]), 77)) : ((((!(arr_18 [i_5 - 2] [i_5 - 1] [i_5 + 1]))))));
                    arr_19 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] = ((((((-32761 ? (arr_12 [i_4 - 1] [i_5]) : var_4))) ? (max(var_13, -78)) : var_4)));
                    var_24 &= 356283298;
                }
            }
        }
    }
    #pragma endscop
}
