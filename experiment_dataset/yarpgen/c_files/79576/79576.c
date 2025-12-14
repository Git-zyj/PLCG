/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 &= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_21 = (max(var_21, ((((arr_7 [i_0] [i_1] [i_1]) ? ((((~var_17) & (arr_7 [i_2] [i_2 + 1] [i_2])))) : (min(27816, 10515765638198596494)))))));
                    arr_9 [i_0] [i_0] [i_2] = (arr_5 [i_0]);
                    var_22 = (max(var_22, (((var_5 & (((min(6281869686102742755, 77)))))))));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_23 ^= (min((!var_1), var_11));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_24 = ((((-6281869686102742755 & (arr_13 [i_3 + 1] [i_0] [i_3 + 1]))) & 2319508827));
                                var_25 = (arr_10 [i_0] [i_1] [i_4]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_19 [i_0] [i_1] = (~27816);
                    var_26 = (arr_5 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 13;i_9 += 1)
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9 - 1] = ((~(arr_27 [i_0] [i_0] [i_8 - 2] [i_9 - 1] [i_0])));
                                var_27 = 37747;
                            }
                            var_28 -= var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
