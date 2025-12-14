/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56421
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)35)), (arr_1 [i_1] [i_0]))) < (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))))));
                var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)35)) >> (((((/* implicit */int) arr_2 [(unsigned char)8] [i_1])) - (45572)))))), (arr_3 [i_0])))) ? (((/* implicit */int) (unsigned char)224)) : ((~(((/* implicit */int) ((unsigned short) (unsigned short)37836)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)35)), ((unsigned short)17)));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_4)))))));
}
