/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((max(1723043933, 8191)), 8191)))));
    var_16 = (((((var_5 ? (!var_2) : ((min(var_9, var_4)))))) ? var_2 : var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = (min(var_17, (((((3054156075 ? -8191 : 7547)) | (arr_1 [i_0] [i_0 - 1]))))));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            var_18 = (arr_14 [i_2] [i_5] [i_5] [i_5] [i_5 - 3] [i_5]);
                            var_19 = (min(var_19, (((((((var_4 << 0) % var_5))) ? ((min((arr_9 [i_5 - 2] [i_5 - 1]), var_6))) : ((~((var_11 ? 102 : var_12)))))))));
                            var_20 = (min((~-89), 0));
                        }
                        arr_18 [i_1] [i_1] [i_1] = -23890;
                        arr_19 [15] [12] [4] [i_1] [i_1] = (!-8191);
                        arr_20 [i_1] [i_1] [7] [i_3] [i_4] = ((-(min(1186193385, 252))));
                    }
                }
            }
        }
        arr_21 [i_1] = 65535;
    }
    var_21 = ((var_10 <= ((min(var_1, var_3)))));
    var_22 = var_10;
    #pragma endscop
}
