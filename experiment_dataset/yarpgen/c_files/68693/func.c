/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68693
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
    var_15 |= ((/* implicit */int) (unsigned short)53128);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] |= ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1]);
                var_17 &= ((/* implicit */int) (unsigned short)53128);
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_9))))), ((~(1734902754592980157ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12390))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) + ((~(arr_2 [(short)13] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] [(signed char)14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_1] [(signed char)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-6597462330900946333LL))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) / (var_0))))) + (((/* implicit */long long int) ((/* implicit */int) (short)12941)))));
            }
        } 
    } 
}
