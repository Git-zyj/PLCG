/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = ((max((var_13 != var_5), 10275)));
    var_20 |= ((min(var_10, var_14)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (((((-(arr_1 [i_0])))) ? ((-(((arr_3 [i_0] [i_0]) ? -113 : (arr_2 [19]))))) : ((124 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_22 = (arr_2 [i_0]);
        var_23 *= (arr_3 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((((arr_2 [i_1]) + ((14262 ? (arr_4 [i_0] [i_0]) : (-2147483647 - 1))))) % 1834712734));
            var_24 |= 58561;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_25 = 15218;
            var_26 = -128;
        }
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_27 = min((min((arr_2 [i_3 + 2]), 15)), (arr_5 [i_3 - 3] [i_3 - 2]));
        var_28 ^= (max(1, -103));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_29 = (min(var_29, (~var_11)));
                    var_30 = (-7389178730803522940 + (min((arr_9 [i_3 - 2]), (arr_10 [i_3 - 2]))));
                }
            }
        }
        var_31 = (min(var_31, 4));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_32 = 61;
        var_33 = (-127 - 1);
        arr_19 [i_6] = (max((((-127 % 30996) ? (arr_2 [i_6]) : (-25841 + 31173))), (arr_5 [i_6] [i_6])));
    }
    #pragma endscop
}
