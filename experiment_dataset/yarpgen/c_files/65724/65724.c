/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] = var_10;
                    arr_10 [15] [6] [i_2 - 2] [i_2] = (arr_4 [11] [4]);
                    var_14 -= ((1048576 ? ((max((arr_1 [i_0]), ((max(-26167638, var_7)))))) : (((((2104928556613406276 ? var_0 : (arr_3 [i_0])))) - (var_6 | 16341815517096145311)))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_15 = ((16341815517096145352 ? ((((((arr_1 [i_0]) + (arr_7 [i_0] [i_1] [i_2])))) ? var_5 : (!var_7))) : ((((((((arr_5 [13]) + 2147483647)) << (16341815517096145347 - 16341815517096145347))) + ((~(arr_13 [i_0 - 1]))))))));
                        var_16 = (max(var_1, ((((arr_0 [i_0 + 3] [i_3 + 1]) || -var_12)))));
                        var_17 = ((-13245 ? ((max(4135503863952028186, (arr_11 [i_0] [i_1] [i_2] [i_3])))) : 161));
                    }
                }
            }
        }
    }
    var_18 -= ((var_8 || ((max((var_4 ^ var_1), var_9)))));
    var_19 = ((-130 ? var_3 : var_6));
    var_20 = ((!(var_4 <= var_6)));
    var_21 -= (max(((max((4135503863952028177 % var_10), (max(65535, var_3))))), ((((47 ? 18446744073709551615 : var_7)) | 23533))));
    #pragma endscop
}
