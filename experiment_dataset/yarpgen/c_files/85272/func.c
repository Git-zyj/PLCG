/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85272
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)128)))) : (((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) 4611686014132420608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)247))));
                                var_17 ^= ((/* implicit */unsigned short) max(((-(min((((/* implicit */unsigned long long int) var_6)), (576460752034988032ULL))))), (((/* implicit */unsigned long long int) ((min((72057591890444288ULL), (0ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [8LL] [i_2] [i_4]))))))));
                                arr_13 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? ((+(((/* implicit */int) (signed char)126)))) : (var_0)));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) : (-11LL)))))));
                }
            } 
        } 
    } 
}
