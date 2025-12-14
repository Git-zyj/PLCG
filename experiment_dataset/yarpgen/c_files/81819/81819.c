/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (min(939819740, (arr_0 [i_0]))) : ((-(arr_0 [i_0]))));
        arr_2 [7] = (!(((((1 ? 1493829082 : 1620422656)) | (((min(1, 1))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = var_6;
        arr_6 [3] [i_1] = var_9;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (-var_3 ? var_7 : (min(((2710527942 ? 1049507817 : 1)), (arr_8 [i_2]))));
        arr_10 [i_2] = (6593541757191773236 / 1023329091);
        var_20 += (~1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    var_21 = (((!1538764376) > (3302299775 == 3562959270)));
                    var_22 ^= (((var_3 * var_16) >= (((arr_15 [12] [12]) ? (arr_14 [4] [i_2] [i_4] [i_2]) : var_15))));
                    arr_16 [i_2] [10] [i_2] [19] = ((~(~0)));
                    var_23 = (1 <= 992667521);
                }
            }
        }
        var_24 = (min((min(1, 1042221880)), (((var_4 ? var_16 : var_6)))));
    }
    var_25 = var_1;
    #pragma endscop
}
