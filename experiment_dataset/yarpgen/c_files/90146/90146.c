/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((((-3436 > (!9))) ? 3423 : (((arr_0 [i_2 - 2] [i_0]) ? -15 : -1))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((((((((arr_0 [i_1] [i_0]) - var_7)) + (arr_6 [i_0] [i_2] [i_0])))) ? -3448 : (max(31, ((max(3419, 2147483647)))))));
                }
            }
        }
    }
    var_11 = (~-9223372036854775800);
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_12 = (-3436 > 3425);

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_13 = ((!(((3435 ? 236 : (((arr_11 [i_5]) - (arr_14 [i_4]))))))));
                    var_14 = ((((3447 ? (((min(9, 69)))) : 12)) % ((min(16383, (arr_11 [i_3 - 3]))))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    arr_19 [i_3] [i_4] [i_4] |= ((-2 ? -106 : -23));
                    var_15 = -3448;
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    arr_23 [i_4] [i_7] [i_4] [i_4] = ((-((106 ? 182 : 2887818614494507681))));
                    arr_24 [i_4] [i_4] [i_4] [i_4] = -3415;
                    arr_25 [i_3] [i_4] [i_7] [i_3] |= (3426 ^ -1);
                }
                arr_26 [i_4] [i_4] = (3419 / -101);
            }
        }
    }
    #pragma endscop
}
