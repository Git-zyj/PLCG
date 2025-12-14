/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((((min((max(var_14, 11236840332794494399)), -26742))) ? ((((max(var_0, var_10))) ? var_2 : (((min(44, var_2)))))) : ((((max(var_10, 7209903740915057214))) ? (arr_1 [i_0 + 1]) : var_8))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = (((min(var_0, (arr_10 [i_0] [i_1 - 2] [i_2 - 1] [i_0] [i_4 + 1] [i_2 - 1])))) ? -1 : (((arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_2] [i_3 - 3]) ? (arr_10 [i_0] [i_1 - 1] [9] [i_2 - 1] [i_4] [i_1 - 1]) : (arr_10 [i_0 + 1] [i_1 - 1] [6] [i_3] [i_4 - 1] [5]))));
                                var_17 = (~-1274994816);
                                var_18 = (min(var_18, ((max((max((-6512228846854518004 + var_1), (min(var_4, var_9)))), (((var_11 && (((var_8 ? var_12 : 32303)))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_21 [5] [i_5] = (arr_6 [i_0] [8] [i_6]);
                            var_19 = ((!(arr_16 [i_5])));
                            var_20 = var_5;
                            var_21 = (((((65535 ? (arr_5 [i_0] [i_0]) : var_9))) ? ((var_10 ? (arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1]) : (var_6 / 34627159))) : var_0));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_22 = (!11010897251305478512);
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_23 = var_8;
                                var_24 = (((~((var_4 ? 564618364 : var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
