/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (~7);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 -= (max((6829900134757070430 | var_6), (min(384, 16853456761684880051))));
                            var_16 = (max(var_16, 6564));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_14 [i_3] [i_0] [i_1] [i_3] [i_3] = (min((-385 % -1614964713), 4301719382792346624));
                                var_17 ^= (~1614964713);
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_3] [i_5] = 4294967273;
                                var_18 = ((((-9737 == (~12183))) ? 1614964732 : (min(((376828328 ? -6829900134757070430 : 1381415660)), (var_7 >= -109)))));
                                arr_18 [i_1] = 278446840;
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((-(min(1614964713, -4604892677636504572)))))));
            }
        }
    }
    var_20 = var_6;

    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_22 [i_6] = (max((-23394 / 18523), 4654469897153041930));
        arr_23 [i_6] [i_6] = ((((113 * var_7) ? 23393 : 236)));
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_21 = (!-99543285);
        arr_27 [i_7] = (((((max(77, -1749234777)))) ? ((((-27454 / 1) / -9737))) : (max(-29, 23))));
        arr_28 [i_7] = ((max(8027702902626218159, 1)));
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] = var_12;
        arr_33 [6] [6] &= ((((max(-27720, 9736))) ? 1 : (((!((max(-1, 15936))))))));
        var_22 = (max((((3676579791 ? -11202 : -15936))), (-617572590481337513 / 14)));
        arr_34 [i_8] = (max(var_0, ((13161009290648656585 >> (-29 + 75)))));
    }
    #pragma endscop
}
