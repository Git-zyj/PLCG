/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((~262143) ? -25487 : 2376445870))) ? -25487 : (~16));
        var_19 |= (min(((~(arr_2 [i_0 + 3] [1]))), (arr_2 [i_0 - 2] [i_0 + 2])));
        var_20 *= (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_21 ^= -1942135700;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_22 ^= ((~(arr_2 [i_4 - 2] [i_4 + 2])));
                                arr_18 [i_1] [i_2] [i_3] [i_3] [i_1] [i_5] |= var_1;
                            }
                        }
                    }
                    var_23 = ((-(arr_12 [i_1])));
                }
            }
        }
        arr_19 [i_1] [i_1] = ((-(((arr_14 [i_1] [i_1] [i_1] [6] [4] [i_1]) ? -63 : (arr_7 [0])))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 7;i_8 += 1)
            {
                {
                    var_24 -= (max(((~(arr_5 [i_6]))), (((((var_18 || (arr_8 [i_8 + 3]))) || ((min(1, (arr_24 [1] [i_7] [1])))))))));
                    arr_26 [i_6] = 262143;
                    var_25 -= (((1 != (arr_4 [8]))));
                }
            }
        }
        var_26 &= (min((max(3004429317083497925, 4294705153)), 9138570099951647563));
        var_27 = 26442;
        var_28 -= (((arr_0 [i_6]) ? -9138570099951647563 : 248));
    }
    var_29 = 7;
    #pragma endscop
}
