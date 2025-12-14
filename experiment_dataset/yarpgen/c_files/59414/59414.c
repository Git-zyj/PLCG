/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [1] = 55;
        arr_4 [i_0] [i_0] |= (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = 55;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_14 = -55;
            var_15 = (min(var_15, -12));
            arr_12 [i_1] [i_1] = ((5091779088568678172 && ((min(13605482761485215180, 206395237561989295)))));
            var_16 = (8987341614054064182 ^ ((-(max(2339363256971470367, (arr_2 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_24 [i_4] [16] [14] [i_5] [1] = 16107380816738081264;
                            arr_25 [i_1] [i_3] [i_1] [i_5] [i_4] = var_8;
                            var_17 = (max(-5601114749289601719, (((arr_15 [i_1 + 1] [i_1 - 1]) ? (min((arr_19 [i_1] [20]), (arr_7 [1]))) : -33))));
                            var_18 = (arr_0 [i_1]);
                            var_19 ^= (!33);
                        }
                    }
                }
            }
            arr_26 [i_1 + 1] [i_1] [i_3] = min((arr_14 [i_1] [i_3] [i_1 - 1]), (((!(arr_14 [i_1] [i_3] [i_1 - 1])))));
            var_20 = -140;
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_21 = ((((((arr_19 [i_7] [1]) && -32643))) == (~-399685933)));
        var_22 = (min((min(4294967295, (min(-597697592, 1165481288095845841)))), (arr_0 [i_7])));
        arr_30 [i_7] = 1165481288095845870;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_23 = 17144718871926267572;
        var_24 = (((max(((min((arr_20 [i_8] [20]), 41))), (((arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) * (arr_31 [i_8]))))) * (((~(min(1968784055, 1023)))))));
    }
    var_25 |= var_8;
    var_26 = ((~((var_3 ? var_7 : (var_1 == var_9)))));
    #pragma endscop
}
