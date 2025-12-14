/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = var_12;
        var_14 = (16536634451073962002 * ((((126 + -1) ? ((0 ? var_7 : var_10)) : 920652152533635308))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_2 [i_1 - 2] [i_1 - 2]) ? (arr_3 [i_1 - 2]) : (arr_1 [i_1 - 2])));
        arr_5 [i_1] [i_1] = var_2;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_10 [i_3] [i_2] [i_3] = (!-15);
            var_15 ^= 1785905460;
            arr_11 [i_3] = (min(39, (min(62, 8658654068736))));
            var_16 = (60 ? 344071956 : 62);
            var_17 -= ((var_8 >> ((min(var_6, (((49971 && (arr_7 [i_2] [i_2])))))))));
        }
        arr_12 [5] [i_2] = -13;
        var_18 = (((((arr_8 [i_2] [i_2]) && -50))) != (((!(((69876434029670054 - (arr_9 [i_2] [i_2]))))))));
    }
    var_19 ^= (~2147483647);
    var_20 ^= ((((((var_4 * 36) / ((255 ? var_4 : 46))))) ? var_8 : ((1480539575 ? -51 : 200))));
    var_21 = (((((var_2 - (var_7 - 19)))) ? ((-39 ? var_8 : (((-9223372036854775807 - 1) ? 8297339940292827631 : 65535)))) : (((var_8 - (var_5 + var_10))))));
    var_22 = ((127 ? 7341570436317384935 : 920652152533635286));
    #pragma endscop
}
