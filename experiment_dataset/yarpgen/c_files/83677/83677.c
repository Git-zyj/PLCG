/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 = arr_2 [i_0];
        var_13 = (min((((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])));
        var_14 = max((min(2575745830, (((0 > (arr_0 [i_0] [1])))))), ((((max(0, (arr_0 [i_0] [1]))) <= (((1152921504606846976 ? var_1 : (arr_1 [i_0]))))))));
        var_15 = (max(var_15, var_10));
        var_16 = ((-(max(201326592, 5016085770834447489))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_17 = (min((((((arr_3 [i_1] [i_1]) + 9223372036854775807)) << (((((arr_3 [i_1] [i_1]) + 2431160666280383103)) - 50)))), var_9));
        arr_6 [i_1] &= var_1;
        arr_7 [i_1] = 4093640681;
    }
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_19 = (max((max(14868212754974081151, 201326590)), ((-(arr_11 [i_3] [i_2])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] [i_3] [i_3] [i_2] = (((((0 << (((max(17536002473517910547, 1)) - 17536002473517910518))))) ? var_4 : 0));
                            arr_21 [i_2] [i_2] [i_2] [i_3] = ((5016085770834447489 ? 1 : (arr_10 [i_2])));
                            var_20 = (((-6171765259101544194 ? (max(11979, 0)) : (max(var_0, 4561797660473817524)))) & ((min((arr_9 [i_4]), (arr_17 [i_3] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
