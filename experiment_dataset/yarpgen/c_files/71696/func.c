/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71696
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)255);
                arr_6 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)1)) << (((((long long int) arr_4 [i_1])) + (3707611924729132496LL))))), (((/* implicit */int) (unsigned short)20298))))) : (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)1)) << (((((((long long int) arr_4 [i_1])) - (3707611924729132496LL))) - (2766438906379429345LL))))), (((/* implicit */int) (unsigned short)20298)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (18366313397187183443ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_1]))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)254)), (arr_7 [i_3] [i_1] [i_0])))) ? (18366313397187183443ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_14 += arr_1 [i_2] [(short)9];
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (var_10)));
}
