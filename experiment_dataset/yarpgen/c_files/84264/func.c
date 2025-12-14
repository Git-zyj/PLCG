/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84264
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
                var_19 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) (-(((/* implicit */int) arr_2 [i_1]))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) 287063589);
    var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (max((var_12), (((/* implicit */unsigned long long int) (unsigned short)3005)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) -417323932)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1863))) : (var_1))))))));
}
