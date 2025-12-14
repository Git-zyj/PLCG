/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_3] [i_1 + 1] [i_3] [i_1 + 1] [i_1 - 2] [i_1 + 1] = (((((max(-23375, 1)))) < -9223372036854775790));
                        var_11 = (arr_5 [i_0] [i_0] [i_0]);
                        arr_13 [i_3] = (min(((-(arr_2 [i_2 - 1]))), ((~(arr_7 [i_3 + 1] [i_2 - 1] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_12 = (max(var_12, (arr_8 [i_0] [8] [i_2 + 1])));
                        var_13 ^= (min(((((arr_16 [i_0] [4] [i_1] [5] [i_2 + 1] [4]) || ((!(arr_5 [i_1] [1] [i_1 - 1])))))), (max(var_9, (((!(arr_2 [i_0]))))))));

                        for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                        {
                            var_14 += -9223372036854775790;
                            var_15 = (((arr_17 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_2 - 2] [i_2 + 1] [i_5 + 2]) || ((max((~var_0), (arr_17 [i_2 + 1] [i_1] [i_0] [i_0] [i_5 - 1] [i_5] [i_5 + 2]))))));
                        }
                        for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] = (min(9223372036854775779, 4294967295));
                            var_16 = (max(var_16, (arr_16 [i_6 + 1] [i_4] [i_0] [i_1 - 1] [i_0] [i_0])));
                        }
                        for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                        {
                            var_17 = (arr_9 [i_7] [i_1] [i_1]);
                            arr_25 [0] [i_1] [i_1] [i_1] [i_7 + 2] [i_7] = (arr_24 [i_0] [i_7] [i_2 - 2] [i_4] [i_7]);
                        }
                        arr_26 [i_0] [i_0] [i_2 - 2] [i_4] [i_4] [i_1 - 1] = (max((max(((max(1, (arr_16 [i_0] [i_1 - 2] [0] [i_4] [i_1] [2])))), (arr_8 [i_0] [i_0] [i_0]))), ((((arr_21 [i_4] [i_2] [i_1] [i_0]) ? ((~(arr_7 [8] [i_1] [i_4]))) : (!-19))))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_18 = (-9223372036854775757 || 3595558416);
                        var_19 = ((((((arr_20 [i_1 + 1] [i_2 - 1]) & 161))) ? (((arr_20 [i_1 + 1] [i_2 - 1]) ? (arr_7 [i_1 - 1] [i_2 - 1] [i_2 - 2]) : var_4)) : (arr_20 [i_1 - 1] [i_2 - 2])));
                    }
                    var_20 = (max(var_20, (arr_6 [i_2])));
                }
            }
        }
    }
    var_21 = (((-9223372036854775746 <= var_3) >= (((var_2 + -9223372036854775789) ? (((var_1 ? 699408857 : 2016))) : ((var_8 ? 241 : var_3))))));
    var_22 &= var_6;
    var_23 = (~var_0);
    #pragma endscop
}
