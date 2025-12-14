/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6412
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
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_8)) > (((/* implicit */int) arr_13 [7U] [i_1 - 3] [3] [7LL] [i_0])))) && (((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) var_3))))))))) == (((((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0])) + (arr_12 [i_0] [1LL] [i_0 + 2] [12LL] [i_4]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [8U])) - (495647619)))))))))));
                                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) / (((/* implicit */int) var_6)))) / (((((/* implicit */int) var_11)) | (((/* implicit */int) var_8))))))) || (((((var_10) / (((/* implicit */long long int) var_4)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_2] [i_2]))))))))));
                                arr_15 [i_0] [i_1] [i_2] [8] [13LL] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)34)) - (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((var_9) / (var_3)))))))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (18397381615072003134ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)165)) << (((((/* implicit */int) (unsigned char)252)) - (240)))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [14ULL] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_6 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)-31195))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [(unsigned char)6] [3U])) / (((/* implicit */int) var_7)))))))) >= (((14331231388627608512ULL) >> (((((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) (unsigned char)207)))) - (8053)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_6)))))) < (((var_0) - (((/* implicit */long long int) var_3))))))) - (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_10))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) < (((/* implicit */int) (_Bool)1)))))))))));
}
