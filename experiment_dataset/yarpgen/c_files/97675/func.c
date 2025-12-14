/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97675
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
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)55)), ((unsigned short)44315)))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned short)11)))) : (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (arr_4 [i_1])))) - (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), ((unsigned char)36))))))));
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)220))))), (max((112), (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
