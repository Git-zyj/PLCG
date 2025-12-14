/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8155
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_6))));
    var_13 -= ((/* implicit */unsigned short) 4948167405579965246ULL);
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) != (var_9))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) 9677179305716005455ULL);
                var_16 *= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)0])) / (((((/* implicit */int) arr_3 [4])) - (((/* implicit */int) max((arr_4 [i_0] [i_1] [(unsigned char)8]), (var_1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51888)) & (((/* implicit */int) (!((_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) <= (min((((/* implicit */unsigned long long int) var_8)), (var_11)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || ((!(var_8)))))))))));
}
