/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = var_13;
                arr_5 [i_1] [i_0] [i_0] = (((((arr_3 [i_1]) >= ((min((arr_2 [i_1] [i_0]), (arr_4 [8])))))) ? (((((arr_0 [i_0]) >= (arr_0 [i_0]))))) : (((min((arr_3 [i_0]), var_15)) * (!-1010687736)))));
            }
        }
    }
    var_20 = ((var_10 ? var_15 : var_17));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = ((106 ? ((max(((var_11 ? -3877132706140917723 : (arr_6 [i_2]))), (1010687762 ^ -120)))) : 8559952227021013024));
                                arr_17 [i_2] [i_3] [i_4] [i_4] [i_3] [i_5] [i_6] = min((arr_14 [i_2] [i_3] [i_4] [11] [i_4]), (!var_12));
                                var_22 = (min(1, ((8559952227021013006 ? -1506404828 : -3997288710604013993))));
                                arr_18 [i_2] [i_4] [i_4] [i_4] [i_5] [i_6] = ((!(4294967295 & -3997288710604013978)));
                            }
                        }
                    }
                    arr_19 [i_2] [i_4] [i_3] [i_4] = (min((((arr_7 [i_4]) / (arr_12 [i_4] [i_3] [i_2]))), (!var_0)));
                    arr_20 [i_4] [i_3] [i_3] [i_4] = ((((3035419000 ? (arr_10 [i_2] [i_3] [i_4]) : 4226385681))) ? 56117 : (arr_4 [i_3]));
                }
            }
        }
    }
    #pragma endscop
}
