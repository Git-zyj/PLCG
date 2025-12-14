/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!(((-1 ? 27702 : var_12)))))) < ((52818 ^ (4899 / 25640)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, 16371224038817464925));
                    arr_7 [i_1] [i_1] [i_2] [i_2] = (var_8 ? (((arr_5 [i_0] [3]) ? 1971501375 : 16371224038817464925)) : (!2147483647));
                    arr_8 [i_0] [i_1] [i_2] [9] = (1525231788 < 37834);
                    var_15 = (min(var_15, (((!(arr_3 [i_0]))))));
                    var_16 = (((arr_2 [i_2 + 3] [11] [i_2 - 1]) ? ((2075520034892086691 ? 0 : 22396)) : 56));
                }
            }
        }
        arr_9 [i_0] [i_0] = 22396;
        arr_10 [i_0] = ((-5815400111088718265 ? (arr_5 [i_0] [i_0]) : (var_2 > var_8)));
        arr_11 [i_0] = ((((56 <= (arr_6 [i_0] [i_0]))) ? 3 : (arr_6 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_17 += (((((16263 ? 27704 : (arr_0 [6] [i_3])))) && (((((min(var_12, (arr_0 [i_3] [i_3])))) ? (var_12 / 6023660622064099337) : 173)))));
        var_18 = (((var_7 && (((25640 ? 85 : 36553))))));
        arr_16 [i_3] = (((!36570) & 0));
        var_19 = ((-7894 + (11745 % -9401)));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_20 = (max(var_5, (((arr_12 [i_4]) ? (arr_12 [i_4]) : (arr_0 [i_4] [i_4])))));
        var_21 = 199;
    }
    var_22 *= var_12;
    var_23 = ((var_9 ? (((296108622927641870 ? -11776 : 16371224038817464926))) : var_2));
    #pragma endscop
}
