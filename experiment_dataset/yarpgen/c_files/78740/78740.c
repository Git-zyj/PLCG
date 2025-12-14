/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((646728340082393133 ^ (min(var_0, 41971))))))));
    var_16 = (((var_5 ? (~113) : var_11)));
    var_17 = ((var_8 && ((min(-var_0, (min(-113, var_0)))))));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (((arr_1 [8] [8]) ? (66 | -2147483633) : (max(8540918069716602341, 12012504392417086821))));
                var_19 = (min((1528734025 < 16479945327188440075), ((~(max(var_2, 1399811321874481654))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 -= (arr_12 [6] [6] [i_2] [i_2] [i_3] [i_4]);
                                var_21 = ((((((21 >> (62 - 59))))) ? ((168 / ((min((arr_2 [i_0]), var_6))))) : (max((arr_7 [i_4 - 1]), ((~(arr_0 [i_0] [i_4])))))));
                                var_22 += ((!(((((max((arr_2 [6]), var_0))) ? (((min(var_6, (arr_8 [i_0] [i_0] [i_0]))))) : (max(242, 10721949674994524026)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
