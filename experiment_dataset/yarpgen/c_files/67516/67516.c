/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_11 = (min(var_4, (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))));
        arr_4 [0] = (min((max((min((arr_0 [i_0]), -2025932401)), (arr_2 [i_0]))), 3840));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((~((~(~-112))))))));

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_13 = (max(var_13, var_2));
                            arr_19 [i_1] [i_2] [i_4] [i_4] [i_5] = var_1;
                            var_14 ^= ((((((arr_12 [i_1] [i_2 + 1] [i_3] [i_2 + 1]) ? (arr_12 [i_5 - 1] [i_2 + 3] [i_3] [i_4]) : (arr_12 [i_1] [i_1] [i_3] [i_4])))) ? ((-(((arr_0 [i_4]) ? var_7 : var_3)))) : ((((arr_1 [i_2 - 1] [i_4 - 1]) ? (arr_1 [i_2 + 2] [i_4 + 1]) : var_5)))));
                            var_15 = ((((((arr_16 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4] [i_2 - 3]) | 3309443726))) && (arr_15 [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_2 - 1])));
                        }
                    }
                }
            }
            var_16 = (min((min(111, (((arr_6 [i_1]) | 20614)))), (((arr_1 [i_2 + 3] [i_2]) ? 64981 : (var_1 >= var_5)))));
        }
        var_17 = ((-23 ? (((((arr_2 [i_1]) % 7243008005698960039)) >> (var_5 + 77))) : ((((!(arr_6 [i_1])))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_18 = -6;
        arr_22 [6] = (((((var_0 - 19995) ? 65535 : (max((-32767 - 1), var_3)))) + (((~(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_19 = (max(var_19, ((min(var_5, ((var_1 ? (!var_10) : var_7)))))));

    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        var_20 -= ((var_8 ? (max((max(2147483647, (arr_25 [8]))), ((((arr_24 [7]) | 23))))) : (arr_24 [i_7 + 2])));
        var_21 ^= ((102 ? (985523569 | 111) : 21));
    }
    #pragma endscop
}
