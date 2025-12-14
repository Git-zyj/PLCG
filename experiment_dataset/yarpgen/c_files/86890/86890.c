/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_12 = ((~(arr_5 [i_0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((var_11 ? ((((max(var_10, (arr_7 [i_0] [i_2 - 2] [i_3])))) ? ((var_0 ? 114 : var_4)) : 4052812435)) : ((((max(var_3, var_9)) ^ (~105))))));
                        var_14 = var_9;
                        var_15 *= 0;
                    }
                    arr_12 [i_0] [i_0] [i_2 - 1] [i_0] = (max(1, 141));
                }
                var_16 = (min(-74, 222));
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_17 = (arr_13 [i_4]);
        arr_15 [i_4] [i_4] = var_0;
    }
    var_18 = (max(var_18, 213428274));
    #pragma endscop
}
