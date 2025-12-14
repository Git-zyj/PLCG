/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 += (((((-18533 + ((min(1, 69)))))) ? (max((max(9415052521814416326, 9415052521814416326)), var_0)) : (((var_6 ? (arr_13 [i_4] [i_3 + 3] [i_1] [i_1] [i_1 - 1] [i_1] [i_0]) : (max(5970, (arr_9 [i_0] [i_0]))))))));
                                var_15 = (max(var_15, ((((((!(!9031691551895135290)))) < ((((arr_4 [i_1] [i_2] [i_4 - 2]) < (arr_4 [i_0] [i_0] [i_0])))))))));
                                var_16 = ((max(9415052521814416326, (arr_5 [i_4 - 2] [i_3 - 1] [i_1 + 1]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = (((max(9415052521814416349, (!5970))) ^ ((((arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4]) == 9415052521814416334)))));
                                var_17 = (9415052521814416310 < 415067064);
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = min(((9031691551895135266 ? 6293 : 126)), (!59236));
            }
        }
    }
    var_18 = max(32640, var_3);
    #pragma endscop
}
