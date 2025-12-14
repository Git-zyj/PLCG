/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (50 & 893216530112673202);
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = ((((min((arr_4 [i_2 - 1] [i_2 - 2]), (arr_6 [i_1] [i_1] [i_0])))) ? ((~((-1057421088 ? var_13 : var_9)))) : ((((((-7406705273105517460 ? 1073741823 : 86))) ? (5822685984165578092 >> 1) : ((4139534907 ? -107 : var_12)))))));
                                var_18 = (max(var_18, -1));
                            }
                        }
                    }
                    var_19 = (max(var_19, ((((6155153420440660545 ? -84 : 4655354089039187755))))));
                    var_20 -= 64;
                }
            }
        }
    }
    var_21 = (var_9 == (var_2 >= 1));
    #pragma endscop
}
