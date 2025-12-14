/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60634
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
    var_18 = ((unsigned long long int) min(((~(var_16))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((var_5) - (2221652753U))))))));
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (min((max((((/* implicit */long long int) 717880849)), (var_16))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) > (var_0)))))));
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 9223372036854775807LL))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_5))))))) ? (((/* implicit */int) (unsigned char)173)) : ((((_Bool)0) ? (1775589228) : (((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_21 |= (unsigned char)155;
            var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned char) ((unsigned short) arr_5 [1] [i_0] [i_1]));
        }
        for (short i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -5725618407570013098LL)) : (arr_2 [i_0])))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)118)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151)))))))))));
            arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) (+(arr_6 [(unsigned char)3])))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2 + 4])));
        }
        arr_10 [(unsigned short)14] = ((/* implicit */unsigned int) (unsigned char)145);
        arr_11 [6ULL] = ((/* implicit */unsigned short) 5725618407570013097LL);
    }
}
