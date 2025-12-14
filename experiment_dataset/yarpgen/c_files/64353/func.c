/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64353
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((long long int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0 + 2] [i_1] [i_1]), (arr_3 [i_0] [i_1] [i_1]))))) : (arr_2 [i_1])))));
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */long long int) 3281285796U)) / (5197046656943286290LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5197046656943286291LL)) ? (-1107813181) : (-1158835177)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1158835190)) ? (((/* implicit */long long int) 1158835189)) : (-5197046656943286291LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1158835187)) ? (((/* implicit */int) (unsigned short)1008)) : (((/* implicit */int) arr_9 [i_2]))))))))) : (((((/* implicit */_Bool) ((short) -5197046656943286303LL))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1158835187))) : (((arr_8 [i_2] [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))))))))))));
                arr_13 [i_3] = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (4194303) : (-1158835183))) << (((5197046656943286320LL) - (5197046656943286316LL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1158835176)) || (((/* implicit */_Bool) 3505419936U))));
}
