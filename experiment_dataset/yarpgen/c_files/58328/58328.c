/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 1;
    var_13 = -117;
    var_14 &= (4294967295 != var_2);
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 &= (arr_4 [i_0] [6] [i_0]);
                var_17 = (1551950714072826333 / 10);
                var_18 &= -7915993814731070033;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (-1 ? (((3976174711 / (arr_3 [i_1 - 2])))) : ((((((arr_6 [i_0] [i_1] [i_0] [i_3]) ^ var_10))))));
                            var_20 |= ((1 * ((var_6 & ((((arr_5 [i_1 - 1] [i_2] [i_3]) & (arr_7 [i_1 + 1] [i_1] [i_2 - 1] [i_0] [i_0]))))))));
                            arr_10 [i_3] = (arr_7 [i_3] [i_3] [i_1] [i_1] [i_0]);
                            var_21 *= ((max(((((arr_4 [i_2] [i_1 - 1] [i_2]) && -8821))), ((0 ? (arr_2 [i_0] [i_0]) : var_11)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
