/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(max(-6098203036255012804, (max(8642930178948517016, 17569616750116495016))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = max(((~(arr_8 [i_0] [4] [i_3]))), (((((var_10 ? var_8 : var_0)) | var_5))));
                        arr_14 [i_0] [i_1] [i_2] [1] = ((+((((arr_8 [i_3] [i_0] [i_0]) > ((max((arr_11 [i_0] [i_0] [i_2] [i_3]), -6098203036255012804))))))));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_20 [i_4] = ((~(arr_16 [i_5] [i_4] [i_0])));
                    var_14 = 4545513471172686458;
                    var_15 += -6098203036255012804;
                }
            }
        }
        arr_21 [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) == 148))) + ((((arr_6 [i_0]) >= -7)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_24 [i_6] = (arr_22 [i_6]);
        arr_25 [i_6] = ((-((((min(148, 113))) ? (!7) : 148))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_30 [i_7] [i_7] = 12406675070917845477;
        arr_31 [i_7] [i_7] = ((194 << (13992209011675260030 - 13992209011675260021)));
        var_16 += var_3;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_36 [i_8] = (max((((-6 / 107) / ((var_0 ? 255 : var_7)))), (arr_32 [7] [i_8])));
        arr_37 [i_8] = -var_4;
        var_17 *= (arr_35 [i_8]);
        var_18 += ((-((max((arr_34 [1] [i_8]), (max((arr_32 [i_8] [i_8]), (arr_35 [5]))))))));
        var_19 = (max((((144 ? 23 : 148))), var_6));
    }
    var_20 = var_2;
    #pragma endscop
}
