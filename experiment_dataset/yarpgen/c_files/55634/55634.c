/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_0] = (min(var_8, (min(-1, ((1 ? 977453558 : -30))))));
                    arr_8 [i_2] [i_2 - 2] = (min((max(977453558, -1)), (min((arr_2 [i_0] [i_0 + 1]), (arr_2 [i_0] [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((14 ? ((-43 ? 1865375053 : -2823704413005635352)) : (max(566818961, var_15)))))));
                                var_20 = (min(46, (arr_13 [i_2 + 2] [i_1 + 1] [i_2] [i_3] [i_2 + 1])));
                                var_21 = -2147483639;
                            }
                        }
                    }
                    var_22 = 224;
                    var_23 = (min(((2251799813685247 ? 8191 : 159)), -30));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {
                arr_19 [i_6] [i_5] [i_6] = ((!(arr_15 [i_5] [i_6])));
                var_24 = (min(536838144, 1));
                arr_20 [i_5] [i_6] = ((((((127 <= (arr_16 [i_5 - 1]))) ? (((min(var_5, 58477)))) : var_8)) > ((max(1099511496704, -14858)))));
            }
        }
    }
    var_25 = ((((max(((max(var_12, var_13))), var_11))) ? var_16 : 0));
    var_26 = var_0;
    #pragma endscop
}
