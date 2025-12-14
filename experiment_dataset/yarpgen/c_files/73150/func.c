/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73150
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
    var_19 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((2147483635) ^ (111047577))), (((/* implicit */int) (signed char)1))))), (var_2)));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_20 = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4]))) - (var_14))), (max((((/* implicit */unsigned int) ((signed char) (_Bool)1))), (arr_2 [i_0 + 1] [i_0]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) + (((/* implicit */int) (short)-17601))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((max((arr_3 [i_0 - 1]), (((/* implicit */int) var_15)))) <= (min((arr_3 [i_0 - 3]), (((/* implicit */int) arr_0 [i_0 - 4]))))));
                    var_23 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), ((~(((((/* implicit */int) var_3)) << (((/* implicit */int) var_15))))))));
                    var_24 ^= ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_0 [i_0]))))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_3 + 1])) : (var_6))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
        var_26 = ((/* implicit */signed char) ((long long int) (signed char)11));
    }
    var_27 = ((/* implicit */signed char) var_17);
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)92))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-3011)) : (((/* implicit */int) (_Bool)1))))))) : (min(((+(var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_15)), (var_3)))))))))));
}
