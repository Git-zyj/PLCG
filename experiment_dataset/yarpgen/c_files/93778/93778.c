/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (min(var_12, ((min(204, var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((((max((((arr_4 [i_0] [i_1] [i_2]) * (arr_7 [i_0] [i_1] [i_2] [i_2]))), (((-(arr_0 [1] [i_1]))))))) ? (arr_7 [i_2] [i_2] [i_2] [i_2]) : ((((arr_3 [i_2]) / 2972055853464015516)))));
                    var_14 = (((arr_7 [i_2] [3] [i_1] [i_0]) * (max((min((arr_5 [i_1]), 12321682260327464483)), 1))));
                    arr_9 [i_0] [i_1] [i_1] = (((6125061813382087132 ? 13002066137404247932 : 0)));
                    arr_10 [i_0] [i_1] [i_0] [i_2 + 1] = (((29420 ? 13510612372069381501 : (0 + 64640))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (-((13510612372069381501 ? ((((arr_8 [i_0]) ? var_2 : (arr_3 [i_4])))) : (max(13510612372069381496, 210)))));
                                arr_17 [i_0] [i_0] [i_0] = 5444677936305303683;
                                var_16 = -1568283589148879903;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (((((min(var_7, (7628014078324536813 > var_1)))) >> (var_7 - 13))))));
    var_18 = 1606459807;
    #pragma endscop
}
