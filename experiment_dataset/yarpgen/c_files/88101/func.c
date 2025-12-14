/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88101
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
    var_19 -= var_0;
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) ((288230376151711743LL) + (((/* implicit */long long int) ((/* implicit */int) var_17))))))), (((unsigned short) var_17))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 288230376151711743LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-288230376151711743LL)))))))) : (-288230376151711763LL)));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) max((min((((/* implicit */long long int) min((751877898), (((/* implicit */int) var_4))))), (288230376151711750LL))), (288230376151711750LL)));
                    arr_9 [i_1] [i_1] [i_1] = var_9;
                    var_21 ^= ((/* implicit */_Bool) (signed char)83);
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_22 = (+((~(((/* implicit */int) min((var_0), (((/* implicit */short) var_2))))))));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((_Bool) arr_6 [i_3] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)3931))) <= (288230376151711770LL))))) : (min((288230376151711732LL), (((/* implicit */long long int) (-2147483647 - 1)))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [i_1] = ((/* implicit */signed char) var_9);
                    arr_17 [10] [i_1] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_4] [i_4]);
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        var_23 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) (-(arr_12 [i_0] [i_0] [(signed char)10] [i_5])))) & (var_13))));
                        var_24 = ((-288230376151711732LL) / (((/* implicit */long long int) ((/* implicit */int) (short)3931))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_4] [i_4] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_1 [4ULL] [(unsigned char)11])) : (((/* implicit */int) arr_1 [5U] [5U]))))) ? (arr_4 [i_0]) : (arr_18 [i_6] [11] [8LL] [i_0])));
                        arr_23 [i_1] [i_1] = ((/* implicit */int) ((short) arr_20 [i_0] [i_1] [i_1] [i_1] [i_1]));
                    }
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_9)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))), ((+(3917297486U)))));
}
