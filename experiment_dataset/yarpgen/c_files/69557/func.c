/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69557
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
    var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8))))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)8192), (((/* implicit */short) (signed char)-42)))))))) : (max((((2634103315U) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */unsigned int) max(((short)2047), (((/* implicit */short) (unsigned char)120)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)42))) : (var_6))) != ((~(-6968193705866208492LL)))))) / (((/* implicit */int) (unsigned char)63))));
}
