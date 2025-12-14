/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60531
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (~((~(var_4)))));
        var_12 = ((/* implicit */unsigned long long int) ((2153568634357657005LL) / (2153568634357657005LL)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62042))) + (-1LL)));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-23944)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) 1LL))));
                var_14 *= ((/* implicit */unsigned long long int) var_5);
            }
            arr_11 [i_1] [i_1] = ((/* implicit */short) (~((+(((/* implicit */int) arr_9 [i_1 - 1] [i_2] [i_1 - 1]))))));
            var_15 = ((/* implicit */unsigned short) ((_Bool) -2LL));
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            arr_14 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_8 [i_4])) ? (((unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) arr_12 [i_1])), (7174576427603554207ULL)))))));
            arr_15 [i_1] [7LL] [7LL] = ((/* implicit */long long int) arr_7 [i_1] [i_4]);
        }
        arr_16 [9ULL] [i_1] = ((/* implicit */unsigned short) (((((-(4068896283U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14996)))));
        var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max(((unsigned short)50570), ((unsigned short)65535)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)42669))))) : ((-(var_7)))))));
    }
    var_17 += ((/* implicit */unsigned short) var_3);
}
