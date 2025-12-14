/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = 106;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_17 = ((~(arr_1 [i_1 - 2] [i_1 - 3])));
            arr_7 [0] [i_1] = var_2;
            arr_8 [i_0] [i_1] &= ((-(((arr_0 [i_0] [i_1]) ? 33937 : 2415375094540436588))));
            var_18 = 62726;
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_19 = (max(var_19, ((!(((~(arr_0 [i_2 - 1] [i_2 - 3]))))))));
            var_20 = (max(var_20, -58));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_3] = ((-103 ? ((12757 ? (((var_10 + (arr_11 [i_0] [i_3])))) : ((var_15 ? 9615153274384006353 : -1347180645436149614)))) : (((max(-7, (arr_5 [i_0] [i_3] [i_0])))))));
            arr_14 [i_0] [i_3] = ((((((arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 1]) >> (arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 1])))) + ((var_6 & (arr_1 [i_3 + 1] [i_3 - 2])))));
            var_21 = var_6;
        }
        arr_15 [i_0] [i_0] = var_12;
        arr_16 [7] [3] = var_15;
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_22 = var_12;
                        var_23 = (-1 & 48108);
                        var_24 ^= (!var_5);
                    }
                }
            }
        }
        var_25 ^= (~1050853150042259741);
    }
    var_26 *= var_0;
    var_27 = (min((var_9 & 1), var_9));
    #pragma endscop
}
