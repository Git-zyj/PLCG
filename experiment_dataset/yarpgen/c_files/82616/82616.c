/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((65535 ? -7154705603864647098 : 67108863)) + 9223372036854775807)) >> ((((67108860 ? 70 : 6225226005926267974)) - 35))))));
                    var_15 = (min(var_15, (-67108887 >= 67108850)));
                    var_16 += (min(9220951932238605073, 48));
                    arr_10 [i_2] [i_2] |= (arr_8 [i_0] [i_1] [i_2]);
                    var_17 += var_9;
                }
            }
        }
        var_18 &= (((arr_3 [i_0]) <= (((1 > (-47 || 1346926722))))));
    }
    var_19 -= (((((var_3 ^ ((var_12 ? var_1 : var_5))))) ? var_5 : 16738790852931154188));
    #pragma endscop
}
