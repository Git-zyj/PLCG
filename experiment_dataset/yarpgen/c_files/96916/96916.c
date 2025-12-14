/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] |= (min((max((((arr_0 [i_0] [i_1 - 1]) ? 334873890 : var_1)), var_2)), ((((arr_3 [i_0]) ? ((max(1, 1))) : ((1 & (arr_3 [i_0]))))))));
                arr_5 [i_1] [i_0 + 1] &= (((((~(arr_0 [i_1 - 2] [i_1])))) ? (max(((1 ? -26194 : 36028796884746240)), 779)) : (((min(2, -82))))));
                var_12 = (arr_3 [i_0 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 = max(1, -789);
                var_14 = (min(var_14, ((max(-757, (arr_8 [i_2]))))));
                var_15 = (arr_6 [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_16 = 1152921435887370240;
                            var_17 ^= (((30523 != 15804) > (arr_6 [i_2] [i_2])));
                            arr_15 [i_2] [2] [i_4] [i_5] [i_3] = (((arr_1 [i_4 + 1]) == ((216 ? (arr_1 [i_4 + 3]) : 588653765))));
                            var_18 = (((arr_3 [i_4 + 2]) ? (max(81, (arr_3 [i_4 + 3]))) : (((arr_3 [i_4 + 1]) ? (arr_3 [i_4 + 1]) : (arr_3 [i_4 - 1])))));
                            var_19 = (min(var_19, (((((var_5 < (788 * -2))) ? ((((((arr_7 [i_5]) ? (arr_10 [i_2] [i_3] [i_4 + 2] [i_5]) : 34999))) ? (arr_14 [i_4 + 2] [i_2]) : -1)) : (arr_8 [i_4 + 4]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
