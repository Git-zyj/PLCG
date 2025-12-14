/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58904
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((short) arr_0 [i_0])))));
                var_18 += (-((+(((/* implicit */int) var_15)))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) var_15))), ((-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_12);
    var_21 = ((/* implicit */unsigned int) ((long long int) 0U));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) -8685620381151139412LL)) || (((/* implicit */_Bool) (signed char)19)))))));
}
