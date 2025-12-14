/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_0;
    var_19 = (var_5 ? ((((var_3 >= (max(var_15, var_11)))))) : 15552938642377810816);
    var_20 = (max(var_7, ((max(var_0, -0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((-(min(30735, -5389138053276684143))));
                arr_7 [16] [16] |= ((((((max(2535017279, (arr_6 [i_0])))) ? (arr_4 [i_1 - 1] [1] [i_1]) : (arr_0 [i_0] [i_1 + 1]))) / ((~(arr_6 [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_22 = ((((max(1, var_4))) ? (((var_9 / var_0) ? ((var_14 ? 1759950048 : (arr_0 [i_3] [i_0]))) : 139)) : (!-34582556)));
                            var_23 = ((~((~(max(116, 6636402637886532671))))));
                        }
                    }
                }
                arr_13 [i_1] = ((((((!(!1))))) / (min(var_7, -905387347))));
                arr_14 [15] [i_1] = ((~(~var_17)));
            }
        }
    }
    #pragma endscop
}
