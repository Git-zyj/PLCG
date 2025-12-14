/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = var_11;
        var_15 = (4463029704077285741 ^ 1331907393);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 *= (arr_2 [i_1]);
        var_17 &= (((arr_3 [i_1]) ? ((77 ? (arr_3 [i_1]) : (arr_2 [i_1]))) : 4463029704077285736));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 = var_9;

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_8 [i_2] [i_2] [i_2] = var_5;
            var_19 = (arr_6 [i_2] [i_3]);
        }
        var_20 |= var_9;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 = var_9;
                    var_22 = (arr_6 [i_2] [i_2]);
                    var_23 = var_2;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_24 += (min((!960953019), ((-((max(44301, 32670)))))));
        var_25 += (min(((max((arr_13 [i_6]), (arr_13 [i_6])))), (((arr_13 [i_6]) ? (arr_13 [i_6]) : var_7))));
        var_26 = var_5;
        var_27 = (arr_14 [i_6]);
    }
    #pragma endscop
}
