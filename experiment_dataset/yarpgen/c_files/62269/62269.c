/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_1;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = (((((min(-6, -747093144))) ? (((-747093144 ? var_11 : -747093141))) : 9802359155135778643)) | (((747093130 << (8644384918573772956 - 8644384918573772955)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_20 = -1;
                    var_21 = ((125 * (!-747093136)));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_15 [i_0 - 2] [i_2] = 128;
                    arr_16 [i_0] [i_0] [i_2] [i_4 + 1] [8] [i_0] = (((((~(arr_11 [i_0] [3] [i_2] [0] [0] [i_0])))) & (3921730552 << 0)));
                    var_22 += var_11;
                    var_23 = var_4;
                }
                arr_17 [i_0] [i_1] [i_2] = (((((~(arr_5 [i_0] [i_1] [i_2] [i_2])))) ? ((min(var_2, 747093137))) : (((((~(arr_7 [i_2] [i_0])))) ? (((min(0, 14)))) : (max(8644384918573772956, 7832032834091259729))))));
                arr_18 [i_0] [i_2] [i_1] [i_2] = (max((arr_5 [i_0] [i_1] [i_2] [i_2]), -3426383084334920931));
            }
            arr_19 [i_0 - 1] [i_1] = ((!-747093138) ? (((-(!747093148)))) : 7245687547359362524);
        }
        var_24 = (max(var_24, ((min(747093148, 1)))));
        var_25 = 6604572854926488846;
    }
    #pragma endscop
}
