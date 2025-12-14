/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7198
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
    var_14 = ((/* implicit */int) min((var_14), (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)58)))) : (max((arr_2 [1U]), (var_4)))))));
                var_15 *= ((/* implicit */short) arr_2 [(unsigned short)2]);
            }
        } 
    } 
    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (965137241) : (var_10)))) : ((~(var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~(((unsigned long long int) arr_6 [i_2] [i_2])))))));
        var_18 = ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [14ULL])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_20 += ((/* implicit */unsigned long long int) arr_8 [i_3]);
        var_21 |= ((/* implicit */short) ((unsigned char) arr_9 [i_3]));
        arr_10 [(short)1] [i_3] |= ((/* implicit */unsigned int) arr_6 [i_3] [i_3]);
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_4))));
    }
}
