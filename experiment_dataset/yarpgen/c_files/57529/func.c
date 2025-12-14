/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57529
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
    var_10 = (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) max((((/* implicit */short) var_8)), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1] [i_1 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)3))))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) % (((/* implicit */int) arr_2 [i_1] [i_0]))))));
                var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8388096LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2677724969U)));
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_1 [i_1 + 1])))) > ((~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
}
