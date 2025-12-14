/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_6;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_0 [21])));
        var_14 *= ((-1375014014 ? (((((1 ? 13 : -20986))) ? 1129236396 : ((213179662 ? 1139434060145458574 : 134545945)))) : 17307310013564093033));
        var_15 = (arr_1 [i_0]);
        arr_2 [i_0] = (max(1129236396, 1748097201652815220));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 0;
        var_16 ^= ((!((((min((arr_1 [i_1]), 97))) || (arr_1 [i_1 + 1])))));
        arr_6 [i_1] [i_1] = (max(((var_5 ? var_7 : (arr_1 [i_1 - 2]))), 964697266));
    }
    #pragma endscop
}
