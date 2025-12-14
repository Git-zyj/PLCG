/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (arr_2 [i_1] [i_1]);
                var_11 = (((max((((arr_1 [i_0 - 3]) - -7693023024523942846)), (((!(arr_0 [14])))))) >= (arr_1 [i_0 - 3])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 = (max((((-(((arr_2 [i_1] [i_2]) ? var_5 : 0))))), 3005271692));
                    var_13 = (max(var_13, ((max(((-7693023024523942846 ? (arr_6 [i_0 - 2]) : -7693023024523942846)), ((max((arr_6 [i_0 + 1]), ((~(arr_3 [i_2] [i_1] [i_0])))))))))));
                    var_14 -= ((((((0 || (arr_0 [i_1]))) ? var_4 : (!var_7))) >> ((((var_8 ? (var_8 * var_8) : (max(var_4, -7693023024523942846)))) - 13598179414543666983))));
                }
                var_15 = var_0;
                var_16 += ((((((((var_1 ? -7693023024523942854 : 58))) || -7693023024523942843)))) % (((arr_4 [6]) ? (max(4587266284356384312, (arr_4 [i_0]))) : -7693023024523942846)));
            }
        }
    }
    var_17 = (((var_6 - -var_2) * (var_3 / var_2)));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_13 [i_5] [1] [i_3 - 3] [i_3] = -210;
                    var_18 = ((((~(arr_4 [i_4]))) + (!7693023024523942846)));
                }

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_19 = (arr_8 [11]);
                    var_20 = ((60 ? ((+(((arr_14 [i_3] [i_4 - 1] [i_4 - 1] [i_6]) / 9038063131026457871)))) : var_7));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_21 = var_0;
                    var_22 = ((21 << (((((var_4 ? var_6 : (arr_8 [i_3]))) == (arr_15 [i_3 - 1] [i_3 - 1] [i_4]))))));
                }
                var_23 = ((((((((arr_15 [i_4] [i_4 + 1] [i_3]) ? 244 : var_7))) - (9297516551689005103 + 4585023737884358891)))) ? ((((-var_6 && (arr_6 [i_3 - 3]))))) : (((!var_2) / (arr_16 [i_3 - 2] [i_4 - 2] [i_4 + 1] [i_4]))));
            }
        }
    }
    #pragma endscop
}
