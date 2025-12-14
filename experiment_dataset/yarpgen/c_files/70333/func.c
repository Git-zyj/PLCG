/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70333
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
    var_19 = ((/* implicit */long long int) var_15);
    var_20 = ((/* implicit */unsigned short) min((var_20), (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_21 = arr_1 [i_0] [i_0];
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)39349)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (signed char)119))))));
                        var_23 = var_14;
                    }
                } 
            } 
        } 
        var_24 = arr_3 [(signed char)9] [i_0] [i_0];
        var_25 -= ((/* implicit */signed char) ((arr_3 [7LL] [i_0] [7LL]) << (((((/* implicit */int) (signed char)127)) - (124)))));
    }
}
