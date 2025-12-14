/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (2862324961 <= 1432642316);
        arr_4 [i_0] [8] &= (((-866847889205443962 + 9223372036854775807) << (1432642334 - 1432642334)));
        var_18 *= (4294967267 || -866847889205443968);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [2] = (((14 && 50) | (251 > 71)));
        arr_9 [i_1] = (((((-866847889205443968 + 9223372036854775807) << (55 - 55))) / 205));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = 0;
        var_20 = (((((((20274 || -107) - (-26973 * -26984))) + 2147483647)) >> ((((max(-4267236618673528300, 70)) > (1432642334 ^ 57205))))));
        var_21 *= (max((max((5 <= -58), (max(127, 2046)))), ((((238 != -2147483632) && 157)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_22 = ((((min(56654, 1))) >> (((0 <= 4294965250) / ((max(181, 1)))))));
        arr_15 [2] = 0;
    }
    var_23 = 4294965249;
    #pragma endscop
}
