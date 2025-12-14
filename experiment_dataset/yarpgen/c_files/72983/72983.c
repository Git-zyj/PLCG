/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = 1;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_13 = 1;
            var_14 = (~(arr_4 [3] [i_1]));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_15 += var_8;
            var_16 += (min(var_3, 1));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_17 += ((((arr_5 [i_0] [7] [i_6 - 2]) ? (!-9223372036854775798) : ((~(arr_12 [i_0] [i_0]))))));
                            var_18 = (max(var_18, (arr_0 [i_6] [i_0])));
                            arr_20 [i_0] [i_0] [i_4] [i_3] [7] = (min((((min((arr_0 [i_0] [i_0]), 44308)))), (((((1 ? 57251 : 1967))) ? (arr_0 [i_0] [i_3]) : (((min((arr_10 [i_3]), (arr_10 [10])))))))));
                            var_19 = (((((max(7564236358974131035, 1)))) ? (21200 || 524224) : var_2));
                        }
                    }
                }
            }
            var_20 += (((var_11 + 2147483647) >> (((((-2147483647 - 1) - -2147483625)) + 33))));
        }
        arr_21 [6] = (arr_11 [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_21 = ((var_1 & ((min(var_9, ((-1 & (arr_12 [i_7] [i_7]))))))));
        var_22 += (arr_6 [i_7] [i_7]);
        var_23 += (!var_1);
    }
    var_24 = var_7;
    #pragma endscop
}
