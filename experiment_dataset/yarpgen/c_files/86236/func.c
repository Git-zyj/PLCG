/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86236
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
    var_10 ^= ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_1 + 2] [i_1]))));
                var_12 = ((/* implicit */unsigned char) min((((arr_2 [i_1] [i_1 + 3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) != (3071976429U))))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned char) arr_0 [i_1] [i_0])), ((unsigned char)33))), ((unsigned char)33))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (39329888577103926LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47190)))))) || (arr_0 [i_0] [i_1 - 2]))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_1])) > (arr_3 [i_0] [i_0])))) : (((((((/* implicit */int) (signed char)-68)) & (((/* implicit */int) (unsigned short)17392)))) & (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_1 [i_1]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_3);
    var_14 ^= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)16))))), (var_0)))));
}
