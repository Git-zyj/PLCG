/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63569
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
    var_14 *= ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)168))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
        arr_3 [(unsigned short)6] |= arr_0 [i_0];
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned short)16384))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((signed char) arr_1 [i_0 - 3])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14353)) ? (((/* implicit */int) var_2)) : ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)26506)) >= (((/* implicit */int) (unsigned char)253))))) : (((/* implicit */int) arr_0 [i_1]))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_5 [2U]))));
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_13))));
}
