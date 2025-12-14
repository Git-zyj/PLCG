/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70440
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
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) (~(1294015751U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((3777058708U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)1477))))))) : (3365296952085893064LL)))));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) max((var_12), (((/* implicit */long long int) (short)1477))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)169))))), ((unsigned char)0)));
                var_19 += ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_11)))) ? (((unsigned int) 3506325496465654481ULL)) : (0U)))) ? (((/* implicit */int) (short)1481)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1478)) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_7)))) : (((/* implicit */int) arr_0 [i_0] [i_1 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) -7334894978203925923LL);
}
