/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76395
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
    var_10 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) 546636883U))))))));
    var_11 = ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(signed char)2] [(unsigned char)4] = ((/* implicit */short) var_3);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_13 *= ((/* implicit */unsigned char) arr_4 [3] [3] [i_1]);
            arr_5 [i_0] [(signed char)1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-234278712) | (((/* implicit */int) (unsigned char)232))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)146)))))))) * (var_1)));
            arr_6 [(signed char)15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((_Bool) (unsigned char)244))) : ((~(((/* implicit */int) (unsigned char)53)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_14 = ((/* implicit */long long int) max((var_14), (var_7)));
                arr_11 [i_0] [i_0] [i_0] [(signed char)14] = (signed char)-24;
                arr_12 [i_0] [i_0] = ((/* implicit */int) ((_Bool) -234278712));
                var_15 &= ((/* implicit */unsigned char) ((arr_9 [i_0] [i_1] [(_Bool)1]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)255)))))));
                arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) (short)-21425)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)237)) - (100250380))))));
            }
            var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_8 [i_0] [i_0] [i_0])))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_1])))) : ((~(((/* implicit */int) arr_7 [i_0] [i_1])))))) | (((/* implicit */int) ((((int) arr_4 [(unsigned char)10] [i_0] [i_1])) > (((/* implicit */int) (signed char)24)))))));
        }
        arr_14 [i_0] = (signed char)-7;
    }
}
