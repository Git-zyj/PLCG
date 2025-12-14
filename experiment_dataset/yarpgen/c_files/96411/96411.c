/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((!(((var_15 ? 122 : 1844562498320549094)))))), (min(1844562498320549094, 16602181575389002521))));
    var_17 = (((max(-604, ((min(122, 117))))) << ((((min(var_14, 109))) - 103))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (((((1 | (arr_6 [i_2 + 1] [i_2 - 1] [i_1 + 1] [9])))) ? (!0) : (arr_3 [i_2] [i_0] [i_1 - 2])));
                                var_19 &= (min((arr_7 [18] [i_1] [i_2]), (((arr_7 [1] [i_1] [22]) - (arr_7 [1] [i_1] [i_2 - 1])))));
                                var_20 = (!((min((arr_8 [i_1] [i_0]), ((1 ? (arr_7 [i_0] [19] [1]) : 1))))));
                                var_21 = (((((((min((arr_6 [i_0] [i_2] [i_3] [2]), (arr_10 [i_0]))) < (min((arr_0 [i_4]), 166)))))) * (((min(1844562498320549112, 7821023628405670018)) / (arr_9 [16] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 -= (min(((max(37178, (arr_7 [2] [i_1] [i_2 + 2])))), 1));
                                var_23 = (((arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]) || (max((arr_4 [i_0] [18] [i_6]), (arr_4 [i_6] [i_2] [i_1 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
