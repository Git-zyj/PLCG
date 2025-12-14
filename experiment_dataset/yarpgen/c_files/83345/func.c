/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83345
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 4282509180U)))))))), ((+(arr_0 [(unsigned char)21]))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_10))))), (min((12458115U), (((/* implicit */unsigned int) 1547706611))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) : (arr_2 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)63))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (-(arr_7 [i_0] [i_0] [i_2])));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1547706606)) ? (((/* implicit */int) (short)-16813)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0] [20LL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)45)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */long long int) -1547706607)) != (var_4))))))) : (12458128U))))));
                }
            } 
        } 
    }
    var_18 += ((/* implicit */short) (-(var_3)));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) - (((((18446744073709551600ULL) + (var_0))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6)))))))));
}
