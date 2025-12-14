/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89238
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
    var_17 -= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 -= (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56027))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56027)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((int) var_2))))), (max((((((/* implicit */_Bool) (unsigned short)9508)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11))), (max((arr_2 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) == (((/* implicit */int) var_1))))) : ((~(var_12)))));
                arr_6 [i_1] [i_0] [0] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
}
