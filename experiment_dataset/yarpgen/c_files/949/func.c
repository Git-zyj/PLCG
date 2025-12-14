/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/949
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_19)), ((unsigned char)21)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_17)), (var_3)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)12))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) : (max((((/* implicit */long long int) var_10)), ((-(-5244252845711663924LL))))))))));
    var_21 = ((/* implicit */signed char) min((max((((/* implicit */int) min((var_19), ((signed char)-50)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)114)))))), (((/* implicit */int) (signed char)-24))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_22 *= (unsigned char)21;
        var_23 *= ((/* implicit */signed char) min((var_8), (((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned char)253)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25)))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_24 &= ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)6)), (min((((/* implicit */long long int) var_1)), (-7138292854795840205LL)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
            {
                {
                    var_25 *= ((/* implicit */unsigned char) (~(max((max((77377055486339754LL), (((/* implicit */long long int) (unsigned char)6)))), (((/* implicit */long long int) (signed char)101))))));
                    arr_13 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL)))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (long long int i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_26 = ((/* implicit */signed char) var_3);
                        arr_27 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned char) var_2);
                        var_27 = (signed char)-13;
                    }
                } 
            } 
        } 
        var_28 = var_11;
    }
}
