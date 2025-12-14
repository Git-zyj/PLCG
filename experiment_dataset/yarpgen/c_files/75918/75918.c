/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 -= ((-(((!(arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = 816331808;
        var_14 = (max(var_14, ((((((min((arr_0 [i_0]), (arr_0 [i_0]))))) == ((1770462821 ? 3478635487 : 0)))))));
        var_15 -= var_6;
        arr_4 [i_0] [2] = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (max(var_16, (((-(arr_6 [i_1] [i_1]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_17 *= (arr_12 [i_1] [i_2] [i_3] [i_4]);
                            var_18 = (0 == 816331808);
                            var_19 = 3478635470;
                            var_20 &= (2147483647 && 939524096);
                        }
                    }
                }
            }
        }
        arr_18 [i_1] = var_11;
    }
    var_21 = (var_5 ? var_1 : 1);
    var_22 = (min(var_8, 1));
    #pragma endscop
}
