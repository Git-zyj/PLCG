/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_0] [i_1] = (((((((max((arr_4 [i_2] [i_1] [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_2] [i_2])))) ? (min((min(-27433, (arr_5 [i_1] [i_1] [i_2]))), ((0 ? (arr_2 [i_0] [i_1]) : 21528)))) : (arr_6 [i_0] [i_1] [i_2])));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_10 = ((min(((((arr_4 [i_0] [i_1] [i_2] [i_1]) ? (arr_1 [i_1] [i_2]) : (arr_1 [i_2] [i_1])))), ((11666706590497171977 ? -8745394161770261321 : (arr_1 [i_2] [19]))))));
                        var_11 &= (arr_6 [i_3] [i_2] [i_0]);

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_12 = (((arr_8 [23] [i_1] [i_2] [i_1] [i_2] [i_4]) ? -8768195907303514253 : ((((!(arr_10 [i_4] [i_4] [i_3 + 1] [1] [i_0] [i_1] [i_0])))))));
                            var_13 = (min(var_7, (arr_5 [i_1] [i_1] [i_1])));
                        }
                        var_14 = (arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]);
                    }
                    var_15 = var_9;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_16 -= (((((((((arr_13 [i_1] [i_1] [i_5] [i_0]) ? (arr_14 [1] [20] [i_0]) : var_5))) ? var_3 : ((max(1, -20676)))))) ? 306500002 : 1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 &= 952052869;
                                var_18 *= (arr_12 [i_0] [i_5] [i_7]);
                            }
                        }
                    }
                    var_19 ^= (max((((arr_12 [i_0] [i_1] [i_5]) ? (arr_12 [i_0] [i_0] [i_0]) : (arr_12 [i_5] [i_5] [i_5]))), ((~(arr_12 [i_0] [i_1] [i_5])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_20 = (((arr_5 [i_1] [i_1] [i_5]) ? (arr_5 [i_1] [i_1] [i_5]) : (((((var_6 ? var_5 : var_7))) ? (!344740401) : (arr_8 [20] [i_1] [i_5] [i_8] [i_9] [i_9])))));
                                var_21 = (max(var_21, ((max(0, 2568299003)))));
                            }
                        }
                    }
                }
                var_22 = (max((((arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [21]) ? (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))), var_7));
                var_23 = (((arr_2 [i_1] [i_1]) ? ((((min(var_5, 61))) ? (((arr_2 [i_0] [13]) ? -4330 : (arr_5 [i_1] [i_1] [12]))) : ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) ? 103 : var_3))))) : (((+(((arr_3 [i_0]) ? 75 : 175)))))));
            }
        }
    }
    var_24 &= (min((max(((6052043351131129551 ? -12091 : 26946)), (min(var_3, var_5)))), (!var_0)));
    var_25 = ((-((var_7 ? var_4 : -0))));
    #pragma endscop
}
