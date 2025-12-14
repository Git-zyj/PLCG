/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? (((((var_7 ? var_9 : var_5))) ? (((var_2 ? var_0 : var_10))) : var_11)) : (((((var_5 ^ var_8) && (((var_12 ? var_3 : var_10)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (((var_11 & var_7) ^ -var_2));
        arr_3 [i_0] = ((1 ? 1 : 1));
        var_15 -= ((49370 ? -var_9 : (var_6 < var_5)));
        arr_4 [i_0] = ((var_3 - (((1 ? 1 : 3242244228)))));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_15 [11] [i_2] [i_1] = ((((max((var_12 < var_0), (var_9 % var_11)))) ? ((~((var_9 ? var_6 : var_7)))) : var_5));
                var_16 = (((~(var_9 ^ var_4))));
                var_17 = (((max(16165, 1))));
            }
            var_18 = var_8;
            arr_16 [i_1] = (max(1, (max(-8457154446974926023, 1628373296))));
        }
        var_19 = (max(var_19, ((((((var_5 ? (((min(var_9, var_3)))) : var_10))) ? (max(var_6, var_9)) : ((~(var_6 ^ var_4))))))));
    }
    var_20 ^= (max((((26771 >= 1039191718) - var_12)), ((max(var_4, var_10)))));
    #pragma endscop
}
