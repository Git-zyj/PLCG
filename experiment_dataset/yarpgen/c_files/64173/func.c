/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64173
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
    var_16 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) var_4))))), (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1] [i_0 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 - 1])))) - (((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 + 1] &= ((/* implicit */_Bool) ((unsigned short) (unsigned short)5999));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((min((((/* implicit */short) (signed char)38)), ((short)15783))), (((/* implicit */short) ((((/* implicit */int) (signed char)37)) >= (((/* implicit */int) (short)-4700))))))))));
                }
            }
        } 
    } 
    var_19 = ((((/* implicit */int) var_1)) < (((/* implicit */int) (((~(var_4))) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
}
