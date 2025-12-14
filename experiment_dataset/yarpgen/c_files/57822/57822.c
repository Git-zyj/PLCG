/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;
    var_11 = max((-18 - var_2), (max((min(var_5, var_2)), var_7)));
    var_12 = 198;
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_14 = 0;
            var_15 ^= ((~((min(-3624, 243)))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_16 *= ((max(0, 96534192)));
                        var_17 = (arr_12 [i_0] [i_2] [i_2] [i_4]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_18 = 255;
                            var_19 = ((~(arr_17 [i_0] [i_0] [i_2] [i_3] [i_3 - 2] [i_4] [i_5])));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            var_20 = (min(27140, (((-(arr_3 [i_0] [i_0] [i_0]))))));
                            var_21 ^= 20995568;
                            var_22 = ((36 ? -var_6 : ((-(arr_7 [i_2] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_23 = 21663;
        arr_24 [i_7] = ((((max((arr_3 [i_7] [i_7] [i_7]), (arr_3 [i_7] [i_7] [i_7])))) ? ((~(arr_10 [i_7] [6] [i_7] [i_7]))) : ((min((arr_9 [10]), (((arr_12 [i_7] [i_7] [4] [i_7]) ? -5140747678692641184 : 3673358056)))))));
    }
    #pragma endscop
}
