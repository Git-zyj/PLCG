/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_12 = (((((arr_1 [i_0 + 1]) == (arr_1 [i_0 - 1]))) ? (!1) : ((var_6 * ((-(arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (min(var_13, var_8));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_1] = 17246988244004719719;
                var_14 &= ((((var_9 == (arr_6 [i_0] [i_0] [13])))));
                var_15 = (arr_3 [i_0] [i_1] [i_1]);
                var_16 = ((-3013602130543215968 ? (-1912328582168792067 / -3013602130543215953) : -1697315484));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_17 = (((arr_1 [i_0]) ? (arr_5 [i_0] [i_0] [i_3]) : var_4));
                var_18 = ((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1]));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_14 [i_0] [i_0] [i_1] [i_0] = (arr_3 [i_0] [i_1] [i_1]);
                arr_15 [i_0] [i_1] [i_4] = ((~(arr_11 [i_0 - 1] [i_1] [i_0 + 1])));
            }
            var_19 += arr_11 [i_0] [10] [i_0];
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_20 = (((((arr_4 [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : var_7)) << (((((-7307215242547652550 ? var_5 : (arr_19 [i_1])))) - 16722372373763769616))));
                        var_21 = ((-3013602130543215968 ? 3013602130543215967 : 3013602130543215984));
                        var_22 ^= arr_7 [10] [10];
                        arr_21 [i_1] [i_1] = (max((((arr_7 [i_0 + 1] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_17 [i_1] [i_1]))), (((((max(-1536700942, 3875444651270425536))) ? 1 : ((min((arr_17 [i_0] [i_5]), var_7))))))));
                    }
                }
            }
        }
        var_23 += (~0);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_24 = ((((9912193058119462161 >= (arr_6 [i_7] [i_7] [i_7]))) ? (((max((arr_4 [i_7] [i_7]), (!-617797704))))) : (arr_5 [i_7] [i_7] [i_7])));
        var_25 += (-((-(arr_24 [i_7]))));
    }
    var_26 -= var_7;
    #pragma endscop
}
