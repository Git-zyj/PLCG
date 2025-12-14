/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((max(var_14, var_10)) << var_9)))));
    var_18 = ((((((19094 ? 1 : 0))) ? (-23 ^ 23145) : (~23171))) != 135);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 - 1] [i_0 - 1] = ((~(((!((max(1, 168))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] = 255;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_19 = (max(var_19, (((-40 && ((-1775451073 || ((min(0, 198))))))))));
                                var_20 += (max(((~((-1775451087 ? var_15 : var_9)))), (((!(1775451087 | 0))))));
                                var_21 = ((((~((3 ? (-127 - 1) : 224)))) >> (((((((-3712758135787344596 ? 127 : -1775451087))) ? (~15) : (min(1775451106, -1775451087)))) + 45))));
                                arr_18 [i_4] [i_4] = 1;
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((((max(1, 240))) ? ((1775451078 ? 226 : var_3)) : 1)), (((!((((-1775451087 + 2147483647) >> 3))))))));
                                arr_23 [i_0] [0] [0] [12] [i_0 + 1] |= 47;
                                arr_24 [i_3] [1] [1] [i_3] [1] = (((((((2825831188 ? 40 : var_0))) ? 0 : 2146195110)) <= ((((135 != (var_8 != 40)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= ((~(((((min(-41, 255)))) + ((18446744073709551612 ? -7 : 1))))));
    #pragma endscop
}
