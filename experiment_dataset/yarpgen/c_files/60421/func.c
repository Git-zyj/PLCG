/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60421
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
    var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) 1131527729235466803ULL)) ? (((/* implicit */unsigned long long int) 4095626U)) : ((+(17315216344474084813ULL))))), (((/* implicit */unsigned long long int) ((((-1LL) / (((/* implicit */long long int) var_3)))) * (((((/* implicit */_Bool) var_16)) ? (-24LL) : (((/* implicit */long long int) var_13)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(var_17)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((16480452275943329435ULL), (((/* implicit */unsigned long long int) -2147483631))))) ? (arr_8 [i_2] [i_2] [i_2] [i_2]) : (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (-5LL)));
                        var_23 = ((/* implicit */unsigned int) ((max((1131527729235466803ULL), (arr_0 [i_3] [i_1]))) >> (((arr_9 [i_0] [i_0] [i_0] [i_0]) - (6210947283490807753ULL)))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_2 [i_2]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) * (((((/* implicit */_Bool) -1467459488)) ? (3076502187U) : (((/* implicit */unsigned int) 33554431))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_1]) * (((/* implicit */unsigned long long int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) arr_6 [i_3] [i_1] [i_0])) : (((/* implicit */int) ((_Bool) 4294967279U)))))) : (max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_3] [i_0])))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) min((1006632960), (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-471533887) : (arr_4 [i_0])))))) ? ((+(17315216344474084813ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        }
    }
    var_26 = ((((/* implicit */int) ((max((((/* implicit */unsigned int) var_15)), (131040U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) * (((/* implicit */int) (_Bool)1)));
    var_27 = ((((/* implicit */_Bool) ((unsigned int) (unsigned char)13))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4294967295U) : (((/* implicit */unsigned int) 1809192404))))) ? (var_6) : (var_5))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (2147483647))));
}
