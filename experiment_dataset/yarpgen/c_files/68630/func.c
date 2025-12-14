/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68630
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8157))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)65504))))) ? (4162462366U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+(((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max((3269829912U), (((/* implicit */unsigned int) (_Bool)1)))))))))));
        var_12 = ((/* implicit */long long int) var_2);
    }
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (unsigned char)255))));
}
