/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83018
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 83111243U)), (-1026415111714549035LL)));
                    var_15 ^= ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) - (min((((/* implicit */unsigned long long int) 1002527993)), (((((/* implicit */_Bool) -1026415111714549035LL)) ? (6566252077370239081ULL) : (((/* implicit */unsigned long long int) -7581199540223141819LL)))))));
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1026415111714549035LL)))) ? (((/* implicit */long long int) var_11)) : (max((1026415111714549029LL), (((/* implicit */long long int) ((unsigned short) var_8)))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [18U])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (var_6)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)10))))) : (min((-1026415111714549035LL), (((/* implicit */long long int) arr_0 [0U])))))) : (((/* implicit */long long int) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (unsigned char)132)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            {
                arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) (_Bool)0))), (max((min((((/* implicit */long long int) arr_3 [i_4] [i_4])), (-2758937182118664996LL))), (((/* implicit */long long int) (-(2914652831U))))))));
                var_17 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) != (((((-4181186621338453576LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_3])) - (1))))))));
                arr_19 [i_4] [i_4] = ((((/* implicit */_Bool) max((arr_2 [i_4 - 1]), ((+(((/* implicit */int) arr_12 [i_4] [19]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((max((11880491996339312535ULL), (((/* implicit */unsigned long long int) (unsigned short)49583)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
