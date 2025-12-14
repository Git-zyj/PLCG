/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67119
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
    var_18 |= ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))));
    var_19 = (~(((((/* implicit */int) min(((unsigned char)134), (((/* implicit */unsigned char) (signed char)112))))) | (((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2 - 1] = ((/* implicit */unsigned char) min((((arr_7 [i_0] [(unsigned char)16]) + (((/* implicit */long long int) ((arr_3 [i_1]) + (((/* implicit */int) var_11))))))), (((/* implicit */long long int) min(((signed char)127), ((signed char)-112))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_1 + 2] [i_1 + 2]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))) - (arr_7 [i_1 + 2] [i_1 + 2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)111))));
}
