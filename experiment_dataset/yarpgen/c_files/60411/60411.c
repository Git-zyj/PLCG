/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((((43 ^ (arr_1 [i_0 + 3]))) != (((((max((arr_5 [i_1]), (arr_5 [i_0 - 1])))) <= (((arr_3 [13]) ? (arr_4 [i_0]) : (arr_6 [i_0] [i_0 - 3]))))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (((arr_1 [i_0]) - ((((!(arr_5 [i_0 - 3])))))));
                        arr_13 [i_0] [i_2] [i_0] = ((~(arr_10 [i_0 - 3])));
                    }
                    var_21 = (((arr_10 [i_0]) ? (arr_6 [i_0] [i_0 + 3]) : (arr_10 [i_0])));
                }
                for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((((((arr_6 [i_0] [4]) & 1455872139))) || ((((arr_3 [i_0]) - 1455872139)))));
                        arr_21 [i_0] [i_1] [i_1] [i_5] [i_5] = -37;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            var_22 = (min(var_22, (((((arr_14 [i_0 - 3]) || (arr_8 [i_0 - 3] [i_4 - 1] [i_7 - 1] [i_4 - 1])))))));
                            arr_26 [i_0] [i_1] [i_0] [i_6] [i_6] = (((min((arr_24 [i_0 + 2] [i_4 + 1] [i_4] [i_0 + 2] [i_6]), (-9223372036854775807 - 1))) + (((min((arr_24 [i_0 + 3] [i_4 + 1] [i_6] [i_6] [i_7]), (arr_24 [i_0 + 1] [i_4 - 1] [i_6] [i_7] [7])))))));
                        }
                        var_23 = (max(var_23, 2839095156));
                        var_24 = var_15;
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_0] = (arr_2 [i_1]);
                }
                var_25 ^= 1455872114;
            }
        }
    }
    var_26 = ((var_3 ? ((((var_16 ? 4721569672181845659 : 0)) << (((max(var_8, 17235454952936256250)) - 17235454952936256234)))) : var_5));
    var_27 = var_2;
    #pragma endscop
}
