/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60987
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
    var_11 = ((/* implicit */unsigned short) var_7);
    var_12 = ((/* implicit */unsigned long long int) 1003331364);
    var_13 = ((/* implicit */short) 0ULL);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((767761586) == (((/* implicit */int) arr_4 [i_0] [i_1]))))))) ^ (max((((/* implicit */int) arr_0 [i_0] [i_1])), (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)126))))) : (13849300442140769163ULL))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & ((~(536870911ULL)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) var_1))))));
}
