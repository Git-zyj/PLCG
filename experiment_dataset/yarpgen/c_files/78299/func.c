/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78299
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
    var_12 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))), (((((/* implicit */long long int) 2147483647)) % (1400104822619495406LL)))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_2))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) var_4)))))))) || ((!((!(((/* implicit */_Bool) var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (-((-((+(var_3)))))));
                var_15 = ((/* implicit */short) var_9);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : ((-(var_3))))))))));
}
