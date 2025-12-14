/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91309
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
    var_11 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_9)), (max((var_10), (var_10))))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_2] [i_0] [i_0])) < (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1])))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_2 [i_0 - 1])))))))) ? (((((/* implicit */_Bool) ((short) arr_7 [i_0] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)166))))) : (min((((/* implicit */unsigned long long int) (short)-23497)), (arr_4 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52698)))))))));
                                var_13 ^= ((/* implicit */long long int) max((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) arr_7 [i_2] [i_2]);
                    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && ((_Bool)1)))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)6] [i_1] [i_2] [i_0 - 1] [i_1]))) == (3891342323U))))))) <= (18057349273362364965ULL)));
                    var_16 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_11 [i_2 + 1] [i_0 - 1] [i_2] [i_0 + 1] [i_0 - 1])))), (((/* implicit */int) var_8))));
                }
                arr_14 [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1])) >> (((((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1])) - (34592))))), (((/* implicit */int) min(((unsigned short)20689), (((/* implicit */unsigned short) var_2)))))));
            }
        } 
    } 
}
