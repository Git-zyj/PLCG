/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = (min(var_11, 433714396));
                arr_4 [i_0] [i_1] = var_5;

                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    arr_9 [i_2 - 2] [i_1 - 2] [i_1] [i_0] = (((((arr_8 [i_2] [8] [i_0]) >> ((((~(arr_5 [i_0] [3] [i_1 + 1] [i_2]))) + 5810053094955506529)))) + 0));
                    arr_10 [i_0] [i_2 - 1] [5] = (arr_7 [i_0] [i_1 + 2] [i_2] [2]);
                    var_12 = ((19 >> (22184 - 22131)));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_13 = ((((min(-6410274893286793071, -177446960))) ? (min(3784064484, 0)) : var_1));
                    var_14 = (min(var_14, (((~851854607) ? var_5 : (-1137677560 % -26174)))));
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_5] [i_1] |= (((min(0, var_0)) < (((arr_13 [i_6]) ? (arr_2 [i_6]) : 2133829554))));
                                var_15 -= ((!(((arr_3 [i_4 + 3] [i_6]) || ((min(18354737517260867462, var_10)))))));
                                arr_21 [i_0] [i_4] = ((((var_9 >= (min(var_8, -595764155)))) ? ((((((!(arr_2 [i_4 + 1]))) || (arr_18 [i_4] [i_1 + 1] [i_4] [i_4] [i_6] [i_4 - 1] [i_0]))))) : (min((~var_7), var_3))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        var_16 = 7112642314143724864;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_34 [i_7] [i_7] [i_9] = var_6;
                        arr_35 [i_9] [5] [i_9] [i_10] [7] = (!458826920);
                    }
                }
            }
        }
        var_17 = var_2;
        var_18 = (min(var_18, (((~(((((min(112, var_5))) && ((!(arr_22 [i_7 - 3] [i_7])))))))))));
    }
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 19;i_12 += 1)
        {
            arr_42 [i_11] [i_11] = (!(var_9 || 4294967276));
            var_19 += ((-177446960 == (var_8 >= 831151523)));
        }
        var_20 = ((((((var_1 < -855845753) % (arr_40 [i_11 - 1] [i_11 + 3])))) % (((arr_40 [i_11 + 3] [i_11 + 3]) ? ((-1137677577 ? var_7 : 1137677566)) : 3558573370405361204))));
    }
    #pragma endscop
}
