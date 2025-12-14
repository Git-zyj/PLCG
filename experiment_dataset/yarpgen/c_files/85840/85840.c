/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((16376 ? var_3 : (min(16360, 260096)))), 37965));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (((((-(((arr_9 [i_0] [i_1]) + (arr_9 [i_0] [i_1])))))) - ((var_10 + (min(-2673975877575566617, 16350))))));
                            var_14 |= ((-(arr_8 [i_0])));
                            var_15 = 9223372036854775807;
                            var_16 |= var_11;
                            var_17 = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        }
                    }
                }
                var_18 = ((((((~(arr_11 [i_0] [i_0] [i_1] [i_0]))) % var_5)) > (min(6253164325673424444, (arr_0 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
