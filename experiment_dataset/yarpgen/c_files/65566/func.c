/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65566
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27313)))))) >> (((((((/* implicit */_Bool) -2225867632270559286LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (arr_0 [3]))) - (80ULL))))) >> (((/* implicit */int) ((arr_0 [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [(unsigned char)0]);
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_15 += ((/* implicit */_Bool) min((4231053430U), (((/* implicit */unsigned int) ((_Bool) arr_8 [i_0 + 1] [i_1 + 1] [i_2])))));
                arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) (!(var_1)));
            }
            arr_10 [(unsigned char)14] [i_0] = ((/* implicit */short) arr_7 [i_1] [(short)16] [i_0]);
            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_13)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (-1355530987) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(arr_3 [i_0] [i_1])))) : (var_2)))));
        }
        var_17 -= ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */short) arr_1 [i_0 - 1])), ((short)-13))));
        arr_11 [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (11U))), (((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_0] [i_0])))));
    }
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 ^= ((/* implicit */int) var_1);
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) | (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) (short)-14892)))) : ((~(((/* implicit */int) var_1)))))), ((+(((/* implicit */int) (unsigned short)20209))))));
}
