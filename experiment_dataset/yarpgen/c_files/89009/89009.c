/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~0) + 9223372036854775807)) << (((min((max(344809291, var_10)), 41106)) - 41106))));
    var_21 -= ((var_0 >> (var_19 - 26646)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_22 *= (((arr_1 [i_0 + 1]) < ((-6895727739643544944 - (min(2762191447898105752, 0))))));
            var_23 -= var_9;

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_24 = ((!((max(0, 0)))));
                arr_7 [i_0] [0] [i_0] [i_0] = ((23561 ? (arr_0 [i_0 + 1] [i_0 + 3]) : 1194347553));
                var_25 = (arr_0 [2] [3]);
                var_26 ^= ((-(((((var_8 ? 272898897 : (arr_3 [i_0] [i_0])))) + 13625531894844349788))));
                arr_8 [i_2] [i_1] [i_0] = ((-(((arr_5 [i_1] [i_0 + 3]) ? var_6 : var_14))));
            }
            var_27 = 2234122942;
        }
        var_28 = var_19;
        var_29 = (((((!(arr_2 [i_0])))) * 0));
        arr_9 [i_0] = ((-(((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1])))));
    }
    var_30 = 1698488442;
    #pragma endscop
}
