/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((var_3 >> (((~1) + 54)))) ^ (((((var_9 & var_11) < (~var_2)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((((((arr_1 [i_0]) ? var_15 : var_3))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) * (arr_0 [i_0])))))) ? 4294967295 : 0));
        var_19 *= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) || (((var_6 * (arr_0 [i_0]))))));
        var_20 -= ((((((~(arr_0 [i_0]))) == ((9068948125067362425 ? -1345 : -1031004629)))) ? (max((-9068948125067362396 < -1720283583), (~var_14))) : (!4294967295)));
        arr_3 [i_0] = ((((((119 >= var_14) != (max(var_13, 1))))) << (((((arr_0 [i_0]) || var_4)) ? ((((arr_1 [i_0]) >= var_10))) : (arr_1 [i_0])))));
        arr_4 [i_0] [2] = (!193856747);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 = (((((((max(var_10, 5))) ? 1845808786228640605 : (arr_1 [i_1])))) ? ((-(((arr_6 [i_1]) + (arr_0 [i_1]))))) : (arr_1 [i_1])));
        var_22 = (max(var_22, ((max((var_11 && 1), (((arr_6 [i_1]) < (arr_0 [i_1]))))))));
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_23 = (((max(((-(arr_8 [i_2]))), -8332)) - ((-(arr_8 [i_2 + 1])))));
        arr_10 [i_2] = ((-(~-9068948125067362426)));
        var_24 ^= ((((-(!1)))) || ((-6750 <= ((max(5715, -20))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 = var_13;
        arr_15 [i_3] = (((max((30711 | var_11), (arr_9 [i_3]))) >> var_9));
        var_26 = (~(~1031004628));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] = ((((var_14 ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [i_4]))) / (min(1, (arr_18 [i_4])))));
        arr_20 [i_4] [i_4] = -193856748;
    }
    var_27 = var_16;
    var_28 = ((+(((60166 / -53) + var_1))));
    #pragma endscop
}
