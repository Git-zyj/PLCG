/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(((var_7 * (((max(var_11, var_9)))))), (var_10 != var_15))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = (max(((((min(var_12, var_8))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : ((var_9 & (arr_2 [i_0]))))), (min((max((arr_2 [i_0]), var_12)), (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = ((((arr_0 [i_1]) ? 3 : ((1587450505 ? 127 : 2147483647)))));
                        var_19 = (i_0 % 2 == zero) ? (((((min(((max(var_10, var_6))), (((arr_5 [i_2] [13] [i_0] [13]) ? var_1 : var_7))))) ? (((((arr_5 [i_0] [i_1] [i_0] [i_3]) - (arr_4 [i_0 - 3] [i_1] [i_0 - 3]))) >> ((((var_12 | (arr_5 [i_3] [i_0] [i_0] [i_0 - 1]))) - 342756217251049865)))) : ((min(252, 1587450505)))))) : (((((min(((max(var_10, var_6))), (((arr_5 [i_2] [13] [i_0] [13]) ? var_1 : var_7))))) ? (((((arr_5 [i_0] [i_1] [i_0] [i_3]) - (arr_4 [i_0 - 3] [i_1] [i_0 - 3]))) >> ((((((var_12 | (arr_5 [i_3] [i_0] [i_0] [i_0 - 1]))) - 342756217251049865)) - 6521830809331359278)))) : ((min(252, 1587450505))))));
                    }
                }
            }
        }
        var_20 = (min(var_20, (arr_6 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_21 &= (((var_14 != var_7) > ((((min((arr_0 [i_4]), var_5))) ? (min(var_0, (arr_2 [6]))) : var_7))));
        var_22 = (max(var_14, (max((((arr_5 [i_4] [0] [0] [i_4 - 1]) ? var_10 : var_8)), ((max(var_12, (arr_2 [4]))))))));
        var_23 = (((((arr_8 [i_4] [i_4] [3] [i_4] [i_4 + 3] [i_4]) ? ((((arr_8 [0] [0] [i_4] [i_4] [i_4] [i_4 + 3]) % (arr_4 [i_4 + 4] [i_4] [i_4 + 4])))) : (((arr_0 [i_4]) | var_8))))) ? (min((max(var_13, var_4)), var_0)) : (((var_7 ? (arr_4 [i_4 + 1] [2] [i_4 + 2]) : (arr_4 [i_4] [i_4] [i_4 - 1])))));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_24 = (max(var_24, ((((((-1 ? 1181519262 : 3920587880248061331))) ? (((min((arr_12 [i_5 + 1]), (arr_13 [i_5 - 1]))) >> (((var_0 | var_14) - 4227857394)))) : ((((arr_13 [i_5 + 1]) ? (arr_13 [i_5 - 1]) : (arr_13 [i_5 - 1])))))))));
        var_25 = (min(((((max(var_15, (arr_13 [i_5])))) ? (max((arr_12 [i_5]), (arr_13 [20]))) : (arr_13 [i_5]))), (3 + 3)));
        var_26 = (min(var_26, (((((((arr_12 [i_5 + 2]) ? ((max((arr_13 [20]), (arr_13 [i_5])))) : (((arr_13 [i_5 - 1]) ? (arr_12 [i_5 + 1]) : (arr_13 [i_5])))))) ? ((((((arr_13 [i_5 + 1]) ? var_12 : (arr_12 [i_5 + 2])))) ? (((var_0 ? (arr_13 [i_5]) : (arr_13 [i_5])))) : (arr_12 [i_5 + 2]))) : (((((arr_13 [i_5]) == ((((var_10 > (arr_13 [i_5]))))))))))))));
    }
    #pragma endscop
}
