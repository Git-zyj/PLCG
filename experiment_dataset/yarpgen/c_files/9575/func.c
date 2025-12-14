/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9575
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
    var_14 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned char)231)) ? (1264680710U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 &= ((/* implicit */_Bool) (unsigned short)4813);
                    arr_9 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
                    var_16 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(_Bool)1])) != (((/* implicit */int) arr_7 [i_0] [11ULL]))))), (max((arr_6 [(unsigned short)10]), (3030286586U)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */_Bool) 1264680702U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
}
