/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57214
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */unsigned long long int) 2759125953U)) == (((((/* implicit */unsigned long long int) min((arr_2 [7U] [i_0] [i_1]), (((/* implicit */int) arr_1 [i_1]))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_2 [2U] [i_1] [i_0])) : (var_5)))))))));
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned int) 13ULL)))));
                var_17 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)9))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((_Bool) 1450021782381178161ULL)))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_0))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (+(((((18446744073709551579ULL) << (((/* implicit */int) (unsigned char)34)))) >> ((((~(var_11))) - (11241917284923063473ULL)))))));
    var_21 = ((/* implicit */unsigned int) var_1);
    var_22 = ((/* implicit */unsigned short) var_8);
}
