/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (~(max((32 > var_7), ((var_9 ? (arr_4 [10] [10] [i_0]) : (arr_0 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_17 = (i_0 % 2 == 0) ? ((((((arr_4 [i_3] [i_3 + 4] [i_0]) - -1804301428)) << ((max(((!(arr_1 [1] [i_1]))), ((!(arr_1 [i_0] [i_0]))))))))) : ((((((((arr_4 [i_3] [i_3 + 4] [i_0]) - -1804301428)) + 9223372036854775807)) << ((max(((!(arr_1 [1] [i_1]))), ((!(arr_1 [i_0] [i_0])))))))));
                            arr_13 [i_3 + 2] [i_0] [i_2] [0] [i_0] [i_0] = ((((-((var_5 % (arr_7 [i_0] [5] [i_2])))))) ? (arr_9 [i_3 + 3] [i_3 + 3] [i_2] [9]) : (max(((max((arr_7 [3] [3] [i_0]), 41))), ((16785 << (arr_3 [i_0]))))));
                            var_18 = (max(((((arr_2 [i_0]) ? (max((arr_9 [i_0] [i_1] [i_0] [i_3]), (-2147483647 - 1))) : ((((arr_11 [i_0] [i_0]) == var_10)))))), (((((max((arr_8 [i_0] [i_0]), 48747)))) % ((-5443978889536676084 ? var_6 : 48757))))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (((((arr_7 [i_0] [i_0] [i_1]) ? (arr_7 [i_0] [i_0] [i_1]) : (arr_10 [i_0] [i_0] [i_1]))) & (arr_7 [i_1] [i_0] [i_0])));
                arr_15 [i_0] [i_1] [i_0] = ((((arr_10 [i_0] [i_0] [i_1]) ? (arr_11 [i_0] [i_0]) : ((((arr_5 [i_0]) || (arr_2 [i_0])))))));
            }
        }
    }
    var_19 |= var_1;
    #pragma endscop
}
