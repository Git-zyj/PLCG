/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (~var_9);
                var_14 = var_11;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (((arr_5 [i_2] [12]) >> 42));
                            arr_9 [i_0] [i_2] [i_2] [i_3] = (~(((1125899638407168 >= (arr_3 [i_0] [i_3])))));
                            arr_10 [22] [i_1] [0] [0] |= ((-1 ? (((~6391200945575748765) % (((var_11 ? 121 : var_2))))) : (~var_0)));
                            var_16 = 1103555050484479328;
                        }
                    }
                }
            }
        }
    }
    var_17 = (~125);
    var_18 = var_0;
    #pragma endscop
}
