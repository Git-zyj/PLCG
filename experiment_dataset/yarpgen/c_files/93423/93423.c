/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_0] = (arr_4 [i_0] [i_0]);
                    arr_10 [i_1] = ((((((arr_1 [i_1 + 1]) & (arr_8 [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 1])))) ? (min((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_1 + 4]), (arr_0 [i_1 + 4]))) : (arr_0 [i_1 + 4])));
                    arr_11 [i_0] [i_1 + 2] [i_1 + 2] [i_0] |= (arr_2 [i_0] [i_1] [i_2]);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_18 -= ((((min(var_2, (max(var_1, (arr_8 [i_0] [i_0] [i_0] [i_0])))))) != (min(8775594160907857522, (arr_4 [i_0] [i_1 + 2])))));
                    var_19 = (max(var_19, var_7));
                    arr_15 [i_3] [i_1] [i_0] = (arr_6 [i_0] [i_1 + 2] [i_1 + 2]);
                    var_20 = ((-(((arr_0 [i_1 - 1]) - (arr_13 [i_1 + 4] [i_1 - 2])))));
                }

                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    var_21 ^= (min((arr_14 [i_0] [i_0] [i_1] [i_4]), ((var_3 ^ ((var_3 | (arr_16 [i_0])))))));
                    arr_20 [i_4] [i_1] = (arr_13 [i_0] [i_4 - 3]);
                }
                var_22 = ((3158369599629157927 ? (((min(111, -26908)))) : 9671149912801694104));
            }
        }
    }
    var_23 = (min(var_12, 2295));
    var_24 = var_9;
    #pragma endscop
}
