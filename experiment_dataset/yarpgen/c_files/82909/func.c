/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82909
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (19762375U))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((var_2), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) min(((short)27496), (((/* implicit */short) var_1))))))))));
                var_13 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((short) arr_1 [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) max((((short) arr_10 [i_2] [i_2])), (((/* implicit */short) min(((signed char)82), ((signed char)82))))));
        arr_12 [i_2] = ((/* implicit */int) arr_8 [3ULL]);
    }
    /* LoopSeq 1 */
    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) var_9);
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 17256562199499068808ULL))))) % (((/* implicit */int) arr_13 [i_3] [i_3 - 1]))))) ? (min((((/* implicit */unsigned int) ((signed char) (short)-12502))), (arr_14 [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_10))))))))));
        arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) min((var_12), (((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) (signed char)-109)) : (632229754))) : (((/* implicit */int) (signed char)127))));
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4115224549U)) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) + (max((((/* implicit */unsigned int) var_3)), (4115224548U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)73)), (var_6)))))));
}
