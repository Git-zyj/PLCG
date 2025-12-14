/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((var_8 ? -1 : ((-10 ? var_3 : var_1)))), 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_12 -= ((1 >= ((((1 ? (arr_4 [i_0] [i_1 - 2]) : var_7)) | (arr_3 [i_0] [i_1])))));
                var_13 = (((((-(((arr_2 [i_0 + 1]) | var_3))))) ? (arr_4 [i_0] [i_1]) : ((~(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 = 127;
                            var_15 = ((-(arr_8 [i_0 + 1] [i_1 + 4] [i_3 + 1] [i_3 + 1])));
                            var_16 = (min(var_16, (((((((((8767773834553801505 ? -11 : 1))) ? -1542402508705361911 : (!var_7)))) ? ((~((((-32767 - 1) <= 0))))) : (arr_5 [i_0] [i_1 - 1]))))));
                            var_17 = 2270000562948321291;
                            arr_11 [i_0 + 1] [i_2] [i_1 - 1] [i_1 + 1] [i_2] [i_3 + 1] = var_2;
                        }
                    }
                }
                var_18 ^= 27658;
            }
        }
    }
    var_19 = 255;
    var_20 = ((-3070911040612873018 ? -1853 : 4071460433455992983));
    #pragma endscop
}
