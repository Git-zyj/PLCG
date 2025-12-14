/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (((932919534 | var_8) && 16));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_19 += -26;
            var_20 = ((var_10 ? 57004 : (~var_2)));
            arr_6 [i_0] = ((var_0 < ((-(min(var_12, var_2))))));
        }

        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_21 = (var_4 <= var_9);
            arr_9 [i_0] = 42434;
            var_22 = (max(var_22, 16640));
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            arr_13 [i_0 - 1] [i_0] [i_0] = 5424935521925840865;
            var_23 = var_7;
            var_24 = (min(var_24, ((min(((((((max(149, 255)))) > (min(var_10, (arr_3 [2] [2])))))), (13208067172090043231 << 16))))));
        }
        arr_14 [i_0] = ((18217076072363060967 ? 0 : 1));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_25 = (min(var_25, 4083671747));
        var_26 ^= (arr_4 [0]);
        arr_17 [i_4] [i_4 - 2] = (arr_7 [i_4] [i_4] [i_4 + 1]);
    }
    var_27 = (min(4042494733, var_9));
    #pragma endscop
}
