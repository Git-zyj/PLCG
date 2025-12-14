/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70850
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_10))))) : (((/* implicit */int) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)512)) || (((/* implicit */_Bool) (short)501))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1 + 1]))));
                    arr_11 [1] [i_0] [i_1] [(_Bool)0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)69)), (9223372036854775807LL)))), (274861129728ULL))), (((/* implicit */unsigned long long int) 9223372036854775803LL))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 *= ((/* implicit */unsigned int) (!(arr_13 [(short)13] [i_3])));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_12 [i_3] [i_3])))), (((int) min((arr_13 [i_3] [i_3]), (var_11))))));
        var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10449)) ? (((/* implicit */int) (short)28205)) : (((/* implicit */int) (short)8188))))) ? (((/* implicit */int) ((var_17) == (((/* implicit */int) arr_13 [i_3] [i_3]))))) : (((/* implicit */int) var_5)))) & ((+(((/* implicit */int) arr_12 [i_3] [i_3]))))));
        arr_15 [11] |= ((/* implicit */short) ((int) max((var_1), (((/* implicit */unsigned char) arr_13 [i_3] [i_3])))));
    }
}
