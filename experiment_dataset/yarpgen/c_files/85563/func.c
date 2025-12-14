/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85563
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
    var_10 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)14773))) ^ (arr_2 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_1] [(signed char)9])) || (((/* implicit */_Bool) 9223372036854775807LL))));
                        var_13 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_1] [i_1] [i_0]))))) + (2147483647))) << (((max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_11 [i_0])), (arr_9 [i_0] [i_0] [i_1] [i_2] [(_Bool)1])))), (min((-5124126114684929536LL), (((/* implicit */long long int) (unsigned char)243)))))) - (61LL)))));
                        arr_12 [i_0] [i_1] [8LL] |= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_3 - 2] [(signed char)0] [i_1 - 2] [(signed char)2])), (arr_2 [i_0]))) - (((/* implicit */unsigned long long int) var_2))));
                        var_14 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (signed char)37)), (-7720293310130255329LL))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [(unsigned char)7])), ((unsigned char)252)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (-4058822100092413367LL))))))))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_1 + 1] [i_1 + 2]) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2]))))) ? (-7720293310130255341LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])) * (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3959500831520675435ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((395793193U), (((/* implicit */unsigned int) (unsigned char)235)))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
    var_17 = ((/* implicit */long long int) ((unsigned short) var_7));
}
