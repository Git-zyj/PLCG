/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72951
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)28645)) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */int) var_10)) << (((var_6) - (1467919271)))))))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) max((arr_7 [2U]), (((/* implicit */unsigned int) (unsigned short)62745))))) : ((-(8546581481615840119LL)))));
                    arr_8 [i_0] [i_1] [i_2 + 4] [i_2 + 4] = ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */signed char) var_7);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) >= (((/* implicit */int) var_14)))))));
}
