/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80844
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)56308)) & (((/* implicit */int) (short)12288)))) >> (((((/* implicit */int) (signed char)-118)) + (133)))))), (var_1)));
    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned short)2568)) ? (2146471867) : (var_5)))))) ? (((/* implicit */unsigned long long int) ((var_19) >> (((var_5) - (2023651652)))))) : (0ULL)));
    var_22 *= ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) & (var_16))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))));
                    var_24 = ((/* implicit */signed char) (+((+(min((-1548754257290292030LL), (((/* implicit */long long int) (unsigned char)6))))))));
                }
            } 
        } 
    } 
}
