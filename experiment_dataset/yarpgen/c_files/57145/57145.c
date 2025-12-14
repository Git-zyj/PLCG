/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = max(-119, 0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_1] [i_4] = (10579 == -1817190128);
                                arr_12 [i_4] [19] [i_2] [i_3] [i_4] [i_4] = (arr_10 [i_4] [15] [i_4] [i_1] [i_0]);
                            }
                        }
                    }
                }
                var_19 ^= ((((min(114, 94))) ? ((((max(var_2, 8570))) ? ((min(-2, 27085))) : (5210770099194117022 | var_1))) : ((min(-16, var_4)))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_15 [0] [0] [i_0] [i_0] = (max(-10583, -1692496256));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_20 = min((~0), (((!(((-111 ? 2782594195 : (arr_0 [i_1]))))))));
                                var_21 = (arr_17 [i_5] [i_7]);
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_23 [i_0] [i_0] = ((min(59444, -123)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_30 [i_9] [2] [i_9] [i_10] = -var_13;
                                var_22 = 17105;
                            }
                        }
                    }
                    var_23 = (((((14 ? 164 : ((var_13 ? 10583 : 2970940079018997113))))) ? (79 + 9490451515230871478) : 214));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_39 [i_11] [i_1] [i_11] [22] [i_1] = (arr_1 [i_0]);
                                arr_40 [i_0] [i_11] [i_0] [i_0] [i_0] [8] [i_0] = ((-((((((arr_1 [i_11]) ? (arr_2 [i_12] [i_11]) : var_12))) ? ((max((arr_4 [6]), (arr_1 [i_12])))) : ((26103 ? (arr_20 [i_8] [7] [i_12]) : (arr_7 [i_0])))))));
                                arr_41 [i_0] [i_11] [i_8] = (~33554431);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                var_24 = (max((arr_14 [i_13] [i_13] [i_13] [14]), (-3860 % 127)));
                var_25 = (min(var_25, var_16));
                arr_48 [i_13] [i_14] = (arr_13 [i_13]);
                arr_49 [i_13] &= (!845072097);
                arr_50 [i_13] = -1817190128;
            }
        }
    }
    var_26 = 1565304498;
    #pragma endscop
}
