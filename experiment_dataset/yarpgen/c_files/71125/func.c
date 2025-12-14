/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71125
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 6; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (107625680U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((unsigned int) arr_3 [i_1 + 4] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)255), (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 3])))))));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)237)), (3716618648U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 3] [i_2 + 2])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [(_Bool)1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [5U] [i_1] [5U]))) : (3151638796912229635ULL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_12);
    var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
}
