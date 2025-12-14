/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_14 = 63;
        var_15 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : 5471582745837474320)) << (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) - 5213884928049503636))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (min((((-1397864701 ? var_0 : ((((arr_0 [i_1] [6]) <= 1397864701)))))), 1612017601917436725));
        var_16 = -1397864694;
        arr_6 [i_1] = ((-32755 ? (((~-1) ? 1612017601917436725 : (((var_4 << (((arr_0 [i_1] [i_1]) - 5213884928049503658))))))) : ((-var_5 ? ((112 ? -4439124629308718288 : (arr_4 [i_1]))) : -1397864702))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_17 = (max(var_17, (((((((-116 ? (arr_3 [i_2 - 2]) : 0)) >= (65 || -8))) ? -4439124629308718288 : (min(((242886508 ? 127 : 36121)), 1670890672)))))));
        var_18 = (+(((!((max((arr_0 [i_2] [i_2]), 1)))))));
        arr_10 [i_2] = (((~(arr_9 [i_2 + 2] [i_2 - 1]))));
    }
    var_19 = (min(var_19, (min(((33893 ? 3922724861107545993 : (var_12 && 4439124629308718311))), 1739972869))));
    var_20 = (max(var_20, ((max((((var_11 ? var_4 : -1929478533))), (((((var_3 ? var_5 : 98))) ? (min(125, 1612017601917436725)) : var_10)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] = min(-2937625759441177467, (arr_11 [i_4]));
                arr_16 [i_4] [i_3] [i_4] = -1792689004;
                var_21 = ((((((((min(512, 38134))) == ((var_8 ? var_13 : 503633690)))))) >= -3922724861107545994));
            }
        }
    }
    var_22 = (!1);
    #pragma endscop
}
