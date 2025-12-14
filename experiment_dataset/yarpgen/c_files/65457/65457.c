/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(1217441206, 5690685786336604035));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (max((min((var_8 + var_3), (var_12 / var_5))), ((((arr_4 [i_1 + 2]) ? 7401930661636998595 : var_6)))));
                var_16 &= var_4;
                var_17 = (max(var_17, ((max(2408161246, 12756058287372947570)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_18 = (((var_12 && var_8) ? var_11 : (min((arr_3 [i_2] [0]), var_7))));
                    arr_7 [i_1] [i_1 + 2] [i_1] = 56277021966363215;
                    arr_8 [i_2] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                    var_19 = var_11;
                    arr_9 [i_0] [i_0] [i_1] [i_2] = var_4;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_20 &= (min(((((max(var_7, (arr_4 [i_3])))) ? (((var_1 ? var_4 : (arr_12 [i_0] [i_0] [i_0])))) : ((var_5 + (arr_5 [i_0] [i_1 + 2] [i_0]))))), ((((((var_5 ? var_12 : 65535))) ? (arr_1 [i_3] [i_3]) : ((2408161246 ? 8 : 1217441206)))))));
                    var_21 = (max(var_21, (arr_10 [i_0] [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_18 [i_3] [i_0] [i_0] |= (arr_0 [i_0]);
                                var_22 = (!(((0 ? 33453 : 65510))));
                                var_23 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [14] [i_7] [i_7] [14] |= var_2;
                    arr_29 [i_6] [i_7 - 1] [4] [i_7] = (arr_24 [i_6] [i_7] [i_8]);
                }
            }
        }
    }
    var_24 &= ((12 ? 4294967295 : 8170076575726471896));
    var_25 = (min(var_25, (((var_13 ? var_13 : 0)))));
    #pragma endscop
}
