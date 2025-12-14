/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(var_0, (~-6)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = (((min((arr_0 [i_0 + 2] [2]), (((arr_1 [i_0]) ? (arr_0 [i_0 - 2] [i_0 + 1]) : var_4)))) + (arr_1 [i_0 + 1])));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_2] [i_3] [i_2] = min((min((!72057594037927935), (2147483647 + 446053283))), (((((min(-1, (arr_9 [i_3])))) & (max((arr_6 [i_1] [i_2] [i_3 + 1]), var_5))))));
                        arr_15 [i_4] [i_3] [i_3] [i_2] [i_3] [i_1] = var_12;
                        arr_16 [i_3] [1] [i_3 + 4] [1] = ((!(!1073741823)));
                        arr_17 [i_3] [i_3] [i_1] [i_3] = ((((1073741823 - ((-(arr_13 [i_1] [i_2] [i_2] [i_3 + 2] [19] [i_4]))))) + (max(3221225472, (-2147483647 - 1)))));
                    }
                }
            }
        }
        arr_18 [i_1] [i_1] |= (arr_10 [i_1] [i_1] [i_1] [i_1]);
        var_20 = (max(var_20, ((((((268435392 ? (arr_9 [i_1]) : (min(var_7, 984147523))))) ? ((((((-72057594037927935 ^ (arr_9 [i_1])))) ? (((arr_10 [i_1] [i_1] [1] [i_1]) ? -19 : var_1)) : ((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_3 [i_1]) : 255)))))) : (arr_5 [i_1] [19]))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = 1;
        arr_22 [i_5] = (arr_20 [i_5]);
        var_21 = (min((arr_11 [i_5] [i_5] [i_5]), (arr_8 [i_5])));
        var_22 = (((65535 ? (arr_3 [i_5]) : (arr_8 [i_5]))));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    var_23 = (-32767 - 1);
                    arr_31 [i_6 + 2] [i_6] [i_6 + 2] = (min((min((arr_27 [i_6 + 3] [i_6] [i_8 + 2]), 65535)), (((arr_27 [i_6 + 4] [i_6] [i_6]) ? 0 : (arr_27 [i_6 + 1] [i_6] [i_8 + 1])))));
                }
            }
        }
        var_24 = (min(var_24, (((!(-2147483647 - 1))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                var_25 = 52595;
                arr_38 [i_9] [i_9] = var_6;
                arr_39 [i_9] [i_9] = ((((max(var_5, (~-1)))) ? ((((((var_17 ? var_6 : var_11))) ? (!18) : (((arr_37 [i_9]) ^ -1472935158789506975))))) : 926660625083458623));
            }
        }
    }
    #pragma endscop
}
