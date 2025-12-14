/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60095
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
    var_11 = var_5;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((var_9) ? (min((((((/* implicit */int) var_1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (short)12174))))) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) >= (((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (signed char)-26))))))))))));
                    var_13 -= ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (unsigned char)49)), (288230376151711743ULL)))));
                    var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (-1832919828)))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_5);
}
