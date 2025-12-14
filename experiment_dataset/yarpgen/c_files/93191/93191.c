/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 |= ((var_7 || ((max(-7302348757654623563, ((max(var_8, var_8))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((!((min(26559, 38976))))) && ((max(9845058705833773924, 86))));
        var_15 = (((((-6610817108660982067 ? ((min(86, 1))) : 18446744073709551598))) ? var_3 : (min((arr_1 [i_0]), (((1090081375230113775 ? 1 : -21)))))));
        var_16 = (((((((arr_0 [i_0]) ? 13954083295378587358 : (arr_2 [i_0]))) & (arr_0 [i_0])))) ? ((10311555391154082178 ? (~-23595) : (max(38978, (arr_2 [i_0]))))) : (((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_17 = ((((max((max(26, 10311555391154082165)), (arr_5 [9])))) ? -399798008589260292 : (((-((19 ? 37795 : -23577)))))));
        arr_6 [i_1] [i_1] = ((((min(26557, -var_12))) ? (((~(arr_5 [i_1 + 1])))) : 12597991567407749115));
    }
    var_18 = (min((min((((85 ? 2553283087 : var_6))), (max(var_2, var_10)))), 89));
    #pragma endscop
}
