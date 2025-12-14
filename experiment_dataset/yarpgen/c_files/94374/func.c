/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94374
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
    var_20 = ((/* implicit */unsigned long long int) (-(4035588528901234826LL)));
    var_21 = ((/* implicit */_Bool) var_18);
    var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (~(4164995374U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned int) var_16)), (var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((129971934U), (((/* implicit */unsigned int) (_Bool)1))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)123)) == (-1)));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) max((max((507904U), (((/* implicit */unsigned int) arr_0 [i_0])))), ((-(1869635471U)))))) : (max((((/* implicit */long long int) var_14)), (arr_1 [i_1 + 2] [i_1 - 1])))));
            }
        } 
    } 
}
