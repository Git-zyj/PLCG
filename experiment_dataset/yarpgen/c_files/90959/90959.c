/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((var_6 - var_0), (~17))) & ((var_0 + (min(var_12, var_4)))));
    var_15 = 1266145932;
    var_16 = (var_12 ^ var_9);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [15] = max(((((2173074606 >= 3028821358) >= (4294967295 & 3892248007)))), var_5);
        var_17 &= 3028821337;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                var_18 = var_11;
                var_19 = var_0;
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 += var_10;
                arr_13 [i_3] [i_1] [i_0] = min((min(3, 2997309681)), 939524096);
                arr_14 [i_0] [i_1] [i_1] [i_1] = ((((min(var_11, 939524108)) | (~var_13))) & ((~(min(var_8, var_7)))));
            }
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_1] = (((min(var_9, (max(var_12, var_0)))) < (!-var_6)));
                            var_21 -= (((min((var_11 || var_13), (~3028821337))) > (max(955298882, var_5))));
                        }
                    }
                }
            }
            var_22 += max(var_11, var_7);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_25 [11] [i_7] = ((~8192) ^ 4294967279);

            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_23 += var_3;
                arr_29 [i_0] = var_0;
                var_24 = (var_0 >= var_10);
                var_25 = (1 / var_7);
            }
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    {
                        var_26 += ((min(-4294959103, -var_9)) >> (986566312 - 986566290));
                        arr_37 [i_9] [i_10] [i_9] [i_9] = max(((((!var_6) || (!var_7)))), (((min(4294967295, 0)) << (var_9 - 2748216052))));
                    }
                }
            }
            var_27 = var_6;
            var_28 = min(((((max(1297657613, 4294967295)) < (576289629 | var_13)))), 1941644045);
        }
        arr_38 [i_0] = max(1266145929, 0);
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        arr_41 [i_12] [i_12] |= ((!((min((var_12 & var_0), var_4)))));
        arr_42 [i_12] [i_12] = -var_9;
    }
    #pragma endscop
}
