/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 131;
        var_18 = var_16;
        var_19 = (min(var_19, 2513943746482182556));
        var_20 -= (0 + 2257726016559680079);
        var_21 = (15932800327227369075 < (arr_0 [i_0 - 1]));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (arr_3 [i_1])));
        var_23 = (min((((((max(170, 1)))) < 31)), var_12));
        var_24 = (min(var_24, (max(((max(var_8, (arr_3 [i_1 + 3])))), (2328835607 & 13047581473894116837)))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((-((((((arr_7 [i_2]) ? var_15 : 0)) == (var_17 || 15932800327227369060))))));
        var_25 = min((1 * var_14), (((1 + (arr_7 [i_2 + 3])))));
        arr_10 [i_2] = (((((((max(839295012, 232))) && -var_5))) != ((((arr_4 [i_2 + 4] [i_2 + 3]) != var_4)))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_26 = ((((min((arr_11 [i_3 + 2] [i_3 + 1]), var_15))) ? (min((arr_3 [i_3]), (arr_0 [i_3 - 1]))) : ((min((arr_0 [i_3 + 2]), (arr_0 [i_3 + 1]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_27 = (max(var_27, 1));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_24 [1] [1] [i_5] [i_3] [i_7] = ((var_5 ? ((var_5 & (min(2047, 15932800327227369060)))) : ((4294967253 ? ((max((arr_15 [15] [i_4] [i_6] [i_6]), var_6))) : (max(var_17, 17396))))));
                                arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [i_3] = (((((((var_12 ? var_11 : 0))) ? 255 : ((min(20, 1))))) + 15));
                            }
                        }
                    }
                    var_28 = (((15932800327227369060 && (2513943746482182556 - 1343656402))) ? ((2307136607153420949 ? 10296779779604039424 : -1)) : ((max((~var_11), ((var_0 & (arr_7 [i_5])))))));
                }
            }
        }
    }
    var_29 = ((!((max((~0), var_12)))));
    var_30 = 249;
    #pragma endscop
}
