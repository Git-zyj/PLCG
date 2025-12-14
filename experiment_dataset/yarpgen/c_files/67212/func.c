/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67212
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
    var_13 = ((/* implicit */unsigned long long int) -1673143244);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_14 += ((/* implicit */unsigned long long int) (~(var_12)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)14178))))));
            var_15 = ((2083855174U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))));
            var_16 = var_3;
        }
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_9 [3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */long long int) ((1673143243) << (((arr_2 [i_2] [i_2] [7]) - (526371529918634299ULL)))))) : ((-(var_2)))))) & ((~(((var_7) ? (((/* implicit */unsigned long long int) -1673143239)) : (var_8)))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(1673143238)))), (min((((((/* implicit */_Bool) (unsigned char)41)) ? (4454594897590049630ULL) : (var_5))), (((/* implicit */unsigned long long int) (~(var_0)))))))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 24; i_3 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -1673143239)) ? (((/* implicit */int) (short)-10833)) : (((/* implicit */int) (unsigned short)65493))));
        var_19 ^= (-(((/* implicit */int) var_3)));
    }
}
