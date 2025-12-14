/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [4] [i_1] = ((65522 ? 140737488355327 : 65522));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 ^= (max(((((-127 ? 16256 : var_13)) | (var_10 >> var_1))), 16128));
                        var_17 ^= (min((((!(-1194893833314864318 > 15145)))), (min(-49, -5208772272949247583))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_18 ^= max((arr_1 [i_0] [i_0]), (((((max(var_3, 110)))) & (((arr_1 [i_4] [i_0]) & (arr_4 [i_0] [i_4] [i_4]))))));
            var_19 ^= 127;
            var_20 ^= (max((arr_12 [i_0] [i_0]), (min(var_7, (arr_12 [i_0] [i_0])))));
            arr_14 [i_4] [i_0] [i_0] = (min((((var_11 ? (~var_11) : (arr_5 [i_4] [i_4] [i_0])))), ((((min(-100, 18446744073709551615))) ? (~-672737658677183423) : var_6))));
        }
        arr_15 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_21 = (max(var_21, ((max((((-(arr_9 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0])))), ((var_15 ? (arr_2 [i_5]) : (((arr_9 [i_6] [i_6] [i_6] [i_6] [10] [i_0]) ? var_15 : var_13)))))))));
                    arr_20 [i_5] = (arr_12 [i_5] [i_0]);
                }
            }
        }
    }
    var_22 = var_0;
    var_23 ^= 2;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_24 ^= (-32767 - 1);
                    var_25 = (max(var_25, (!var_14)));
                }
            }
        }
    }
    #pragma endscop
}
