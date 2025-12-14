/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_0] = ((((max((arr_2 [i_0] [i_0 + 1] [i_2]), (arr_2 [i_0] [i_0 + 2] [i_1])))) ? ((33136 ? var_8 : -1309438014)) : (min(-1309438014, (arr_2 [i_0] [i_0 + 1] [i_2])))));
                    var_11 += (((((var_3 ? (arr_5 [i_1] [i_0 + 2] [i_2]) : (arr_1 [i_0 - 1])))) ? var_6 : (max((arr_2 [i_0] [i_0] [i_0]), (arr_0 [i_0])))));
                    var_12 = (min(var_8, 234));
                    arr_7 [0] [i_1] [i_2] [i_2] = ((2757534287 ? 117 : 25));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((min(-3098028271117092209, (((-var_5 == (var_7 || -1309438014)))))))));
                                var_14 = 3996337578972200960;
                                var_15 ^= (((-265754186 == 1163043564) && ((max((((arr_11 [i_0]) / 1497587942)), (((var_1 ? var_8 : -14855))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [0] = ((3351382717 ? var_8 : 3996337578972200960));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_16 = ((~(((var_9 + 2147483647) >> (((arr_11 [i_0 + 2]) - 1835500117))))));
                    arr_18 [0] [i_6] = ((~((-((((arr_4 [i_0] [i_0 - 1] [i_0 + 2]) == var_9)))))));
                    var_17 *= (((var_8 - var_4) && var_2));
                    var_18 = (arr_16 [i_5] [i_5] [8] [1]);
                    arr_19 [i_5] [4] = ((!((((~var_1) - ((var_1 ? -83 : (arr_16 [0] [i_5] [0] [0]))))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_19 = (max((((((max((arr_20 [i_7]), var_2))) == 234))), var_2));
        var_20 = (min(((-(~222))), (((var_4 >= 77) - var_9))));
        arr_22 [i_7] [i_7] = min((((arr_20 [i_7]) ? (~var_0) : (arr_20 [i_7]))), ((min(98, (max(var_4, var_2))))));
    }
    var_21 = (((1 >> (var_8 - 4037))));
    #pragma endscop
}
