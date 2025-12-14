/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_14 ? var_10 : var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1] &= ((((min((arr_4 [9] [i_1]), ((max((arr_3 [i_0] [1] [i_2 - 1]), (arr_8 [i_0] [i_1] [i_0]))))))) ? ((((((arr_8 [i_0] [i_0] [i_0]) ? 1 : (arr_5 [i_0] [i_1] [i_2])))) ? (arr_1 [0]) : (((arr_7 [i_0] [i_1] [i_2]) * var_0)))) : ((1 ? 84 : 63746))));
                    var_20 = (min(var_20, (((((min(((min(var_6, (arr_2 [i_2] [i_1])))), (arr_8 [i_0] [i_1] [11])))) << (((max((var_14 * var_11), (arr_6 [i_0] [i_2 + 1] [i_2 - 1] [i_0]))) - 7081037987924838437)))))));
                }
            }
        }
    }
    var_21 = ((!((max((1 != 4294967295), var_2)))));

    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_22 = (((((var_9 ? (arr_11 [i_3]) : (arr_11 [i_3])))) ? (((4294967295 <= (arr_11 [i_3])))) : 111));
        arr_12 [i_3] |= (min((((((arr_10 [i_3] [i_3]) != (arr_11 [i_3]))) ? (((max((arr_11 [i_3]), (arr_10 [i_3] [i_3]))))) : (min(1275596866, (arr_11 [i_3]))))), ((max(1, ((1 >> (48 - 36))))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (((arr_14 [i_4] [i_4]) + (((min(1, 194))))));
        var_23 *= ((-(((!(arr_10 [i_4] [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_24 = (((min((((arr_14 [i_5] [i_5]) ? 8119739289541179108 : 1)), 8)) & ((((((((arr_11 [i_5]) ? (arr_11 [i_5]) : (arr_14 [i_5] [i_5])))) || ((max((arr_17 [i_5]), var_7)))))))));
        var_25 = (min(var_25, (((((((arr_10 [i_5] [i_5]) ? (arr_10 [i_5] [i_5]) : (arr_10 [i_5] [i_5])))) ? (arr_10 [i_5] [i_5]) : ((max((arr_10 [i_5] [i_5]), (arr_10 [i_5] [i_5])))))))));
        var_26 |= ((((((var_11 ? (arr_11 [i_5]) : 1))) ? (var_7 + 43020) : (max(1, (arr_13 [i_5]))))));
        var_27 = (((((max(var_1, var_9)))) ? ((11581 ? 1 : 1)) : var_4));
    }
    #pragma endscop
}
