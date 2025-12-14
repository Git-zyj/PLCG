/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((((-(!var_13))) != ((max((!var_10), 1)))));
                    var_15 ^= var_11;
                    var_16 &= (39 * 39);
                    arr_8 [i_0] [i_0] [i_2] = (min((((((max((arr_5 [i_0] [i_1] [i_0]), 24327))) >= (~var_2)))), 5));
                }
            }
        }
        var_17 = ((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_18 = (min((min(17891034953346882553, -32759)), (~1)));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_19 = 7384592775159193869;
        var_20 = (~((min(39, (max(26742, (arr_9 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_21 = -var_8;

                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_22 += arr_0 [i_5] [i_6];
                            arr_24 [i_6] [i_6] [4] [i_6] [i_6] [i_6] [i_4] = 213;
                            var_23 = ((((((min(var_9, var_13))) << (((((arr_11 [0]) << (var_12 - 4964))) - 3278)))) << (((max(var_1, ((min(96, var_12))))) - 2519809028))));
                            var_24 = (max(var_24, (arr_7 [i_6] [i_5] [i_3] [i_3])));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, ((((min(var_8, (arr_22 [i_3] [i_3] [i_4] [i_3] [i_6] [i_6] [i_8]))) ^ (((arr_6 [i_3] [i_4] [i_6] [i_8]) * (arr_22 [i_8] [i_4] [i_4] [i_4] [1] [i_8] [i_3]))))))));
                            var_26 = (min(var_26, 5));
                            arr_29 [i_3] [i_4] [i_4] [i_3] [i_3] = max(2840947469331848091, 0);
                            arr_30 [i_4] [i_4] [i_5] [i_5] [i_6] [4] [i_8] = ((var_10 ^ (arr_28 [i_3] [i_4] [i_4] [i_6] [i_8])));
                        }
                        var_27 = -40;
                        var_28 = (arr_11 [i_3]);
                        var_29 = (min((min(1, 18204173214909247693)), (~92)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_30 = ((!(4992584743857048359 && 242570858800303922)));
                        var_31 = 1;
                        var_32 ^= ((-(var_2 != 32755)));
                    }
                    arr_35 [i_4] [i_3] [i_5] = ((var_3 * (max(var_7, 18204173214909247684))));
                    var_33 = (2443594352325879807 >= 253);
                }
            }
        }
        var_34 = 4992584743857048370;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_35 = 1;
        var_36 = 19;
        var_37 = (!886351281);
        var_38 = (min(var_0, (~-26050)));
    }
    var_39 = (min(13454159329852503259, 1));
    var_40 = var_9;
    var_41 = (((~((38751 ? 25675 : var_6)))));
    #pragma endscop
}
