/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75513
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
    var_16 = min((var_6), ((+(var_12))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_17 = max((min(((~(1464074353U))), (((/* implicit */unsigned int) (unsigned short)65535)))), (var_15));
                        var_18 = ((((((/* implicit */_Bool) (unsigned short)17021)) ? (var_13) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            var_19 = var_6;
                            var_20 = ((/* implicit */unsigned short) ((1137793042U) + (1464074369U)));
                        }
                        var_21 = ((((/* implicit */_Bool) 1464074369U)) ? ((+(4002668310U))) : (arr_0 [i_0 - 1]));
                    }
                } 
            } 
        } 
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1464074389U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (3473690515U))) : (3488291707U)))) ? ((~(var_8))) : (var_3));
    }
}
