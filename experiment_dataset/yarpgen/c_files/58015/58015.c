/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = var_0;
                            var_16 = (min(var_16, ((((arr_0 [i_1]) == 0)))));
                            var_17 = ((((max((min((arr_5 [7] [9]), 12751071673244207993)), ((max((arr_2 [1]), -822060546)))))) ? 1073741816 : (arr_2 [i_2])));
                        }
                    }
                }
                var_18 = (min(((((((4294967295 - (arr_7 [i_0] [i_0] [i_0] [i_0])))) >= 12751071673244207984))), (((27 * 1008) * (max(-5675242186744933655, 2485886189))))));
                var_19 = var_11;
                var_20 = (max(var_20, (((-(max(228, ((1 ? 193 : (arr_5 [i_0] [i_0]))))))))));
                var_21 = (min(var_21, 2767958775));
            }
        }
    }
    var_22 &= var_4;
    #pragma endscop
}
