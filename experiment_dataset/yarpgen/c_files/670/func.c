/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/670
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
    var_19 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((-1LL) + (min((((/* implicit */long long int) (signed char)64)), (8510042986640632383LL)))))) ? (((((/* implicit */_Bool) 614005874U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (8510042986640632372LL))) : (((/* implicit */long long int) ((int) max((((/* implicit */unsigned char) (signed char)60)), ((unsigned char)165))))));
        arr_4 [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) 4294967286U))), (max((7978645155087435447LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65515)))))))));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (11818318309821429734ULL) : (((/* implicit */unsigned long long int) 614005874U))))) ? (2721857378U) : (((unsigned int) (signed char)113))))) ? (arr_0 [i_0 - 1]) : (max((((/* implicit */int) ((arr_0 [14LL]) == (((/* implicit */int) (signed char)41))))), (arr_2 [i_0 - 2])))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) min((6628425763888121881ULL), (((/* implicit */unsigned long long int) ((-7978645155087435447LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))))));
        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) max((-27LL), (((/* implicit */long long int) (signed char)-80))))) ? (((unsigned int) ((_Bool) (signed char)-61))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [4])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_22 = ((/* implicit */int) 3896944180U);
        var_23 = (unsigned short)59386;
    }
    var_24 = ((/* implicit */unsigned short) 614005874U);
}
