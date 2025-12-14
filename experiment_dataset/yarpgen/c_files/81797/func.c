/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81797
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
    var_16 = ((/* implicit */_Bool) max((((((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_15)))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) + (1971))))), (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3)))) >> (((((/* implicit */int) (unsigned short)2601)) - (2598)))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) var_14)) <= (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)163)) != (((/* implicit */int) (short)-21490))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                    arr_9 [(_Bool)1] [(_Bool)1] [i_0] |= var_12;
                }
            }
        } 
    } 
    var_19 = var_12;
}
