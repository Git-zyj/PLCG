/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-1 - (max(3, (-9223372036854775807 - 1))))) & -2175178537840841126);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_19 = ((-(123 >= 2431414068953419927)));
                    arr_8 [i_0] [i_1] [i_2] |= ((!(((~var_3) >= var_5))));
                    var_20 ^= ((+((max((arr_6 [i_1]), ((((arr_4 [i_0] [i_2]) && (arr_7 [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_0] [i_2] [9] [i_2] = max((arr_0 [i_0]), (((arr_0 [i_0]) | 5)));
                                var_21 = (-(arr_10 [i_0] [i_0] [3] [i_4]));
                                var_22 = (max(var_22, (arr_12 [i_0] [i_1] [i_1] [7] [7] [4])));
                                var_23 = ((var_3 == (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0])));
                            }
                        }
                    }
                    var_24 = (max((min((max(-9223372036854775805, var_11)), (9223372036854775807 / var_14))), (max(252, (arr_9 [i_2] [10] [10] [9])))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_5] [i_5] = (+(((arr_9 [i_5] [i_1] [i_5] [i_5]) / -9223372036854775789)));
                    var_25 |= (arr_5 [i_0] [i_1] [i_5]);
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_26 = (((max(((53308 ? (arr_15 [i_0]) : (arr_5 [4] [i_1] [i_1]))), (var_12 && var_5))) == (((-16 | var_11) % (((min((arr_4 [i_1] [6]), (arr_14 [i_6] [i_1] [i_1] [i_0])))))))));
                    var_27 = (min(var_27, ((((arr_19 [i_0] [i_0] [i_0] [12]) <= ((((arr_20 [i_0] [i_1] [i_6]) ? ((-9223372036854775805 ? 9 : 236)) : -9223372036854775805))))))));
                }
                var_28 = (max((((arr_17 [i_0] [i_0]) & (arr_17 [i_0] [i_1]))), (!-8694991219758404031)));
            }
        }
    }
    #pragma endscop
}
