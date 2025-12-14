/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((1 ? 2980505452 : (((255 ? 1 : 0))))) < 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = var_7;
                            var_14 = ((((0 && ((((arr_9 [i_2]) ? 124 : var_10))))) ? 1023 : ((((!(arr_5 [i_0 + 2] [12] [i_2])))))));
                        }
                    }
                }
                var_15 = (min(var_15, ((((((-(arr_4 [i_0 + 2] [i_0 + 1] [i_0])))) ^ ((1 % (arr_7 [i_0]))))))));
            }
        }
    }
    var_16 |= min(((((min(var_3, var_3)) || (((8 ? var_8 : 724427159)))))), 21);
    #pragma endscop
}
