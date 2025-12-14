/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = ((-(min(((((arr_3 [i_0 - 1]) ? 0 : (arr_2 [i_0])))), -var_12))));
        arr_5 [i_0] = (min(((max(1, (arr_2 [i_0])))), (arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(var_18, (((-(((!(arr_6 [i_1])))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_1 + 1] [i_1] = (!238);
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_14 [i_1]);
                    }
                }
            }
        }
        var_19 = (max(var_19, 66));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_20 = ((((var_9 ? ((var_8 & (arr_17 [i_5] [i_5]))) : (arr_19 [i_5] [i_5])))) ? (((((32768 ? 66846720 : (arr_19 [i_5] [i_5])))) + 9223354444668731392)) : ((((arr_17 [i_5] [i_5]) ? 5 : ((216 ? var_16 : (arr_18 [i_5] [i_5])))))));
        var_21 = (max(((!((min(-6172, 12567))))), (((((min(-14120, var_10)))) < (17179868160 / -17179868161)))));
        var_22 = ((9223372036854775791 ^ (arr_19 [i_5] [i_5])));
        var_23 *= min((arr_18 [i_5] [i_5]), ((((((arr_17 [i_5] [i_5]) | 11886)) == 17179868160))));
        var_24 = (max(var_24, ((((-17179868160 + var_11) ? (((max(17179868159, (arr_19 [i_5] [i_5]))) / -17179868185)) : var_13)))));
    }
    var_25 -= ((var_15 << ((((((min(var_17, var_3))) ? (~var_4) : ((9223372036854775791 << (1 - 1))))) + 1131715584))));
    #pragma endscop
}
