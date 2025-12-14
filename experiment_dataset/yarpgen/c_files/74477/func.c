/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74477
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_17 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((var_6) - (var_4)))), (min((-4308032760580793442LL), (-2216431882706795578LL)))));
        var_18 -= max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) var_1))), (var_4)))), (min((max((var_2), (var_1))), (var_14))));
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) var_13);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(min((((/* implicit */long long int) var_6)), (var_13))))))));
        var_20 -= var_0;
    }
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (signed char)-1)), (var_5)))))) : (max((((/* implicit */long long int) var_11)), (max((4308032760580793442LL), (((/* implicit */long long int) var_7))))))));
    var_22 *= ((/* implicit */signed char) (+(((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (var_15))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_24 = (+(-4308032760580793442LL));
            var_25 &= ((((/* implicit */_Bool) 1626371361U)) ? (((/* implicit */long long int) var_3)) : (4308032760580793440LL));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (var_12)));
        }
        var_28 = ((/* implicit */long long int) min((var_28), (min((var_14), (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-4308032760580793450LL))) % (min((((/* implicit */long long int) var_5)), (4308032760580793440LL)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_29 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)30)))) != (((((/* implicit */_Bool) (signed char)51)) ? (var_14) : (((/* implicit */long long int) var_5))))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) min((((4308032760580793442LL) - (((/* implicit */long long int) ((/* implicit */int) var_7))))), (var_1))))));
    }
}
