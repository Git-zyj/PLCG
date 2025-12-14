/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_13, var_9));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_16 |= (min(((min(32817, var_3))), (max((arr_1 [i_1 + 3] [i_1 + 2]), -1520800171))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_0] [i_1 + 3] [i_2] = (max((min(3452690774862030144, var_6)), (min(var_11, (arr_5 [i_0] [i_0] [i_0])))));
                arr_8 [i_2 - 1] [i_1] [i_0] = (min((max((max(var_3, var_11)), ((min(-3452690774862030129, (arr_2 [i_0])))))), ((min(65535, (min((arr_4 [13] [i_1] [1]), var_3)))))));
            }
            arr_9 [i_0] = (min((min(3452690774862030144, -3452690774862030145)), (min((arr_4 [i_0] [0] [i_0]), (-9223372036854775807 - 1)))));
            var_17 = (max((min((arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 3] [i_1 + 2]), var_0)), ((max(var_3, 161)))));
        }
        var_18 = (max(var_18, (max(((min(2958, 1296312163))), (max((arr_1 [i_0] [i_0]), var_5))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        var_19 = (max(var_19, 3452690774862030144));
        var_20 = -2147483644;
        var_21 = 3452690774862030144;
        arr_13 [i_3 + 2] &= -3452690774862030155;
    }
    var_22 = var_13;
    #pragma endscop
}
