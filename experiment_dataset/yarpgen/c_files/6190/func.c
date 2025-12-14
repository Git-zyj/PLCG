/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6190
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) (unsigned short)13)), (9223372036854775807LL)))));
        var_14 += ((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]);
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_15 = ((/* implicit */int) arr_4 [i_1] [i_1]);
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_6 [i_1] [(unsigned short)19] [(unsigned short)19])) : (((/* implicit */int) (_Bool)0)))))))));
        }
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_17 -= ((/* implicit */short) ((unsigned long long int) min((((/* implicit */signed char) arr_4 [16ULL] [16ULL])), (arr_3 [i_1 + 2]))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) (unsigned short)29))))))));
            arr_10 [i_1] [12ULL] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1 + 2] [i_1]);
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_13 [i_1] = ((/* implicit */short) arr_6 [i_1] [i_4] [i_1 + 2]);
            var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) > (2615569200U));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_1 - 1] [i_1 + 1])) ? (576460752303423487LL) : (((/* implicit */long long int) var_3))));
        }
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~((+(((/* implicit */int) arr_4 [(short)0] [i_1 - 1])))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5] [i_5]))))));
        arr_16 [i_5] = ((((_Bool) min((2523837074U), (((/* implicit */unsigned int) arr_15 [i_5] [i_5]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_5] [(unsigned short)7])));
    }
    var_23 &= (_Bool)0;
    var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) min(((unsigned short)13), ((unsigned short)17834))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (min((var_0), (((/* implicit */unsigned int) (unsigned short)17))))))))));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) == (((((/* implicit */_Bool) 0LL)) ? (min((3776339850U), (((/* implicit */unsigned int) (_Bool)1)))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))))))))))));
}
