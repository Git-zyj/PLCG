/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82371
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) 3422785366U)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) 1034671583)) ? (1034671583) : (-1034671583)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4745))) : (var_18))))));
                            arr_9 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))), (((/* implicit */unsigned long long int) min((0LL), (3LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_8))));
}
