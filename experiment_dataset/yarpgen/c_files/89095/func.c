/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89095
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [1ULL] [i_1 + 1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_2]), (((/* implicit */unsigned char) arr_7 [i_1]))))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */int) arr_1 [i_0 - 1] [(short)7])) & (((/* implicit */int) arr_7 [i_0 - 1]))))));
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [i_2] [i_1 - 1]), (arr_1 [i_1] [i_2])))) >= (((((/* implicit */int) (signed char)-51)) / (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1]))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 15820079664791979734ULL))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-1))))), (((unsigned char) var_3)))))));
    var_16 += ((/* implicit */unsigned int) var_0);
    var_17 = ((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) / (max((((unsigned long long int) (signed char)-51)), (var_5))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (unsigned char)53)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((var_4), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))))));
}
