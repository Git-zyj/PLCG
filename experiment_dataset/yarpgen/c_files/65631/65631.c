/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -2014101425;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = ((!(~var_0)));
                var_13 ^= (((((~(arr_4 [i_0] [i_1 + 2])))) ? 115 : 17));
                var_14 = (min(var_14, ((((((3811963154938597761 || (~-97)))) >= ((-2014101431 ? ((var_6 ? (arr_4 [i_1 + 1] [0]) : var_5)) : -119)))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_15 ^= 8555;
                    var_16 = ((~((var_2 ? var_4 : ((-(arr_7 [i_0] [i_1 - 1] [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_17 ^= ((!((max(-2014101434, var_2)))));
                    var_18 &= ((min(var_5, var_0)));
                    var_19 += (min(-106491726, 20));
                }
                arr_11 [i_1] [i_0] = ((-336783539 ? 1 : ((((~50553) >= 14978)))));
            }
        }
    }
    var_20 += 240;
    var_21 = ((~(min((~5425336297847356599), 23))));
    #pragma endscop
}
