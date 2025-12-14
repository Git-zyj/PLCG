/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73061
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
    var_19 = ((/* implicit */int) min(((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3))))), (min((((/* implicit */unsigned long long int) ((long long int) var_15))), (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) var_5)) + (arr_1 [i_0]))) - (arr_1 [i_0]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_21 = ((/* implicit */_Bool) ((int) arr_1 [i_1 - 1]));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_22 ^= ((/* implicit */long long int) ((int) 0));
                        var_23 += ((/* implicit */unsigned short) ((int) (unsigned char)37));
                    }
                } 
            } 
            arr_12 [i_0] [8ULL] [10] &= ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) var_10))) + (2147483647))) << (((((/* implicit */int) arr_9 [4ULL] [i_0] [i_1 + 1] [i_1])) - (48569)))));
            arr_13 [i_1] = ((/* implicit */unsigned char) var_14);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_4 + 1] [i_0] [i_0] [i_4] [i_0])) ^ (((/* implicit */int) arr_10 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_25 = (_Bool)1;
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_3 [(unsigned char)0]))), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) (_Bool)0)))))))));
            var_26 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_9 [(short)6] [i_0] [i_0] [i_5])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [10] [10] [i_0] [10]))))));
            var_27 = arr_6 [i_0] [i_5];
        }
        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((18) ^ ((~(((/* implicit */int) arr_4 [i_0])))))))));
            var_29 -= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        var_30 = ((/* implicit */long long int) var_15);
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_31 *= ((/* implicit */long long int) ((_Bool) ((int) arr_22 [i_7])));
        var_32 *= ((/* implicit */signed char) ((int) (~(min((((/* implicit */unsigned long long int) var_6)), (arr_21 [i_7]))))));
        arr_23 [i_7] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_22 [i_7]))))));
        var_33 += ((/* implicit */_Bool) min((((/* implicit */int) var_16)), (((((/* implicit */int) (unsigned char)37)) >> (((arr_21 [i_7]) - (17443761310927849406ULL)))))));
    }
    var_34 = ((/* implicit */long long int) var_1);
}
