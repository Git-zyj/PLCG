/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61134
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
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) var_8)) & (var_5)));
    var_13 = ((((((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned short)65535)))) & (((/* implicit */int) (short)15414)))) == (((((((/* implicit */int) var_7)) % (((/* implicit */int) (short)-7917)))) % (((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 |= ((/* implicit */long long int) 7696581394432ULL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_15 = arr_2 [i_0];
                var_16 = ((/* implicit */unsigned char) (short)-9131);
            }
            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])) < (((/* implicit */int) arr_3 [i_1]))));
            arr_9 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_1])) >= (arr_5 [3LL] [i_0] [i_1]))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_19 -= ((/* implicit */short) arr_11 [i_3]);
            var_20 = ((/* implicit */unsigned long long int) (-(arr_12 [i_3 + 1])));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)255))))) + (arr_11 [i_3 + 1])));
            var_22 = ((/* implicit */short) arr_12 [(short)4]);
        }
        var_23 = ((/* implicit */unsigned char) ((arr_11 [i_3 + 1]) / (arr_11 [i_3 + 2])));
    }
    var_24 ^= ((/* implicit */unsigned char) (+(67108800U)));
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_9))))))))));
}
