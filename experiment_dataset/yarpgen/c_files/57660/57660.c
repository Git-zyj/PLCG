/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((328400902 & (min(2058922243, -328400902))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 = ((((1 ? (-328400928 == 3585) : 1702277679065542664))) ? (max((-3586 & 1), 1)) : (((!(((187 ? 1089 : 32)))))));
                                var_13 ^= (((((1 <= 222) & 695925035)) / ((695925035 >> (min(0, 3585))))));
                                arr_14 [6] [i_0] [6] = (((~1) ? (((((206 >> (34 - 27)))) ? (17855561702091337821 != -9) : ((0 ? 3991488605 : 9223372036854775807)))) : (((((97 ? 1973921905 : -2084663903))) ? ((-9080013533391949920 ? 6465624957174745598 : -5087931641028565887)) : -1199972228))));
                            }
                        }
                    }
                    arr_15 [i_0] = 603732565;
                }
            }
        }
    }
    #pragma endscop
}
