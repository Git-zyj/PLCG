/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_21 = ((1 ? 57 : 57));
                    var_22 = (((((57 ? 2096640 : 90))) ? -20345 : 1));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_23 = ((66 / (0 + 190)));
                    arr_14 [i_0] [i_1] = (((((1 ? 1 : 23566))) ? 190 : 18446744073709551615));
                    var_24 = (((((98 ? 7404 : 79))) ? (-32767 - 1) : ((1 ? 147 : -1))));
                    var_25 = ((((9223372036854775807 ? 1 : 87))) ? ((((((-58 ? 78 : 1)) > 65535)))) : 1006632960);
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_19 [i_0] [i_1] [i_1] = 1;
                    arr_20 [i_0] [i_1] [i_4] = ((((-58 ? 0 : 1)) % (((65516 ? 27 : (-2147483647 - 1))))));
                    var_26 ^= 1;
                }
                var_27 = ((15872 ? (-83084940 + 1) : (65001 * 1)));
            }
        }
    }
    var_28 ^= var_1;
    #pragma endscop
}
