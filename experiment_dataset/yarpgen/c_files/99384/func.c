/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99384
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
    var_18 *= ((/* implicit */signed char) var_17);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_2);
        arr_4 [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 + 1])) % (((/* implicit */int) arr_2 [i_0 + 1]))));
        var_19 |= ((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [(short)11]) >= (arr_0 [i_0 + 1] [i_0])));
        var_20 = ((/* implicit */long long int) max((var_20), (((((var_14) & (((/* implicit */long long int) ((/* implicit */int) var_1))))) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((arr_0 [i_1] [(unsigned short)9]) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (28)))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_22 ^= (!((_Bool)0));
        var_23 = ((/* implicit */short) (((-(arr_7 [i_1]))) & ((+(((/* implicit */int) arr_2 [i_1]))))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 2]))) % (((((/* implicit */_Bool) var_5)) ? (16888796473904982228ULL) : (1557947599804569374ULL)))))));
        arr_10 [6] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_2 + 1]))));
        arr_11 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (short)1445))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min(((+(arr_14 [(signed char)16] [i_3] [i_3]))), ((-((-(((/* implicit */int) arr_2 [i_3])))))))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_3])) + (2147483647))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) - (arr_0 [(unsigned char)1] [15]))) - (7913826409137563556LL)))))) ? (((/* implicit */int) arr_13 [i_3] [i_4])) : ((~(((/* implicit */int) arr_13 [i_3] [i_3])))))))));
                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4]))));
                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_4])))))));
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) var_13);
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_16)))))))))));
}
