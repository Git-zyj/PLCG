/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((0 ? 0 : 580072075688794655)) / var_11));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 *= (arr_1 [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 -= (max((((-9223372036854775807 - 1) ? 1 : 72057044282114048)), (~var_15)));
                        var_21 = ((((((arr_8 [i_3]) ? var_13 : var_6))) ? ((~(arr_2 [i_0 - 1]))) : (((arr_2 [i_0 - 2]) / var_8))));
                        var_22 = (min(var_22, var_11));
                    }
                }
            }
        }
        var_23 = ((((((1 ? 253 : 549755813887))) ? (arr_3 [i_0 - 1]) : ((499434246 ? (arr_0 [i_0 - 2] [i_0 - 1]) : 1)))));
    }
    var_24 = -17866671998020756960;
    var_25 = (580072075688794655 && 12469512033845684394);
    #pragma endscop
}
