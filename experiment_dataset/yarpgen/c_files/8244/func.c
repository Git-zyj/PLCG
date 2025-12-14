/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8244
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
    var_15 = ((unsigned char) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((signed char) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
        var_17 -= ((/* implicit */long long int) 1639954192U);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (4119702490U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (arr_4 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            var_18 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (var_4))))) - (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (11644395988743062384ULL))))) >> (((((/* implicit */int) arr_7 [i_1] [i_1])) - (142)))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((_Bool)1) || (((((/* implicit */_Bool) max(((unsigned char)14), (arr_7 [i_1] [i_2])))) && (((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_9 [i_2 - 1] [i_1])))))))))));
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)241)))) && (((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1])))))));
            arr_10 [i_1] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 888423161654049183ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_2 + 1])) : (((/* implicit */int) var_0)))), (((int) 5909539923285457972LL)))), (((/* implicit */int) arr_3 [i_1] [i_2 - 1]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) arr_11 [i_1] [i_2] [i_4]);
                            var_22 = ((/* implicit */unsigned short) ((arr_12 [i_1] [i_3] [i_5]) & (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_16 [i_1] [i_5] [i_1] [i_1]))))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_3] [i_4] [i_4]))));
                        }
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_21 [i_1] [i_4] [i_2] [i_3] [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_9 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (arr_17 [i_1] [i_2 + 1] [i_3] [i_4] [i_1])));
                        }
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
                    }
                } 
            } 
        }
        var_26 = arr_5 [i_1];
        arr_22 [i_1] = ((/* implicit */signed char) arr_9 [i_1] [i_1]);
    }
}
