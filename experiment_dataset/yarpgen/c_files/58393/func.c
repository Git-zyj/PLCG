/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58393
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
    var_17 = ((/* implicit */unsigned char) var_6);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */unsigned long long int) var_11)), (6346917018865844633ULL))) : (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))))) ? (((/* implicit */int) ((unsigned short) ((unsigned long long int) var_4)))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) > (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) | (((/* implicit */int) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) ((unsigned char) arr_5 [i_0] [i_1])))))))))));
                var_20 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(1183690632)))))))));
                arr_6 [(unsigned short)0] [i_1] [(unsigned short)0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (unsigned short)13229)), (4602678819172646912ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)13229)))) != (max((((/* implicit */unsigned int) max(((unsigned char)183), ((unsigned char)1)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (var_9)))))));
}
