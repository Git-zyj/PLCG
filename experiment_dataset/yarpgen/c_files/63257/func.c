/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63257
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
    var_20 = ((/* implicit */unsigned int) (signed char)51);
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)76)) < (((/* implicit */int) (signed char)88))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (signed char)88)) ? (2333176364U) : (((/* implicit */unsigned int) var_1))))))));
    var_22 = ((/* implicit */unsigned int) (!((_Bool)1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) (+(-2015585110)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) 2015585109)) ? (3275040942U) : (((/* implicit */unsigned int) -1069389088))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_6))) > (((((/* implicit */int) (signed char)68)) << (((arr_0 [i_0] [13]) - (17705949855128128866ULL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_0] [i_0])));
    }
}
