/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (~var_9)));
    var_17 = ((var_0 || ((!(((var_9 ? 1 : var_1)))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_13;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = ((((!(arr_3 [i_0] [i_0 + 1]))) ? (((15621 == (arr_3 [i_0] [i_0 - 2])))) : ((var_15 ? (arr_4 [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_0 + 1])))));
            var_19 = 7659797364252311299;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_20 = (((arr_4 [i_0] [i_0 - 1]) >= ((-112 ? 1 : (arr_4 [i_0] [i_0])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_21 = (max(-var_5, ((-(var_6 * -68)))));
                            arr_16 [i_2] [i_2] [i_2] [i_4] [i_5] &= 23448;
                            arr_17 [i_4] [i_0] [i_4] [i_4] [i_4] [i_4] = ((((((var_8 ? 1 : 64)))) ? (((arr_8 [i_0 - 1] [i_0]) ? 13057 : 1)) : (((~10116866927125833436) ? 1714495260 : 1081775631))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_22 = (max(var_22, ((((min(5377320321272408827, ((max((arr_7 [i_6] [i_6] [i_0]), var_5))))) << ((((max(-47, var_1))) - 65460)))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_24 [i_0] [i_6] = (max(8805572250178554661, 1));
                        arr_25 [i_0] [i_6] [i_7] = var_14;
                        var_23 = 11098;
                        arr_26 [i_0] [i_6] [i_0 + 1] [i_0 + 1] = (arr_3 [i_0] [i_6]);
                    }
                }
            }
            var_24 = ((max((arr_20 [i_0 - 2] [i_0]), (min((arr_7 [i_0] [i_0] [i_6]), -225355255)))));
            var_25 = 1220826789;
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_26 = var_7;
            arr_30 [i_0] [i_0] = ((-3 / (max(var_0, ((16606 ? 1 : 35318))))));
            var_27 = var_4;
        }
        var_28 ^= (((((20633 ? (arr_29 [i_0 + 1] [i_0 + 1] [10]) : 307750568))) && (arr_23 [1] [i_0 - 1] [i_0] [1])));
    }
    #pragma endscop
}
