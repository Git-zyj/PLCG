/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 = ((((max(-10568, (~1)))) ? 10559 : -13471));
                    arr_9 [i_0] [i_1] [6] [6] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 *= (((min((1 - 1118893047), (((1797082837728279348 ? 15 : -10568))))) >> ((((max((max(10565, 1)), 1))) - 10564))));
                                var_13 = (max(var_13, ((max((max((max(656489097, 1)), -10574)), ((-(10575 * 1118893045))))))));
                                arr_17 [3] [i_1] [i_2] [i_3] = 1;
                                var_14 = (((((-((65531 ? 1 : 10568))))) ? (((max(1, 0)) ? (max(-8193471052795016735, 17003)) : (1 - 2))) : (((221 - (max(3108224473, 1)))))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_0] = ((!(((1 ? 8193471052795016737 : 3379645422)))));
                var_15 = (max(1, 1));
                arr_19 [i_0] [i_1] = (max((max((10565 & 250), (3522121869 / 4403595934169546424))), (max(-4745937397696003872, (max(1, 4403595934169546418))))));
                var_16 = (max(3, 51708));
            }
        }
    }
    var_17 &= 13136;
    var_18 = (max(var_18, ((((((13145 > 1) & (max(3256888302, 123)))) * ((((!(1 * 5536644071274067456))))))))));
    #pragma endscop
}
