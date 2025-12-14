/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88556
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
    var_13 = ((/* implicit */unsigned char) var_7);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24118)) ? ((-(((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1579485345U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) -3078088585354922948LL)) || (((/* implicit */_Bool) var_6))))) / (min((((/* implicit */int) (signed char)112)), (519246350))))))));
    var_15 = ((/* implicit */short) max((var_15), (var_12)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((~((-(arr_3 [i_1] [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                arr_5 [(unsigned char)10] = ((/* implicit */long long int) (~((+(((((/* implicit */int) (unsigned short)54390)) / (((/* implicit */int) (unsigned char)177))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_10)) + (var_8))), (((/* implicit */int) arr_2 [17]))))) ? (((/* implicit */unsigned long long int) (~(((((var_0) + (2147483647))) << (((((/* implicit */int) var_10)) - (141)))))))) : ((~(min((((/* implicit */unsigned long long int) var_11)), (arr_0 [i_0])))))));
            }
        } 
    } 
}
