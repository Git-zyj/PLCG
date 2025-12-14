/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87224
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
    var_15 ^= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) var_8)) & (var_10)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7255521983404075794LL)) ? (((/* implicit */int) (short)12127)) : (((/* implicit */int) (short)-12127))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 *= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_5 [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) (~(9895674803894499920ULL)))) ? (((((/* implicit */_Bool) (short)-12122)) ? (((/* implicit */int) (short)-12127)) : (var_5))) : (((((/* implicit */int) (signed char)121)) * (((/* implicit */int) (unsigned char)58)))))) + (2147483647))) << (((((((/* implicit */int) var_9)) + (25104))) - (16)))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) -1771150466)) ? (((/* implicit */int) (short)-12122)) : (((/* implicit */int) arr_3 [i_0 + 3])))) & (((/* implicit */int) (short)12118)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (short)3046))));
}
