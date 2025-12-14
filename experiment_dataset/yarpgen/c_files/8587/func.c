/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8587
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1]))) : ((~(((/* implicit */int) arr_0 [i_0])))))))))));
                    arr_7 [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((((/* implicit */int) var_9)) / (((/* implicit */int) (_Bool)1))))))), ((+(var_6)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (((+(max((((/* implicit */unsigned int) var_9)), (var_6))))) | (max((((/* implicit */unsigned int) ((int) (unsigned char)183))), (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1)))) << (((var_6) - (1750022858U))))))));
                var_15 = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) 16);
}
