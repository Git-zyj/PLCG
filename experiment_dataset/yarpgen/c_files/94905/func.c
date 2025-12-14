/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94905
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (((~(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_12)), (arr_6 [i_1]))))))));
                    var_15 = arr_1 [i_0];
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-((~(((/* implicit */int) var_2)))))))));
                    var_17 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-23795)) && (((/* implicit */_Bool) 9959970128847088526ULL))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) << (((((/* implicit */int) arr_2 [i_0 + 1])) - (2499))))) >> (((max((arr_7 [i_1] [i_1] [i_2] [5U]), (5119114339391111784ULL))) - (6318350998712567167ULL)))))) && (((_Bool) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_4 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_3))));
}
