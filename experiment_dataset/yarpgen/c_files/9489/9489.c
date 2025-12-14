/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_19 ^= ((((var_5 ? (max(var_8, var_11)) : (((var_5 ? var_17 : var_18))))) << (((((241 ? 255 : 766927496252680898))) ? var_10 : (var_15 || var_16)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = ((((var_8 ? var_2 : var_7)) != -var_11));
                            var_20 -= ((((((~var_1) - var_12))) >= (max(((min(var_5, var_4))), var_0))));
                            var_21 ^= (min(((max(var_14, (var_12 % var_12)))), ((var_14 ? (!var_8) : (max(var_2, var_18))))));
                        }
                    }
                }
                var_22 = (min(var_22, var_2));
            }
        }
    }
    var_23 ^= (max((min(var_1, (max(var_10, var_0)))), ((((max(var_1, var_17)))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_24 ^= ((!(var_16 && var_9)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_22 [i_5] [15] [i_6] [i_5] [1] [i_5] = ((~(min((var_5 & var_0), var_3))));
                            var_25 += ((!((max((0 / 8191), ((var_7 ? var_4 : var_9)))))));
                            var_26 = ((var_8 > ((min(var_4, ((var_10 ? var_18 : var_11)))))));
                        }
                    }
                }
                var_27 = ((-(max((max(var_2, var_17)), var_13))));
            }
        }
    }
    var_28 += ((var_2 >> ((((((max(var_8, var_5))) ? var_8 : (var_0 ^ var_15))) - 14377654719146235594))));
    #pragma endscop
}
