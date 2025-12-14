/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_1 ? ((((var_2 != 0) << ((((var_4 ? (-32767 - 1) : 1)) + 32779))))) : ((7424474656430222641 ? ((41188 ? 4294967290 : 3515523305)) : 24369))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 |= var_6;
                    var_12 = max(41188, (((max(-1, 41181)) & (min(2147483647, 9223372036854775807)))));
                    var_13 = 4240812943;
                    var_14 *= (31825 & 24348);
                    var_15 *= ((((~(127 % -7031419757494569149))) % 41188));
                }
            }
        }
    }
    #pragma endscop
}
