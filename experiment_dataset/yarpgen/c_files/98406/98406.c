/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_19 = ((((min((arr_3 [i_1 + 2] [i_1 + 4]), (arr_3 [i_1 - 1] [i_1 + 4])))) >> (arr_3 [i_1 + 1] [i_1 + 1])));
                    var_20 *= ((((((((-4326022550874916039 + 9223372036854775807) >> (9179 - 9160)))) ? (arr_1 [i_2]) : (var_3 == var_4))) >= (arr_4 [i_0] [i_0] [i_2])));
                    var_21 = min(var_15, (((var_3 + (arr_0 [i_0])))));
                    var_22 = (max(var_17, (max((-4326022550874916039 <= var_15), ((var_17 >> (arr_5 [i_0] [i_1] [i_0])))))));
                    var_23 *= var_7;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((var_9 * (((((((arr_6 [i_1 + 4] [i_1] [i_0]) << (((arr_2 [i_0] [9]) - 5076188726383496348)))) > ((((arr_11 [i_0] [i_0] [i_1] [i_3]) | (arr_0 [i_1]))))))))));
                    var_24 = var_13;

                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_3] [i_4] = ((((((arr_4 [i_0] [i_0] [i_1 + 1]) & (arr_4 [6] [i_0] [i_1 + 1])))) ? 4326022550874916042 : (arr_4 [i_0] [8] [i_1 + 1])));
                        arr_17 [i_0] = (~((~(arr_4 [i_1 + 3] [i_1] [i_1 + 3]))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_25 *= (((arr_3 [i_0] [i_1 + 1]) & (arr_3 [i_1 + 2] [i_1 + 1])));
                    var_26 = (((arr_10 [i_0] [i_1 - 1] [i_1]) | (arr_10 [i_0] [i_1 - 1] [i_1 - 1])));
                }
                var_27 = (((arr_2 [i_0] [i_0]) || (((+((var_6 >> (((arr_2 [i_0] [i_1 + 1]) - 5076188726383496328)))))))));
                arr_20 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
                var_28 = -26693;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    var_29 = (max(var_29, ((((((arr_23 [i_7 - 2]) - (arr_23 [i_7 + 1]))) - (((arr_23 [i_7 - 1]) - (arr_23 [i_7 - 2]))))))));
                    arr_30 [i_6] [i_7] = (((((arr_28 [i_6 - 1] [i_7 - 2] [1]) != 32760)) ? ((((arr_28 [i_6] [i_7 - 1] [i_8 - 1]) == 4326022550874916042))) : 26690));
                    var_30 *= ((-(arr_21 [i_8 + 3])));
                    arr_31 [i_6] [1] [i_6] = ((((((arr_26 [i_6 - 2] [i_7 - 1]) | (arr_26 [i_6 - 2] [i_7 - 1])))) ? ((max((arr_26 [i_6 - 2] [i_7 - 1]), (arr_26 [i_6 - 2] [i_7 - 1])))) : (arr_26 [i_6 - 2] [i_7 - 1])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                {
                    arr_40 [i_9] [14] [i_9] [i_11 + 2] = 26680;
                    var_31 = (((((arr_3 [i_11 + 2] [i_11 - 1]) == (arr_3 [i_11 - 1] [i_11 - 1]))) ? (arr_2 [i_11 - 1] [5]) : ((-(arr_2 [i_11 + 1] [i_11])))));
                }
            }
        }
    }
    #pragma endscop
}
