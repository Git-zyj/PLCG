/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87195
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */unsigned char) (!(var_6)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_0]))))));
        var_17 |= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_18 ^= ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((6U), (((/* implicit */unsigned int) (_Bool)1))))), (arr_2 [(unsigned short)16]))), (((/* implicit */long long int) arr_0 [i_0] [(unsigned short)10]))));
            var_20 *= ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1]);
            var_21 += arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1];
            var_22 = (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])));
        }
    }
}
