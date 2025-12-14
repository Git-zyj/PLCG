/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_3));
    var_21 = ((770733585397942320 || -1) + var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_22 -= ((max(0, 428)));
                var_23 = (((((arr_4 [i_0] [i_1 + 2] [i_0]) * var_9)) == -28));
            }
        }
    }

    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_24 = (arr_6 [i_2] [i_2 - 3]);
        var_25 += ((((((!(arr_6 [i_2] [i_2]))) * (arr_7 [i_2 - 2] [i_2 - 2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_26 = (arr_2 [i_3]);
        var_27 = (max(var_27, (~var_16)));
        arr_11 [i_3] [i_3] = (-12822 ? (min(-6741087997723518030, -2101465281977881145)) : (((9154 ? 428 : -32752))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    var_28 = ((~(min((~-26241), var_4))));
                    var_29 = (min(var_29, (((((~(((arr_5 [i_6]) ? -1 : 4218673889)))) % -26241)))));
                    arr_18 [i_4] [i_4] = ((var_8 ? (((((var_14 + (arr_13 [i_4])))) ? ((((arr_13 [i_4]) ? (arr_5 [i_4]) : (arr_14 [6] [4])))) : ((2101465281977881158 ? 0 : 0)))) : 1));
                }
            }
        }
        var_30 = (-11972 & 1);
    }
    var_31 = ((~(((!(4 * -1))))));
    #pragma endscop
}
