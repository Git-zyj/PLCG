/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73718
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (unsigned char)13))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned char)44)) >> (((arr_3 [i_2 - 2] [i_2 - 2] [i_2 + 1]) + (7612726545126691263LL)))))))));
                    arr_6 [8] [i_0] = ((/* implicit */unsigned char) (short)1770);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (short)-29197)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_1))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)65)))))))))))));
                                var_13 *= ((/* implicit */unsigned int) ((max((17883040542418323188ULL), (((/* implicit */unsigned long long int) arr_1 [i_2 - 1])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_3)))))) == (var_4)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_17 [i_6] [i_6] [i_5] [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */short) ((((((/* implicit */int) ((signed char) (unsigned char)200))) - (((-421549788) / (((/* implicit */int) var_9)))))) + ((+(((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1] [i_0] [i_0])) - (((/* implicit */int) arr_7 [i_6] [i_5]))))))));
                                arr_18 [i_5] [i_5] [i_2] [i_5] [i_6] [i_6] [i_2] &= ((/* implicit */unsigned char) arr_5 [i_6] [i_5] [i_0]);
                                var_14 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) (unsigned char)92))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (arr_5 [i_0] [i_1] [i_2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 387120150U)) : (var_6)))));
                                arr_19 [i_6] [i_1] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [1ULL] [i_2 + 1])), (arr_3 [i_2] [i_2 - 1] [i_2 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
