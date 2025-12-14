/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5611
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
    var_20 = ((/* implicit */short) (((((~(4244476022U))) >= ((~(50491273U))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) (signed char)100)), (4244476023U)))))) : (var_18)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((~(50491273U)))));
        arr_3 [(unsigned char)22] &= ((/* implicit */short) min((((50491274U) & (((/* implicit */unsigned int) -1857623674)))), (((((/* implicit */_Bool) (signed char)100)) ? (4244476043U) : (((/* implicit */unsigned int) 672343944))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(4244476018U)))) && (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (short)32767))))) < (((50491273U) ^ (4244476023U)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) min(((((((((~(2147483647))) + (2147483647))) + (2147483647))) << ((((((_Bool)1) ? (4244476022U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (4244476022U))))), (((/* implicit */int) (unsigned short)65528))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(2147483647)))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (4244476008U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((~((((_Bool)1) ? (4244475988U) : (4244476022U)))))));
}
