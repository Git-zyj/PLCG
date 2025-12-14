/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (!var_10);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_3] [4] [i_0] [i_3] = min(63702, (((~-1209552871) & (~1209552870))));
                                arr_13 [14] [i_1] [i_1] [11] [i_1] [i_3] [14] = (arr_7 [i_0] [i_3] [i_3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = 329693463;
    var_14 = (~var_8);

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_15 = var_8;
        var_16 = (-((min(32, -34))));
        arr_16 [i_5] [i_5] = var_3;
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_19 [i_6] = (((-var_8 ^ var_9) ^ (max(var_0, (var_11 ^ var_4)))));
        var_17 ^= (-16 && -329693479);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 20;i_8 += 1)
            {
                {
                    var_18 = ((!((((((~var_2) + 2147483647)) >> (329693474 - 329693466))))));

                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_19 ^= ((min((arr_9 [i_6]), (arr_27 [i_6 + 1] [i_6] [14] [i_9]))));
                        arr_29 [i_7] [i_9] [i_9 - 1] = -var_3;
                        var_20 = ((((max((max(65521, 9223372036854775806)), ((max(8392, var_3)))))) ? (arr_23 [i_6] [i_6] [i_6] [i_9 + 2]) : var_6));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_21 = (arr_21 [i_8] [i_8]);
                        var_22 += (-15 == 329693474);
                        var_23 = (min(var_23, (((var_1 ? var_0 : var_6)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            arr_38 [i_6] [i_6] [i_8] [i_7 + 1] [i_12] [i_11] = ((~(~4294967270)));
                            arr_39 [i_6] [i_7] [i_8] [i_11] [1] [i_11] = (!var_9);
                            var_24 ^= arr_25 [i_8];
                            var_25 *= var_5;
                        }
                        arr_40 [i_6] [i_6] [1] [1] = -4655350111812703793;
                    }
                    var_26 = (((((max(var_7, var_2))) != var_7)));

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_27 = (29 != 14881920686694611926);
                        arr_45 [5] [5] [15] [11] [i_13] [15] = (min((!329693485), (((max(24, var_5)) << ((((((var_7 ? var_5 : var_5)) + 248577702)) - 13))))));
                        arr_46 [i_6 - 1] [i_6 - 1] = (min(((((arr_23 [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 2]) != var_9))), (max(2147483633, 17280100674967658684))));
                        arr_47 [6] [i_13] = ((-39 ? 74 : 65521));
                        var_28 = (~8);
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_52 [i_14] [15] &= (max(0, (-329693473 - 10287)));
        var_29 = (max(var_29, var_4));
    }
    #pragma endscop
}
