/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_12 = ((min((arr_2 [i_1]), 1)));
            var_13 = ((~(min(((min(var_0, 48))), -190))));
            var_14 = ((((min(((var_3 ? 1 : var_6)), 1))) - (var_8 || 48)));
            var_15 = var_3;
            var_16 = (min(((min(126, (arr_2 [i_0])))), -var_2));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_17 += (min(var_5, (min((var_8 & -278678525), 1))));
            var_18 = (max(var_18, (arr_0 [12])));
        }
        var_19 = (min(var_19, ((min((min(var_3, ((~(arr_0 [10]))))), ((min(var_2, 129))))))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    {
                        var_20 = (min(var_10, ((((106 >> (942474451 - 942474436))) - 0))));
                        var_21 = var_9;
                        var_22 = ((-((var_1 - (arr_9 [i_0] [2])))));
                        arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_5] = ((((((min((arr_13 [i_0] [i_3 - 3] [i_0] [i_5]), var_7))) - (min(var_9, 3385495758074407705)))) & var_1));
                    }
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
