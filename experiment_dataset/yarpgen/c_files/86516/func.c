/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86516
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
    var_10 = var_9;
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) max((var_4), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) min((((unsigned short) arr_1 [i_0])), (((/* implicit */unsigned short) arr_1 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_13 = ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) arr_3 [i_0] [i_1])));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_1])) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3666304729U))))))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (short)-32758))));
            var_16 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (514595828)))));
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
            var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)32767)), (514595855)));
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */int) arr_3 [24U] [i_2])) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)16]))))) - (4294967226U)))));
        }
        var_18 = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        var_19 &= ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_3 [i_3] [i_3 - 2])));
        var_20 = ((/* implicit */short) var_5);
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)38))));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_3] [i_3])))));
    }
    var_23 = ((/* implicit */short) ((1422587617U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))));
}
