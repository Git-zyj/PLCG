/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90428
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) / (((/* implicit */long long int) arr_1 [(short)18] [i_1]))))) ? (max((var_12), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)200), ((unsigned char)54)))))))) ? (((((/* implicit */_Bool) (short)-128)) ? (max((9712541569183713966ULL), (((/* implicit */unsigned long long int) (unsigned char)200)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)200), ((unsigned char)200))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-150)) + (2147483647)))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-134)) ? (983040U) : (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (signed char)-66)))))))) ? (((unsigned long long int) arr_3 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32619)))));
            }
        } 
    } 
    var_16 &= ((/* implicit */short) 4293984256U);
    var_17 = ((/* implicit */signed char) (short)140);
}
