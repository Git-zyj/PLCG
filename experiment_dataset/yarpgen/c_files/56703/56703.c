/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_2 [i_0])));
        var_20 = (min(var_20, var_17));
        arr_4 [i_0] [12] = (((~17054) < (((max(2999077600, -17065)) & (min((arr_1 [i_0]), (arr_3 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 += (max((17054 % 1295889695), ((((var_10 <= 2147483647) > (arr_7 [i_1]))))));
        arr_8 [i_1] = (min(759083962, ((min(var_18, (max(1494881854, 2147483647)))))));
        arr_9 [i_1] [i_1] |= (((min((((3496462205 ? (arr_2 [i_1]) : var_18))), ((var_3 ? 7 : 1295889698)))) & 213));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((!(arr_11 [i_2] [i_2]))))));
        arr_14 [i_2] = (arr_2 [i_2]);
        arr_15 [i_2] = 3496462205;
    }
    var_23 += max((min(((249 ? 662108411 : 2999077601)), var_11)), (max(((max(14027, 6))), 2419039321)));
    var_24 = (((min(0, (17049 ^ -1288158764))) > var_10));
    #pragma endscop
}
