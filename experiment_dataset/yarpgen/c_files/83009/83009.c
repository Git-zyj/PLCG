/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] [i_1] = ((((((((arr_2 [i_1]) ? var_0 : (-32767 - 1))) * ((max(0, 0)))))) ? 2471106815 : 58909));
                    arr_10 [i_2] [i_2] = 1;
                    arr_11 [i_2] [i_1] [i_2] [i_1] = (((arr_2 [i_0]) & -5));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_15 = (arr_12 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_16 = 0;
                                arr_21 [i_3] = ((((max((var_4 | 9174115570414520294), var_13))) ? (~var_5) : var_12));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_17 = (max((max(var_5, (-7403 & 476941321))), var_3));
                    var_18 = (max((((0 ? 1 : 11))), var_12));
                }

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_19 = (((((((~(arr_3 [i_7]))) ^ 187))) ? (((-1 ? 1 : 51463))) : (((((0 ? 1 : 6))) ? (((11 ? -4 : -4581))) : (max(-16540, 4294967295))))));
                        arr_31 [i_8] = (arr_28 [i_1] [i_7] [i_1] [i_0]);
                        arr_32 [i_7] [i_7] [i_1] [i_0] = arr_25 [2] [i_1];
                    }
                    arr_33 [i_7] = ((3867856904 ? var_10 : var_4));
                }
                arr_34 [i_0] [i_0] = var_3;
            }
        }
    }
    var_20 = (((var_10 != var_10) ? ((~((min(-9184, var_9))))) : ((49772 ? 13 : 0))));
    #pragma endscop
}
