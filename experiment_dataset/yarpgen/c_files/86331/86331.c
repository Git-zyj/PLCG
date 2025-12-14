/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = 110533984;
            var_13 = -7499;
            arr_6 [i_1] [i_1] = ((126 ? 126 : ((-(arr_0 [i_1])))));
            var_14 = 67;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = (((arr_3 [i_2]) <= (arr_4 [i_0] [i_0] [i_0])));
            arr_10 [i_0] [i_0] = 126;
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_0] = ((((11778 ? var_10 : (arr_11 [i_3 - 2] [i_3 - 3] [i_0]))) | (arr_1 [i_0] [i_0])));
            var_16 = (arr_12 [i_0]);
        }
        var_17 = (arr_9 [i_0]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_18 = (max((min((((arr_8 [i_4]) ? (arr_7 [i_4]) : (arr_1 [i_4] [i_4]))), ((-(arr_11 [i_4] [i_4] [i_4]))))), (min((arr_3 [i_4]), (((arr_3 [i_4]) ? -764917083 : (arr_1 [i_4] [i_4])))))));
        var_19 = ((((((arr_4 [i_4] [i_4] [i_4]) | (((arr_2 [i_4]) ? (arr_15 [i_4]) : (arr_8 [i_4])))))) ? (((20865 ? (arr_0 [i_4]) : (arr_2 [i_4])))) : ((((arr_3 [i_4]) ? (arr_14 [i_4]) : (arr_3 [i_4]))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_25 [i_4] = (arr_17 [i_4] [i_5] [i_5]);
                        arr_26 [i_4] = (((var_0 == var_10) ? ((min(((-4231769949517974000 / (arr_7 [i_6]))), ((((arr_3 [i_7 - 1]) - var_7)))))) : (max((((arr_2 [i_4]) * (arr_11 [i_4] [i_4] [i_4]))), (arr_21 [i_4] [i_4])))));
                        arr_27 [i_4] [i_4] [i_4] [i_4] = (max((((-20866 & var_8) ? (max(-119, (arr_23 [i_4] [i_5] [i_6] [i_6] [i_7 + 1] [i_7 + 1]))) : (arr_20 [i_4] [i_4] [i_4] [i_7 - 2]))), (arr_3 [i_4])));
                        var_20 = (arr_1 [i_4] [i_4]);
                    }
                }
            }
        }
    }
    var_21 = -36;
    var_22 = 2698549939;
    #pragma endscop
}
