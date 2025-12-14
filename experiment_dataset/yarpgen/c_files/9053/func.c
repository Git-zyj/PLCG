/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9053
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
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) var_11);
                    var_16 &= ((/* implicit */int) ((1040384U) - (((((/* implicit */_Bool) 2448682003U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2448682003U)))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(var_10)))) > (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned int) var_10)) : (4294967295U))))))) : (max((((((/* implicit */_Bool) 2448682003U)) ? (((/* implicit */unsigned int) var_10)) : (4294967295U))), (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned char)255))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((min((((/* implicit */unsigned int) (_Bool)1)), (var_0))) & (((/* implicit */unsigned int) var_10)))), (max((((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (297965270) : (((/* implicit */int) (_Bool)1)))))))));
}
