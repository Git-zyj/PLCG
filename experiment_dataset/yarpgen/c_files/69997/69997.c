/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((((!((min(-88, 6791369)))))), 6814283837895641920);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (((((arr_0 [14]) > (arr_0 [i_0]))) ? 2888213223366688971 : ((max((min(5265476470377229055, (arr_1 [21]))), -5265476470377229054)))));
        var_21 = (((max((arr_0 [i_0]), (arr_0 [i_0]))) ? (arr_1 [i_0]) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_22 = (((((80 ? -6121001917154577582 : 1069547520))) ? -6634606927007463648 : (arr_1 [i_0])));
            arr_5 [1] [16] [i_1 - 2] = max((min(((-(arr_2 [i_0] [i_0] [i_0]))), -5265476470377229072)), ((((3565579798 ? -2147483630 : 82)))));
            arr_6 [i_0] [i_0] [3] = (var_2 ? 11551382443326256774 : ((min(3910109076, (min(91, 384858220))))));
            var_23 = (min(var_23, ((min(var_17, (((!(((1 ? -13 : (arr_0 [23]))))))))))));
        }
    }
    var_24 = ((384858202 % ((((((min(-5265476470377229080, 1))) || var_13))))));
    #pragma endscop
}
