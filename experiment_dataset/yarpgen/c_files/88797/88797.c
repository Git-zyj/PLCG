/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_2 ? var_7 : (min((!6478658714856892360), ((6478658714856892370 ? 7614847026790745530 : 121))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(147, 18381562568206957553));
                var_12 = (((((3242 >> (var_2 - 165)))) ? (min((arr_3 [i_0 - 1] [i_1] [i_1]), ((268435456 ? (arr_2 [i_0 - 1]) : (arr_1 [i_0] [i_1]))))) : (((((((arr_1 [8] [i_1]) && 2068235731)))) - 5342448325446818820))));
                var_13 = (!var_6);
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_14 = var_0;
        var_15 = (max(var_15, (((((max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))) ? (((max((arr_7 [i_2] [13]), 16)))) : (((!(212 | 65181505502594078)))))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_16 = (min(var_16, (((((((arr_8 [i_3]) >= (arr_8 [i_3])))) | (!18446744073709551604))))));
        arr_11 [i_3] [i_3] = (max((min(var_7, (var_0 & 65181505502594063))), ((max((28 & -1628078234), 22)))));
        arr_12 [i_3] [i_3] = (arr_8 [i_3]);

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_17 [i_3] [i_3] &= ((var_3 ? (((arr_13 [i_3] [i_3] [i_4]) ? (arr_16 [0] [i_4] [i_4]) : (arr_16 [i_3] [i_3] [i_4]))) : (!6478658714856892360)));
            var_17 = ((((arr_13 [i_4] [5] [i_3]) ? (arr_13 [i_4] [i_4] [i_3]) : 3244)));
            var_18 = (max(var_18, ((((((~(min(65181505502594063, var_2))))) ? ((((max(var_6, (arr_15 [i_3] [i_4])))) ? 232 : var_9)) : (arr_8 [i_3]))))));
            var_19 = ((1959972439 | (((((232 ? var_3 : (arr_8 [i_3])))) ? (min(-3796506103359736541, 0)) : var_3))));
        }
    }
    #pragma endscop
}
