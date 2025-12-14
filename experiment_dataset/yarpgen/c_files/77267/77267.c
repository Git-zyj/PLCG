/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    var_13 = ((~(arr_0 [i_0] [i_2])));
                    arr_8 [i_1] = 511;
                    arr_9 [i_1] [i_1] [i_0] = (1 & 9227549516397586213);
                    var_14 = (((arr_6 [i_0 + 1] [i_1] [i_2 - 1]) || (arr_0 [i_0 - 1] [i_2])));
                }
                for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
                {
                    var_15 *= (arr_10 [i_0 - 1]);
                    arr_13 [i_0 - 1] [i_1] [i_3] [i_0] &= (((27083 * -57) ? ((max((arr_5 [i_0]), (arr_10 [i_0])))) : (arr_4 [10])));
                }
                for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
                {
                    var_16 ^= (((((arr_7 [i_4 - 2] [i_4 + 1] [i_4]) ? (arr_12 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4]) : (arr_12 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4])))) ? ((-((var_0 ? (arr_7 [i_0] [i_0] [1]) : 22906)))) : (((!((1067608815 && (arr_3 [i_1] [i_4])))))));
                    var_17 = (((((arr_10 [i_4]) << ((-(arr_6 [i_4] [i_1] [i_0])))))) ? 250 : (arr_15 [i_4 + 3] [i_4 + 4]));
                    arr_16 [i_1] = (max(((min(5546445883263373752, -1287722574617075408))), (max((~var_10), ((max((arr_3 [i_1] [i_4]), (arr_11 [i_0] [i_1] [i_1]))))))));
                    arr_17 [i_0] [i_0] [i_1] [3] = -22890;
                }
                var_18 |= (((-22874 >= 0) <= (((((var_3 | (arr_11 [i_0] [i_0] [i_0 + 1])))) ? (((-17 ? 1 : (arr_0 [i_0] [i_1])))) : (((arr_7 [i_0] [2] [i_0]) ? -57 : -1287722574617075408))))));
            }
        }
    }
    var_19 = var_4;
    var_20 = (max(10313503430535517272, 37515));
    #pragma endscop
}
