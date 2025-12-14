/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((~var_6) < 8244310221060336589)) ? var_3 : ((min(var_11, 1890921645492247783)))));
    var_13 = (((((min(-20257, 1)))) < (((((245 ? 10891605335358750673 : 138538465099776))) ? 23 : 5390046994628118681))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 15;
        arr_4 [i_0] = ((((!((((arr_1 [i_0]) << (var_9 - 3248509773851289298)))))) ? ((min((arr_2 [i_0 + 2] [i_0 + 3]), 25))) : ((((((arr_1 [i_0]) ? 252 : 3426657330))) ? (((20811 <= (arr_2 [i_0] [i_0])))) : -1079456750))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (min((min(31732, (arr_6 [i_1]))), (((((127 ? (arr_7 [i_1]) : 33803))) ? (!7555138738350800950) : (((arr_5 [i_1]) ? (arr_7 [i_1]) : (arr_6 [i_1])))))));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            var_14 = (max(var_14, (((3426657316 ? ((-9164328437614857692 ? 7555138738350800922 : (arr_5 [24]))) : (~4294967295))))));
            arr_11 [i_1] [i_1] [i_2] = (arr_10 [i_1] [i_2 - 2] [i_2]);
            arr_12 [i_1] [i_2] [16] = 31736;
        }
    }
    #pragma endscop
}
