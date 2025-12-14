/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 &= (((((((!4474474260070842906) || (arr_7 [i_0] [i_1] [i_0]))))) == (((min(3272600566, -62)) | (((min(77, var_7))))))));
                    arr_8 [i_0] [0] [i_0] [i_0] = (min((((4474474260070842911 < (min(-1094892266204226718, var_2))))), 8191));
                    var_12 += (-2147483647 - 1);
                }
            }
        }
    }
    var_13 = var_9;
    var_14 = ((((((min(var_2, var_7))) << ((((var_2 ? -4474474260070842929 : var_2)) + 4474474260070842935)))) == ((var_10 ? ((max(var_9, var_4))) : (~var_0)))));
    var_15 &= (((((~((0 ? var_7 : var_7))))) ? (var_7 * var_2) : ((((4474474260070842900 <= var_7) ? -var_3 : var_6)))));
    #pragma endscop
}
