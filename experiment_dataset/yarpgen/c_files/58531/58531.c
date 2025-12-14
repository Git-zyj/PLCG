/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_4, -2147483622)) != (var_6 & var_5))) ? ((((var_3 == (-2147483597 + 16786856891092703121))))) : var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = 16131602799284383427;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = 1;
                            var_15 = (min(var_15, (((-(min((var_10 << 1), ((var_9 ? var_6 : var_8)))))))));
                        }
                    }
                }
                var_16 = (max(var_16, (((+(((((min((arr_2 [i_0]), (arr_12 [i_0] [i_1] [8] [i_0] [12] [i_0])))) == (var_0 - 1)))))))));
            }
        }
    }
    var_17 += (!-2147483597);
    var_18 = (!1);
    #pragma endscop
}
