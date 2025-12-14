/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? (((~(((var_9 + 2147483647) << (((var_11 + 9535) - 20))))))) : ((var_2 ? var_7 : 18446744073709551615))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] = (arr_10 [i_2] [i_2] [i_1] [i_2]);
                            arr_13 [i_2] = (arr_1 [i_1]);
                        }
                    }
                }
                var_18 = (((arr_11 [i_1] [i_0] [i_0] [i_0 - 1]) & 51996));
            }
        }
    }
    var_19 = ((-(((((180 >> (var_9 + 371509487)))) ? var_6 : (((-19829 + 2147483647) << (178 - 178)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 24;i_5 += 1)
        {
            {
                var_20 = (arr_16 [i_5]);
                var_21 = (arr_15 [i_5]);
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
