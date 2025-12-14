/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [9] = ((((!((((arr_3 [i_0] [i_0]) ? 0 : -25589)))))) ^ ((((131071 ? var_4 : (arr_6 [i_1] [i_1]))) | ((-(arr_2 [14] [i_1]))))));
                    arr_11 [i_0] [i_1 + 1] [i_2] &= ((~((~(((arr_8 [i_0] [i_0] [i_0] [13]) - 245))))));
                    arr_12 [i_0] [i_1 - 1] [i_2] [i_2] &= (((((-(min(var_2, 131071))))) ? (min((((arr_3 [i_0] [i_2]) ? (arr_2 [i_1 - 2] [i_2]) : -110)), (((var_16 > (arr_5 [2] [i_1] [i_1])))))) : ((~((min(var_1, 157)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_18 = (((var_0 ? (arr_13 [i_3] [i_3]) : 127)) / (!var_14));
        var_19 = (((-25602 ? var_11 : var_2)));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_20 &= (((((min((arr_15 [17] [i_4]), -118))) ? (((1495253423 ? (arr_13 [i_4] [i_4]) : (arr_15 [i_4] [i_4])))) : ((var_9 ? (arr_13 [i_4] [i_4]) : var_9)))) ^ (((((131071 > (arr_15 [i_4] [i_4]))) ? (!var_3) : (((arr_13 [i_4] [i_4]) >> var_5))))));
        arr_17 [i_4] &= ((((max((var_17 / 2799713872), (((arr_13 [9] [9]) ? (arr_16 [i_4]) : 26))))) ? (max((min(var_3, 1683822337748136245)), (((1 ? var_3 : var_12))))) : ((((59084 > 184) - (!var_4))))));
        arr_18 [i_4] = (min(((((~var_13) ? ((~(arr_14 [i_4]))) : ((134201344 ? 9700 : 21))))), (max((max((arr_13 [i_4] [i_4]), 43602)), ((~(arr_13 [i_4] [i_4])))))));
        arr_19 [i_4] = (((((((~(arr_16 [7])))) ? (((min(25577, var_4)))) : (max(28269, (arr_13 [i_4] [i_4]))))) == ((((((var_7 && (arr_14 [i_4]))) || (!var_10)))))));
    }
    var_21 = (((((max((4 > var_11), (min(253, var_8)))))) > (max((var_0 - var_7), (3040779933 - 0)))));
    #pragma endscop
}
