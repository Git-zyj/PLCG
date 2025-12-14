/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2010406526;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = ((((-118 == (arr_1 [i_0] [i_0 - 1]))) ? ((3168629566 ? (arr_1 [i_0] [i_0 - 1]) : 3168629566)) : (((((max(93, -624016569)) >= 1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_22 = (min(var_22, ((max(((-613628743082114918 ? 1126337730 : 11773950864679798513)), ((max((((96 > (arr_6 [i_2])))), (min((arr_6 [i_0 - 1]), -35329038))))))))));
                        var_23 = (min((((((((arr_0 [i_0] [i_1]) ? 3168629579 : 917397660))) ? (arr_2 [i_3 - 3] [i_0]) : (11773950864679798499 < 33)))), (((arr_7 [i_2 + 1] [i_2 - 1]) & (33 * 11773950864679798513)))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_24 = ((249 - (max(3168629566, 4294967190))));
                            var_25 = (arr_10 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_26 = (max(var_26, (arr_9 [1] [i_1] [1] [1] [i_5])));
                            var_27 &= (min((max((3086371397 + 8617835642155638200), (18762 * 4294967199))), ((((96 / 1) ? 103 : (((arr_1 [i_0] [i_0]) - (arr_13 [i_0] [i_1] [i_1] [10] [i_1]))))))));
                        }
                        var_28 = (min(var_28, ((((3168629606 ? 3148 : 6701423757572360200))))));
                        var_29 = ((-(max(91, 3168629574))));
                    }
                }
            }
        }
        var_30 = (max(var_30, 3168629573));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_31 = (!18762);
        var_32 = (max(var_32, ((((arr_10 [8]) ? 1208595890 : (arr_10 [8]))))));
        var_33 ^= (arr_11 [i_6]);
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_34 = arr_19 [i_7] [i_7];
        var_35 = (min(var_35, (arr_18 [i_7])));
    }
    #pragma endscop
}
