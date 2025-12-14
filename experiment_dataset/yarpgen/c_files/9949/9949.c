/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (83 != -4177857461733345609);
                                var_17 = 527225002396269231;
                                var_18 += ((var_14 ? 8067334442765341088 : 1632501408));
                            }
                        }
                    }
                }
                var_19 = (min((((((min(var_8, -409908819))) ? (!var_2) : (min(8067334442765341088, var_0))))), -var_2));
            }
        }
    }
    var_20 = ((var_11 ? 11137789331225236930 : (min(11137789331225236930, -32766))));
    var_21 = var_2;
    var_22 = (((var_10 && var_5) % 8553839954815116917));
    #pragma endscop
}
