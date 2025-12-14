/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 55452;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(var_21, var_8));
        var_22 |= (10102 != -16912);
        arr_2 [1] [1] = ((((min(((10107 ? 55457 : 10084)), ((max(var_2, (arr_0 [7]))))))) ? -55452 : (~var_6)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_23 = ((~((-(var_5 ^ 10084)))));
            arr_7 [i_0] [i_1] [1] &= 55451;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = ((10114 >> (-19 + 42)));
            var_24 = (min(var_24, ((((55452 - ((((arr_5 [i_0]) <= 658665576)))))))));
        }
        arr_11 [i_0] [i_0] = ((((max(var_18, var_2))) ? (arr_6 [i_0] [i_0]) : 55452));
    }
    #pragma endscop
}
