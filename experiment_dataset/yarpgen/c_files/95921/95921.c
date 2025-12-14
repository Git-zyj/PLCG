/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [1]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 -= 10508;
            arr_6 [i_0] = 951260944;
        }
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_13 [4] = ((((min(-951260950, (arr_9 [i_2 - 3])))) ? (((arr_9 [i_2 - 3]) ? 603488520 : var_10)) : ((min(var_2, -951260954)))));
            arr_14 [i_2 + 1] [i_3] [9] = 4294967295;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_13 = -var_10;
                        var_14 = ((((max(4294967295, -444))) ? ((12288 ? (-32767 - 1) : var_1)) : 81));
                        var_15 = (min(var_15, (min((min(10887320467946108334, 603488520)), (var_8 != var_9)))));
                    }
                }
            }
            arr_21 [i_2] [i_2] = ((53266 | (max((arr_18 [i_3]), var_6))));
            arr_22 [i_2] [i_3] = (((!3459996611905056743) ^ 5574151851481097656));
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_26 [6] [i_6] [i_2] = (min(((603488520 ? 268435455 : var_6)), var_5));
            arr_27 [i_6] [4] [i_6] = var_7;
        }
        arr_28 [i_2] = (((((arr_20 [i_2] [i_2 - 1] [3]) | (arr_20 [i_2 - 1] [i_2 - 1] [i_2]))) | var_9));
        var_16 = (max(((((var_9 ? var_10 : var_10)))), (max((arr_16 [i_2] [i_2] [i_2] [i_2]), ((min((arr_9 [i_2 - 2]), -27097)))))));
        arr_29 [6] = (min((!var_0), (max((arr_20 [i_2 - 3] [17] [i_2]), (603488520 || -20958)))));
    }
    #pragma endscop
}
