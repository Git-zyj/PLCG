/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = (min(var_18, ((max(((5994972404853015144 ? 6371 : -3668030649241232416)), -1)))));

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_19 = (min((((var_12 >> (5994972404853015171 - 5994972404853015168)))), 5994972404853015176));
                var_20 -= (arr_3 [i_1]);
                var_21 = (((((~(arr_5 [i_2 - 2])))) ? 1 : ((-(arr_5 [i_2 + 2])))));
                var_22 = (max(((48951 ? 5506575543519563842 : 12940168530189987767)), (arr_0 [i_0 + 2] [i_0 + 1])));
                var_23 = 15;
            }
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                var_24 = (min(15, 3515764668));
                var_25 |= (((((1 & (arr_14 [i_0 + 2])))) ? ((~(~139))) : (arr_13 [i_0] [i_0] [i_0] [i_0])));
            }
            var_26 += (((((-5994972404853015161 ? (arr_9 [i_0 - 1] [i_0 + 1]) : (arr_9 [i_0] [i_0 - 1])))) ? 3668030649241232420 : 1));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_27 = -2172840110211071924;
                        var_28 = ((((max((~2172840110211071923), ((2172840110211071913 >> (((arr_3 [i_0 - 3]) - 24513))))))) ? (((min(var_7, 1)))) : ((120 ? -5994972404853015176 : 36450))));
                    }
                }
            }
            var_29 = (min(var_29, ((((var_11 + var_7) ? ((+((min((arr_4 [i_3]), 49653))))) : 2065396277)))));
            arr_20 [i_0] [i_0] [i_3] = (~var_10);
        }
        var_30 = ((((453756001 ? -5994972404853015191 : (arr_7 [i_0 + 2])))) ? (((arr_7 [i_0 - 2]) ? 1 : var_1)) : (((arr_7 [i_0 - 1]) ? (arr_7 [i_0 + 1]) : (arr_7 [i_0 - 2]))));
    }
    #pragma endscop
}
