/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (-430800471445412955 > -6570);
            var_17 = (max(var_17, ((max(((((arr_2 [i_1] [i_1 + 1]) == (arr_1 [i_0 - 2] [i_1 - 2])))), var_10)))));
            arr_5 [4] [i_1] [i_0] = (arr_1 [i_0] [i_1]);
            arr_6 [i_0] = ((66 ? -6570 : 2515869150));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = ((((((6570 * (arr_7 [i_0] [i_2] [i_0])))) ? (max(var_8, (arr_9 [i_0] [i_2] [i_0]))) : (6570 / var_8))));
            arr_11 [19] [i_0] [i_2] = (max(((((!(arr_0 [i_0]))) ? (arr_1 [i_0 - 2] [i_2 - 1]) : ((var_0 + (arr_2 [i_0] [i_2]))))), 2066007910));
            arr_12 [i_0] [i_0] = (55081 | 104);
            arr_13 [i_0] [7] = (((427105844 - 6570) + (((arr_2 [i_0] [i_2 - 1]) ? -6570 : (arr_2 [i_0] [i_2 - 1])))));
        }
        var_18 = ((max(18840, (arr_9 [i_0 + 2] [i_0 - 2] [i_0]))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_18 [i_3] = (((((arr_15 [0]) + 9223372036854775807)) >> (((((max(-6595, -3)))) - 65485))));
        var_19 = ((7941564150360726085 ? 127 : 6590));
        var_20 -= ((var_14 ? ((244 + ((18863 ? var_13 : var_3)))) : (((min(9223372036854775805, 6522))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_21 = 1;
                    arr_23 [i_3] [5] [0] [i_3] = ((-7756206388507164776 ? (min((7941564150360726106 * 0), var_15)) : ((max(((-32764 / (arr_9 [i_3] [i_4] [i_4]))), (arr_21 [i_5] [2] [i_5]))))));
                }
            }
        }
    }
    var_22 = (max((((var_2 != ((17362 ? var_5 : var_6))))), ((var_13 ? var_2 : ((min(1, (-32767 - 1))))))));
    #pragma endscop
}
