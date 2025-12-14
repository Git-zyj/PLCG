/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 += (arr_2 [i_0 + 1] [i_0]);
        var_20 -= (((arr_2 [i_0] [i_0 - 1]) == (arr_2 [i_0] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (((~5) ? 11478565566227662449 : (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = (((1744188307 ? 1826630716859450697 : -110)));
                        var_23 = (((arr_6 [19] [i_3]) ^ (((arr_5 [i_2] [i_3] [i_4]) ? (arr_10 [i_1] [i_1] [i_3] [i_4]) : 2632681865))));
                        arr_12 [2] [i_2] [i_3] = (6968178507481889167 * 6968178507481889166);
                    }
                }
            }
        }
        var_24 = ((!(arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
    var_25 = var_0;
    #pragma endscop
}
