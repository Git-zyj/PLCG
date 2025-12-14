/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56360
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
    var_11 = ((/* implicit */signed char) var_8);
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) (+(((var_2) << (((((((/* implicit */_Bool) -2690176145299119765LL)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_6 [i_2] [i_1] [(short)2] [i_0])))) + (53)))))));
                    var_14 *= ((/* implicit */unsigned int) ((min((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_10)))))) / ((-((+(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned int) var_10))));
}
