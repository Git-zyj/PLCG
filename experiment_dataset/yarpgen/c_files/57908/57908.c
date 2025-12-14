/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((((((arr_2 [i_1]) ? var_0 : var_14))) > (max(var_7, (arr_0 [i_0]))))))) < (((arr_4 [i_0] [i_1] [i_0]) & (max(var_2, (arr_0 [i_1])))))))));
                arr_6 [i_0] [i_0] = (((arr_2 [i_0]) || (((-((((arr_4 [i_0] [i_1] [i_1]) >= -1))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = var_17;
                            var_21 = var_4;
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((((max(((((arr_10 [i_0]) != var_6))), var_3))) ? 16035584171557206904 : ((min(var_18, (arr_8 [i_0] [i_2 - 1] [i_2 - 2]))))));
                            var_22 = (min(var_22, ((min(var_6, ((((arr_11 [i_1] [i_2 - 2]) > var_15))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_23 += 7;
                var_24 = ((!(arr_21 [i_5])));
            }
        }
    }
    #pragma endscop
}
