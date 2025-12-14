/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66200
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
    var_18 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) (signed char)55)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) : (var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((8581545984LL), (arr_4 [i_0 - 2] [i_0 - 2])))) ? (((((_Bool) var_0)) ? (max((12692757305036874343ULL), (((/* implicit */unsigned long long int) 4541055195707529LL)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_9))))) : (((/* implicit */unsigned long long int) var_14))));
                var_21 = max((((/* implicit */unsigned int) (signed char)-123)), (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0 - 3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : ((+(11399054261705355164ULL)))));
            }
        } 
    } 
}
