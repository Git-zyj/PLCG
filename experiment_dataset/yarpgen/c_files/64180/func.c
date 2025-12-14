/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64180
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned short)7] [i_1] [i_1])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)-20))))) : (-3067486231920837620LL))) : (((/* implicit */long long int) (+(((/* implicit */int) max((var_13), ((short)-30181)))))))));
                    var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)-15751)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (((long long int) var_0))));
    }
    var_21 = ((/* implicit */long long int) var_13);
    var_22 = ((/* implicit */int) ((((_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_14)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))))));
}
