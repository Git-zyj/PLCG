/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74405
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)15971)) >> (((((/* implicit */int) var_14)) - (33346))))) << ((((-(var_13))) - (8288232266463518849ULL)))))) ? (((unsigned int) ((((/* implicit */_Bool) 8548062984155297687LL)) ? (((/* implicit */unsigned long long int) var_11)) : (var_13)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((4U) << (((/* implicit */int) (_Bool)1))));
        var_16 *= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_5))));
        arr_5 [i_1] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_8 [i_1]);
                    var_19 = ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((arr_8 [0U]) == (arr_8 [(signed char)16]))))))));
    }
}
