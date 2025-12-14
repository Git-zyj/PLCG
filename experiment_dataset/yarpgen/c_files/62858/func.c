/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62858
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 8388608U))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) (_Bool)1)) - (524160)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_1])));
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((arr_3 [i_1]) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)1))));
        }
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35917)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (signed char)-81))));
    }
    var_19 = ((/* implicit */int) var_4);
    var_20 += ((/* implicit */short) var_2);
    var_21 = var_2;
}
