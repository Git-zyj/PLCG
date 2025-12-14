/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((((((min(0, -117)))) <= (min((-32767 - 1), var_3))))), (max(((max(248, var_7))), (max(var_3, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (2644956071 && 6002001636298218226);
                                var_12 = (4334460801145329516 >> 0);
                            }
                        }
                    }
                }
                var_13 = (-(~1279812001));
                var_14 = (min(var_14, (((((max((var_9 & 14112283272564222099), (((3673 ? var_8 : (arr_5 [i_1] [i_0] [i_0 - 2]))))))) ? (!var_3) : (max((((var_4 ? var_2 : (arr_5 [i_0 - 3] [i_1] [i_0 - 3])))), (max(2644956071, (arr_5 [i_0] [5] [19]))))))))));
                var_15 = ((~(min((arr_12 [i_0 + 2] [i_0 - 3] [i_0 - 3]), (arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 3])))));
                var_16 += 1650011246;
            }
        }
    }
    var_17 = (max(var_6, var_8));
    #pragma endscop
}
