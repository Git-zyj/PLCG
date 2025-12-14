/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91159
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((arr_0 [i_2] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]))))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_0])))) : ((~(((/* implicit */int) arr_3 [i_0]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_9))))))) : ((+(((/* implicit */int) max((var_0), (var_3))))))));
}
