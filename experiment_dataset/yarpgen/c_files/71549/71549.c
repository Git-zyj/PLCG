/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(11, 29205));
    var_15 -= ((((((var_12 % var_10) ? ((min(var_8, var_12))) : ((var_5 ? var_0 : var_5))))) || ((max(var_12, ((var_10 ? var_2 : var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_6 [i_0] [i_0] [1] [i_2 - 1]) ? (arr_1 [i_0]) : (arr_4 [i_1]))))) ? 1072693248 : (arr_5 [i_1]));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_17 -= ((((((arr_3 [i_3] [i_3]) / (arr_0 [i_2] [i_3 + 3])))) ^ (((arr_4 [i_1]) ? (arr_6 [i_0] [4] [4] [i_3 + 3]) : (arr_6 [i_3] [0] [i_2] [i_2])))));
                        var_18 -= ((((((arr_9 [4] [4] [i_3]) | (arr_3 [i_1] [i_1])))) != (((arr_5 [i_3]) ? (arr_0 [i_0] [0]) : (arr_7 [i_0] [i_0] [i_0] [i_3 + 3])))));
                        var_19 = (((arr_6 [i_2 + 4] [i_0] [i_2 + 4] [i_3 + 1]) || (arr_4 [i_3 - 1])));
                        arr_10 [i_0] = (arr_9 [i_0] [i_0] [i_2 + 4]);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_20 = (max(var_20, ((((min((min(1133375986850536356, 0)), 36324)) >= (arr_12 [i_1] [i_1] [i_1] [i_4]))))));
                        arr_13 [i_0] [i_1] [i_0] = (((((((max((arr_1 [i_0]), (arr_8 [i_0] [9] [i_0] [i_4] [9])))) ? (arr_2 [i_1] [i_2 + 1] [i_4]) : ((((arr_1 [i_0]) ? (arr_5 [i_4]) : (arr_6 [i_0] [i_0] [i_2] [i_4]))))))) ? ((((max((arr_9 [i_0] [i_2] [i_4]), (arr_11 [i_0])))) ? (arr_8 [i_0] [i_4] [i_2 + 4] [i_2 + 4] [i_0]) : (arr_1 [i_0]))) : (((((((arr_6 [i_2 + 2] [i_0] [i_0] [i_0]) ? (arr_6 [6] [i_0] [i_2 + 1] [i_2]) : (arr_5 [i_4])))) && ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_11 [15])))))))));
                        var_21 -= max(((min((((arr_3 [i_0] [i_1]) ? (arr_5 [16]) : (arr_12 [i_4] [i_1] [i_1] [i_4]))), (arr_12 [i_0] [i_0] [i_1] [i_4])))), (((((175690487 ? 11 : 4110192689))) ? (arr_5 [i_4]) : (((arr_6 [i_4] [i_4] [i_4] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_0 [i_1] [i_4]))))));
                    }
                    arr_14 [i_0] [i_1] [i_2 + 1] = (arr_12 [i_0] [16] [16] [i_0]);
                    arr_15 [i_0] [i_1] [i_1] [i_0] = (((((((min((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_1] [i_1] [i_0] [i_2 + 4])))) ? (arr_8 [i_0] [i_2 + 1] [i_2 + 3] [i_2 + 3] [i_2]) : (((arr_0 [2] [14]) ? (arr_12 [i_0] [i_1] [i_1] [i_0]) : (arr_0 [i_1] [i_1])))))) * (min(((min((arr_9 [i_0] [i_1] [i_1]), (arr_12 [i_0] [i_0] [2] [i_0])))), ((3983993035660747111 ? 1151741459014561745 : -6123373063940917870))))));
                    arr_16 [i_0] [i_0] [i_1] = ((((min((arr_6 [i_2] [i_0] [i_2] [i_0]), (arr_3 [i_1] [i_2]))) * (arr_9 [i_0] [i_0] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
