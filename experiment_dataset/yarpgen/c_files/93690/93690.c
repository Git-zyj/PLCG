/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((((max(10, 233))) ? 4294967285 : (arr_1 [i_0]))) / (((~(arr_4 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [11] [i_3 - 3] [i_2] = (min((arr_10 [i_1]), ((-9223372036854775794 ? (arr_10 [i_1]) : (arr_3 [i_3 - 1] [i_3 - 3])))));
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] [i_1] = (arr_1 [i_1 + 4]);
                            arr_13 [i_0] [i_1] [i_2 - 1] [i_1] = 1962885715;
                            arr_14 [i_0] [6] |= (arr_3 [i_0] [i_0]);
                            var_13 = 0;
                        }
                    }
                }
            }
        }
    }
    var_14 = 16255;
    #pragma endscop
}
