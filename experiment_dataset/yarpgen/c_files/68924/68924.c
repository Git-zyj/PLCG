/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((-(var_13 / var_5)))) ? (((var_8 ^ var_7) >> (((var_1 | var_3) - 105)))) : (((((var_13 * var_3) + 2147483647)) << (-var_16 - 2659263399333698230))))))));
    var_19 += ((((((min(var_15, var_1))) ? (~var_14) : var_4))) && var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((((min((arr_1 [i_0]), (arr_1 [i_0])))) && ((min((arr_5 [i_0] [14]), var_14)))))))));
                    var_21 = ((((((!(((arr_1 [i_2]) && var_15)))))) % ((~(max(var_8, var_12))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((((var_12 ? (arr_6 [i_0] [i_1] [i_2]) : var_1)) <= var_1));
                        var_23 = ((((var_13 ? var_10 : var_13)) / ((var_11 ^ (arr_1 [i_3 + 1])))));
                        arr_10 [i_0] [i_0] [i_3 - 1] [i_2] [i_2] [i_1] = (((arr_3 [i_1]) ? -var_1 : ((((arr_4 [6] [i_2] [i_1]) != var_17)))));
                        var_24 = ((arr_6 [i_3 - 1] [i_1] [1]) ^ (arr_6 [i_3 - 1] [i_3] [i_2]));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, ((max((arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]), (((((var_1 ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : var_2))) ^ ((~(arr_1 [i_0]))))))))));
                        arr_13 [i_0] [i_0] = (2199023255551 || -4252571553245289579);
                        var_26 = ((0 ? 7 : 426496259038481628));
                        var_27 = ((-(18020247814671069988 | 426496259038481627)));
                    }
                }
            }
        }
    }
    var_28 = ((~(max(((var_10 ? var_4 : var_8)), ((max(var_15, var_4)))))));
    var_29 = ((!(!var_2)));
    #pragma endscop
}
