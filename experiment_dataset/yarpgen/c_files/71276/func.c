/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71276
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
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (signed char)31))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1073741824U)) ? (3065395514U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [(unsigned char)3] [i_1 - 1]))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)9960))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (short)0);
}
