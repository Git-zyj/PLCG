/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80102
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((arr_7 [i_1]) ^ (((/* implicit */int) (signed char)-125))));
                    var_16 = ((/* implicit */_Bool) (~(((int) ((unsigned int) arr_1 [i_2])))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13818345U)) || (((/* implicit */_Bool) -1))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-12)) >= (((/* implicit */int) (unsigned short)12003)))))) + (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4273272089U)))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) var_7)) ? (19392420893564257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((16342233433759315663ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
