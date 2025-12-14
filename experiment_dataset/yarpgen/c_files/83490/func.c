/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83490
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_9)), (8191U)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((2127047735U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294959079U)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [3LL])) || (((/* implicit */_Bool) arr_1 [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) -893457780);
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned short) min((arr_15 [i_1 - 1] [i_4 - 1]), (((/* implicit */unsigned int) arr_11 [i_5] [i_5 + 3]))))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_11 [i_2] [i_3])))) & ((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8295063730167103566LL) <= (8295063730167103575LL))))) : (16U)))) : ((+(((((/* implicit */_Bool) 16U)) ? (63ULL) : (((/* implicit */unsigned long long int) 4294967280U)))))))))));
                                var_17 = ((/* implicit */signed char) (((-(-8295063730167103572LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_16 [(unsigned short)15] [(unsigned short)15] [i_2] [(unsigned char)16] [i_4] [i_5]))))));
                                var_18 = ((/* implicit */signed char) (+(((long long int) min((arr_10 [i_1 - 1] [i_1] [(signed char)1] [i_1]), (var_1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
