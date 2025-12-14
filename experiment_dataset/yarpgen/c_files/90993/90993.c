/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~9223372036854775807);
    var_20 ^= var_12;
    var_21 += ((~(max(var_9, (~391399540392505944)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((max((arr_3 [i_0]), (((((arr_3 [i_0]) ? (arr_6 [i_0] [i_0] [i_2 - 3] [i_0]) : var_11)) - (!9223372036854775807))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 ^= ((2287890941 ? 4294967295 : 3351689189));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_2 - 2] = max(0, (0 || 5));
                            }
                        }
                    }
                    arr_17 [i_1] = 3351689209;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_24 = ((0 ? 943278106 : ((5736317360590042010 ? ((4294967295 / (arr_7 [i_0] [i_0] [i_0] [i_1]))) : ((max(943278100, 3351689209)))))));
                                arr_25 [i_1] = ((-4294967278 ? 943278113 : 4294967295));
                                var_25 = ((4294967286 * ((((var_8 == (arr_6 [i_0] [i_0] [15] [i_0])))))));
                                var_26 *= (arr_19 [i_0] [i_1] [i_2 - 2] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
