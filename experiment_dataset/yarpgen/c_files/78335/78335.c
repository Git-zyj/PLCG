/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min(var_4, var_4));
    var_20 *= max((min((var_11 & -24696), 25718)), var_16);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 115;
            arr_7 [i_0] &= ((((arr_3 [i_0] [i_0]) ? (arr_1 [i_0]) : (4221378525 > var_15))));
            arr_8 [i_0] [i_1] [i_1] &= ((-(((arr_0 [i_1] [i_0]) >> (((arr_0 [i_0] [i_1]) - 206))))));
            var_21 |= (min(73588771, (((((max(4221378527, (arr_2 [i_1])))) || 1)))));
            arr_9 [i_0] = ((arr_4 [i_0] [i_1]) ? (--4221378527) : 4221378525);
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            arr_14 [i_0] [i_0] [i_2] = ((+(((arr_10 [i_0] [i_2 - 2]) / (arr_4 [i_0] [i_2 + 1])))));
            arr_15 [i_2] &= (((arr_12 [i_2 + 1]) / (73588743 || 73588768)));
            arr_16 [i_2] = (-(arr_12 [i_2 - 1]));
            var_22 = 112;
        }
        var_23 = (((((((arr_1 [i_0]) + 2147483647)) >> ((((arr_4 [i_0] [i_0]) < (arr_4 [i_0] [i_0]))))))) ? 93 : (min((arr_1 [i_0]), (arr_10 [i_0] [i_0]))));
        arr_17 [i_0] = ((+(((arr_4 [i_0] [i_0]) - 16602407753597179340))));
        var_24 = (max(var_24, (((max(2067671231, (arr_2 [i_0])))))));
        arr_18 [i_0] = (max(-112, ((-(arr_3 [i_0] [i_0])))));
    }
    #pragma endscop
}
