/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59785
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
    var_19 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) min((var_18), (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) : (arr_0 [i_0])))))) ? (max((((/* implicit */unsigned int) max(((unsigned short)7140), (((/* implicit */unsigned short) (signed char)-122))))), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))));
                var_21 = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_1] [i_0]))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)166);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (unsigned short)2))));
}
