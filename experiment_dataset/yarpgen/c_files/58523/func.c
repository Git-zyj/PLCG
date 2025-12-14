/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58523
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1069957769))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_0] [11U] [i_1 - 1] [i_2])), (max((((/* implicit */unsigned short) (signed char)14)), (var_6)))))) ? (((((/* implicit */_Bool) (unsigned short)56478)) ? (((2169415919U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24525))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (unsigned short)24527))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [(unsigned char)11])), (arr_8 [i_1] [i_2])))) && (((/* implicit */_Bool) ((signed char) var_6)))))))));
                    var_14 -= ((/* implicit */short) ((1223725962U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)6117)))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) var_6);
}
