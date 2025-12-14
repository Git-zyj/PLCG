/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94595
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
    var_18 = ((/* implicit */_Bool) (~(min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) var_7))), ((-((+(arr_3 [(_Bool)1] [i_0 + 1])))))));
                var_20 = ((/* implicit */unsigned long long int) ((int) (short)-1));
                var_21 = ((/* implicit */short) min(((-(((/* implicit */int) (unsigned short)64031)))), (((int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_11)))))));
                arr_4 [14U] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)83)) ? (-1382893778) : (2097151)));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)12)) << (((868537405) - (868537382)))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((var_3) >= (var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2216210234238202981LL)))))) : (var_9)));
}
