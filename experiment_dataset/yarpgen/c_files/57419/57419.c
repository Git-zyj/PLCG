/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 -= (((((~(arr_5 [i_0])))) ? ((~(arr_3 [i_0]))) : (arr_3 [i_0])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 -= (~var_5);
                        var_13 = ((-((max((arr_8 [i_0] [i_3] [i_2] [i_3]), (arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                        var_14 -= ((((var_5 || 21362) && (arr_8 [i_0] [i_1] [i_2] [i_1]))) || ((max(var_6, -6687270575394941625))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_15 = ((0 ? ((((arr_5 [i_0]) > (arr_12 [i_0] [i_1] [i_1] [i_4])))) : (((!(arr_5 [i_4]))))));
                        arr_15 [i_4] = (((((0 > -24181) ? 8380 : ((min(0, 20))))) > 1));
                        var_16 -= (((114 + 4104391058307420080) ? (((0 ? var_7 : 0))) : (max((((28413 ? var_2 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? var_1 : 14342353015402131536))))));
                        var_17 -= (max(64201803553531934, ((((var_10 - var_2) ? (arr_3 [i_4]) : 42955)))));
                        var_18 = (min(var_18, (((((var_2 ? (var_9 != var_3) : (arr_8 [i_0] [i_0] [i_0] [i_4]))) << ((((var_1 ? 2724532242 : (~250))) - 2724532221)))))));
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_18 [i_5] = (arr_9 [i_0] [i_0]);
                        var_19 = (((((((arr_17 [i_5] [i_1] [i_5] [i_5] [i_5]) ? 1 : var_10)))) >= var_10));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 -= (((arr_3 [i_0]) ? (((arr_1 [i_2]) ? 0 : var_8)) : (arr_6 [i_0] [i_0] [i_2] [i_5])));
                            arr_21 [i_0] [i_5] [i_2] [i_5] [i_5] [i_6] = (((var_7 && (arr_14 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]))));
                        }
                    }
                }
            }
        }
    }
    var_21 = 45524;
    #pragma endscop
}
