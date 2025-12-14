/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_8 - (min((((var_13 ? var_12 : var_15))), ((var_0 ? var_1 : var_7)))))))));
    var_18 = (min(var_18, (var_0 < var_15)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = (arr_0 [i_0 + 1]);
        var_20 = (max(var_20, var_6));
        var_21 = (32614 >= 0);
    }
    var_22 = ((~((min(0, -32614)))));
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                {
                    var_23 = ((((((arr_7 [i_1] [i_1]) ? (arr_3 [i_2 - 1]) : ((-(arr_7 [i_1] [i_1 + 2])))))) ? (~-7840431664965117047) : -7840431664965117047));
                    arr_9 [i_1] [i_2] [i_3] = (max(var_4, (max(3826086413759378797, (((-(arr_2 [i_2]))))))));
                    var_24 *= ((((-(arr_7 [i_1] [i_2])))));
                    var_25 = (max(var_25, (arr_4 [i_1] [i_1 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
