/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 = (((((8764412135951242722 - (arr_1 [i_0] [i_0 - 1])))) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [i_0] [i_0 - 1])));
        var_13 &= -79;
        var_14 = (((~129) ? (~var_3) : ((14106 ? -89 : 8728413338997482549))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_15 = (min((min(88, (arr_3 [i_1 - 2] [i_1 - 1]))), ((((min(8, var_9))) >> (((arr_2 [i_1]) + 3036488162229629967))))));
        var_16 = (min(var_16, (((-(min(109, ((78 ? (arr_3 [i_1 + 1] [i_1 - 2]) : 4294967282)))))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (min(((5288848564123671602 ? 438798721536029604 : 88)), ((min(-1276012772, 314699080)))));
        var_17 = (min((min(9644, (arr_2 [i_2]))), -6));
    }
    var_18 = ((var_7 ? ((((0 > var_8) ? ((min(247, var_0))) : 113))) : (((!27497) ? (min(var_1, 0)) : ((max(64818, -4371725219149254940)))))));
    #pragma endscop
}
