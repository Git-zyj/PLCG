/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(((1073741312 & (-2147483647 - 1))), ((28862 ? 16368 : var_9)))) < ((-var_6 - (var_5 / 49177)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (((63706 - 65513) && (((((36639 * (arr_3 [i_0] [i_0]))) / (((arr_0 [i_0]) ? (arr_3 [i_0] [19]) : (arr_1 [5]))))))));
        arr_4 [i_0] = (38492 && -1331654729);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = (1123678515 ? 2066080613 : 1504515104);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] = (arr_7 [i_4]);
                        arr_16 [i_1] [i_1] [i_2] [i_1] [9] [i_4] = ((86455602 << (!632)));
                        var_14 ^= ((((-(arr_5 [i_2] [i_4]))) % (((((arr_5 [i_1] [i_2]) - var_6))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_15 = (min(var_15, (((((((min(60309, (arr_25 [i_5] [i_6] [i_5]))) - (((arr_20 [i_5] [i_5]) ? (arr_19 [i_5] [i_5]) : 536870912))))) ? ((min(var_1, 65518))) : (((((arr_23 [i_5]) / (arr_25 [i_5] [i_5] [i_5]))) / (arr_17 [i_5] [i_7]))))))));
                    var_16 = (arr_21 [i_7] [i_7] [i_7]);
                    var_17 = (((((!(arr_24 [i_5] [i_6] [i_5])))) == ((((var_10 + (arr_17 [i_5] [i_5])))))));
                }
            }
        }
    }
    var_18 = ((var_2 || ((max(var_0, (max(-913512215, (-2147483647 - 1))))))));
    #pragma endscop
}
