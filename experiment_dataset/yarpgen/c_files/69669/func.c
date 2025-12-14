/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69669
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 2]) | (((((arr_0 [(unsigned short)4]) + (9223372036854775807LL))) >> (((arr_1 [i_0]) - (135860211)))))))) : (((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_1 [i_0]) - (135860256)))))) ^ (((var_6) & (((/* implicit */unsigned long long int) var_12)))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) var_7);
            arr_5 [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) arr_3 [i_0 + 2] [i_1 - 3]))))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_14 ^= (!(((/* implicit */_Bool) arr_8 [13] [13] [(_Bool)1])));
            var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
        arr_10 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)179)))))))));
        var_17 -= ((/* implicit */unsigned int) arr_7 [(signed char)5] [i_0] [i_0]);
    }
    for (short i_3 = 3; i_3 < 20; i_3 += 1) 
    {
        arr_13 [i_3 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_11 [i_3])))) ? (((/* implicit */int) (unsigned short)29931)) : ((+(((/* implicit */int) arr_12 [i_3]))))))) ? (((min((484521493927785023LL), (arr_11 [i_3]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)15]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3])))));
        var_18 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (arr_11 [i_3])));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-107)) > (((/* implicit */int) (_Bool)1))))) : (min((((((/* implicit */int) arr_12 [(_Bool)1])) & (116883610))), (((/* implicit */int) max(((unsigned short)29926), (((/* implicit */unsigned short) (_Bool)0)))))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_4))));
    var_20 |= ((/* implicit */unsigned short) var_6);
    var_21 = (~(((/* implicit */int) (short)29127)));
}
