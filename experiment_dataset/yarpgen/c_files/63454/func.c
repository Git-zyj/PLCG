/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63454
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] |= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11647))) <= (min((13729051287400370028ULL), (((/* implicit */unsigned long long int) 569120404)))))) || (((/* implicit */_Bool) ((arr_3 [i_1 - 2] [i_0]) ^ (((/* implicit */int) ((unsigned char) -1197288572))))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(min((((arr_2 [12U] [i_0] [i_1 - 2]) | (-583075711))), (max((arr_3 [i_0] [i_1 - 4]), (((/* implicit */int) arr_0 [i_0])))))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min((max((arr_2 [(unsigned short)10] [13ULL] [(unsigned short)10]), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_1])))))), (((((/* implicit */int) max(((short)23670), ((short)11649)))) >> (((min((1328805621U), (((/* implicit */unsigned int) (short)-11662)))) - (1328805611U)))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */int) min(((short)-11623), (((/* implicit */short) (_Bool)1))))) : ((~((~(var_5)))))));
}
