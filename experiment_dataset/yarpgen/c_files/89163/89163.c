/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((min(var_7, 53)) != (((75 ? 65530 : var_1)))))) != 65524));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (((((((120 ? (arr_1 [i_0]) : 31)) % 26989))) ? 65522 : (1383515019 / 181)));
        var_12 = ((((min(13666, ((min(215, 214)))))) <= ((((((arr_0 [i_0]) ? 212 : 42))) ? ((-8229451507251615065 ? 65524 : (arr_1 [0]))) : (~84)))));
        var_13 = (max(var_13, ((min((arr_0 [i_0]), 61)))));
        arr_4 [i_0] = ((~(min(4723949286278948077, (-40 / -1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = 16;
        var_15 = (max(var_15, (~13)));
        var_16 = (min(var_16, ((((((95 ? 10 : 1))) == ((-2088369589 ? (arr_6 [i_1]) : (arr_1 [i_1]))))))));
        var_17 = (min(var_17, ((((((-2 + 2147483647) << (165 - 165))) * (((2047 <= (arr_6 [i_1])))))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_18 = (max(var_18, ((((min((arr_7 [i_2] [i_2]), (arr_0 [i_2]))) == (arr_8 [i_2 - 2]))))));
        arr_9 [i_2] = ((((arr_6 [i_2]) ? 2296659482 : (arr_6 [i_2 + 1]))));
    }
    #pragma endscop
}
