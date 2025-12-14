/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70260
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = arr_0 [i_0 - 2];
                    var_15 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [(unsigned short)9] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(short)19] [(short)19])) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_2])))) & (((/* implicit */int) var_5))));
                    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) : (var_9)))) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) arr_6 [i_1 + 2] [i_0 + 3] [i_0 + 3]))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) arr_6 [i_0 + 1] [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_18 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)44)))) + (((/* implicit */int) var_0))));
        var_19 = ((((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3] [i_3])) ? (arr_7 [i_3]) : (arr_8 [i_3]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned char)158))))));
        var_20 = ((((((/* implicit */_Bool) arr_2 [i_3] [i_3])) && (var_7))) || (((/* implicit */_Bool) 2111802176)));
    }
    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((long long int) var_4))) ? ((-(var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36678))))))), (((/* implicit */long long int) ((_Bool) min((var_2), (((/* implicit */int) var_13))))))));
}
