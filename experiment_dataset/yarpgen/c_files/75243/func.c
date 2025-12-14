/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75243
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
    var_15 = ((/* implicit */int) ((unsigned char) var_4));
    var_16 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_14)))), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (-2726789051392368588LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (9007199254740990LL)))) && ((!(((/* implicit */_Bool) var_0))))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_8 [(signed char)7] [i_2] [i_0] [i_0] [i_0] [i_0] = (~(min((((/* implicit */long long int) arr_3 [i_1 - 1] [i_0])), (arr_0 [i_0]))));
                        var_18 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (max((arr_6 [i_3] [i_3] [i_2] [i_0] [i_0]), (arr_6 [i_3 - 2] [i_2] [i_1] [i_1 + 1] [i_0])))));
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((-2726789051392368588LL) ^ (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */int) ((2726789051392368587LL) > (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
