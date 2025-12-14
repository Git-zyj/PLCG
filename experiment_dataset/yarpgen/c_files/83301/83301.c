/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (((max(((var_8 ? (arr_5 [i_2] [2]) : 0)), (((arr_2 [i_0]) ? (arr_5 [i_0] [i_4]) : 23)))) * (((arr_0 [i_1]) ^ (arr_14 [i_0])))));
                                var_16 = (190 >> var_1);
                            }
                        }
                    }
                    var_17 = ((var_12 >= ((-var_6 ? ((min(var_4, var_5))) : (((arr_0 [24]) ? var_0 : (arr_5 [i_0] [i_0])))))));
                    var_18 = (min(var_18, var_12));
                    arr_17 [3] [i_1] [i_1] [i_1] = var_0;
                    var_19 = (((((arr_10 [19] [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [14] [i_0] [i_1]) : (arr_10 [22] [20] [i_1] [i_1]))) << ((((72 ? var_10 : (var_9 == 55))) - 151))));
                }
            }
        }
    }
    var_20 = ((var_12 ^ (!var_11)));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            {
                var_21 = ((((((arr_9 [i_6 + 2]) && (arr_9 [1])))) >= ((((arr_9 [i_5 - 1]) >= (arr_9 [14]))))));
                arr_24 [i_5] = (max((((arr_7 [i_5 - 1]) ? (arr_2 [i_6 + 2]) : var_5)), ((max((arr_7 [i_5 + 1]), var_10)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_22 = (!(((var_7 ? (arr_7 [i_7]) : 59))));
                                arr_31 [4] [5] [i_5] [i_5] [5] [i_5] = (!((!(arr_30 [i_5] [1] [1] [i_9 + 3] [i_9 + 3]))));
                            }
                        }
                    }
                }
                var_23 ^= min(var_10, ((((!(arr_16 [8]))) ? (arr_12 [i_5 + 1] [i_5] [i_5]) : (((var_6 << (65 - 48)))))));
            }
        }
    }
    #pragma endscop
}
