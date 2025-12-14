/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66137
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
    var_11 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) var_9)))) + (2147483647))) >> (min((((((/* implicit */int) var_8)) % (((/* implicit */int) (signed char)126)))), (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) == (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2832)))))));
        var_12 -= ((/* implicit */signed char) (~(arr_2 [i_0 - 1] [i_0 + 1])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1]))));
        var_13 = ((/* implicit */_Bool) (unsigned short)20);
        arr_8 [i_1] [15] = ((/* implicit */unsigned short) (!(((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
    }
}
