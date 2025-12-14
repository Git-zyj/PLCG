/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((!(~3981526702))), (!var_7)));
    var_12 = (max(var_12, ((((4000364432440372647 / ((min(var_10, -29941)))))))));
    var_13 ^= (--3981526702);

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = ((!(-1 - 168)));
        var_15 = (min(var_15, ((((((2803023124 <= (3981526684 & -8862549424705900462)))) != ((((((18183 ? var_9 : 3981526702))) && var_3))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_6 [1] [i_0] &= 54083;

            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [6] = -var_10;
                var_16 &= (((var_5 / 65535) - ((var_9 ? var_5 : 0))));
            }
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                arr_13 [i_3] = (549755813887 + 1);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_1] [i_5] [1] [i_5 + 2] = var_9;
                            arr_20 [i_4] [i_1] [i_3] [i_3] [2] [i_1] &= ((-(-1 % 255)));
                        }
                    }
                }
            }
            var_17 *= 24;
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [2] = (max((max((var_5 < 18446744073709551613), ((1 ? 13 : var_3)))), ((max((var_7 <= 51678), (!503316480))))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_18 = (((0 ? 1 : var_9)));
                            var_19 &= ((!(var_8 - 10)));
                            var_20 = var_0;
                            arr_33 [i_7] = ((((max(1416217672, var_8) * var_6))));
                        }
                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_21 = (max(var_21, ((max((var_9 + var_6), (7870574584712541001 + 233))))));
                            var_22 = ((~(~9)));
                            var_23 = (min(var_23, ((max((max(0, 18446744073709551615)), var_7)))));
                            var_24 = 2803023124;
                            var_25 *= (((((-4294967295 ? ((1 ? 6508286805655750146 : 206)) : (29935 - 1491944153)))) || ((min(var_9, (max(var_7, -378115997)))))));
                        }
                        arr_37 [i_0] [i_6] [i_7 + 1] [i_0] [i_0] &= (min(((1 ? (~var_1) : (var_5 * var_2))), (((!(~0))))));
                        var_26 = 786978180;
                    }
                }
            }
            var_27 = (max(var_27, ((((((-30627 & (11475 % 138)))) <= (~-1913191081152428035))))));
            var_28 = (max(var_28, (((805266400 ? 786978167 : (((!(~24)))))))));
        }
    }
    for (int i_11 = 4; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_29 ^= (max(((~(max(var_9, 2024618771)))), (((2024618788 || 213) ^ 2270348507))));
        var_30 ^= (((~1491944148) ^ (((max(((max(255, var_10))), 4032))))));
        var_31 = (4294967295 == 1);
        var_32 = (max(((max(((min(-31, 2803023124))), -1))), (min((14654681286361977391 * 14654681286361977391), 127))));
    }
    #pragma endscop
}
