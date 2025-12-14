/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_22 = ((!(min(((!(arr_4 [i_0]))), ((10420 || (arr_1 [i_0] [i_0])))))));
                        var_23 = ((max(((-1 ? var_9 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), 0)));
                        var_24 = (min(var_24, (((((((max(0, 1)) ? -20492 : -2481867022150746484))) ? (arr_0 [i_2]) : ((-8890497873325566975 ? ((max(28106, var_12))) : var_18)))))));
                    }
                    arr_10 [i_0] [i_0] [i_0] = 23886;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_25 = (arr_8 [i_0]);
                                var_26 = (max(var_26, 2956));
                                var_27 = ((-(((arr_15 [i_1 + 1] [i_0]) << ((((max(30, 32))) - 18))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
