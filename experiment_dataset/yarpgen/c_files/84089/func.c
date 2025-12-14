/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84089
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
    var_15 = -2377244593984077066LL;
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [21])) + ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_17 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-17868)), ((unsigned short)12528))))) > (2377244593984077052LL)));
        var_18 &= ((/* implicit */unsigned int) var_6);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2377244593984077046LL))))), (min((arr_2 [i_0 + 1]), (var_3))));
            arr_5 [i_0] [(signed char)17] [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31564)) ? (((/* implicit */int) (unsigned short)4519)) : (((/* implicit */int) (unsigned char)192))))) ? (-2649493661405664496LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) (short)2047)));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]))))) & (((/* implicit */int) min(((unsigned short)59717), (((/* implicit */unsigned short) var_5)))))));
            var_21 = ((/* implicit */_Bool) (~(max(((~(0LL))), (max((-802472555516695919LL), (((/* implicit */long long int) (short)10977))))))));
            var_22 = ((/* implicit */short) ((((/* implicit */int) (short)10977)) | (((/* implicit */int) ((((/* implicit */int) min(((short)-21078), (((/* implicit */short) (_Bool)0))))) >= (((/* implicit */int) (unsigned char)64)))))));
        }
    }
}
