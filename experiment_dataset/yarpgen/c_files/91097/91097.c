/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_7;
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (136 ? 25907 : 136);
                                var_22 = (arr_11 [1] [i_1] [i_1] [i_1] [7]);
                            }
                        }
                    }
                }
                var_23 = (((((((((arr_10 [15] [i_1]) ? 39629 : 13174789015718729844))) ? ((122 ? (arr_10 [i_1] [i_0]) : (arr_1 [i_0]))) : -var_14))) ? (max(((var_11 ? var_5 : var_12)), (((arr_6 [2] [i_1] [i_1]) & var_6)))) : ((((var_8 || (arr_12 [i_1] [i_1] [i_1] [8] [8] [i_0] [i_0]))) ? ((120 ? var_3 : (arr_6 [i_0] [i_1] [i_1]))) : ((var_8 ? (arr_9 [i_1] [i_0]) : 39613))))));
                var_24 |= ((-(((((~120) + 2147483647)) >> (((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [15] [i_1]) - 2336540628))))));

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_25 = (max(var_25, ((((min((arr_1 [i_0]), var_3))) ? var_2 : (((arr_3 [i_0] [i_1]) ? ((3875003963 ? (arr_3 [14] [i_1]) : 1)) : (((arr_3 [i_0] [5]) ? var_15 : var_8))))))));
                    var_26 = (min(var_26, (((var_8 ? (((((min(-4984316102736013276, 126)) == (arr_2 [i_1]))))) : (arr_13 [i_0] [i_1] [i_1] [i_5]))))));
                    var_27 = (max((((-((max(25907, var_2)))))), var_9));
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    var_28 = ((((((((arr_13 [i_0] [i_1] [i_6 + 1] [i_1]) % 34254))) ? (arr_8 [i_0] [i_1] [i_6 + 3]) : (((arr_5 [0] [0]) ? (arr_13 [7] [i_1] [i_6] [i_0]) : 34264)))) ^ var_10));
                    arr_17 [i_0] [i_1] [7] = (((((var_6 ? ((~(arr_6 [i_0] [14] [i_6]))) : 164))) == (((arr_13 [i_6] [i_6] [i_6] [i_6 - 1]) ? (arr_13 [i_6] [i_6] [i_6] [i_6 - 1]) : (arr_13 [i_6] [i_6] [i_6] [i_6 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
