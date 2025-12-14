/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85506
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
    var_20 = ((/* implicit */long long int) var_8);
    var_21 = ((long long int) (_Bool)1);
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (short)32688))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [10LL] = ((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10638)) ? (((unsigned int) arr_4 [6] [(short)10] [i_2 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22755)))))) : (630837814038156777ULL));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned short)2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 260182653304903065LL)) ? (((/* implicit */int) (unsigned short)32944)) : (((/* implicit */int) (short)32767))));
                                var_23 *= ((/* implicit */short) ((signed char) (signed char)-64));
                                var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_4] [i_0] [11LL] [i_0])) != (((/* implicit */int) ((short) 260182653304903065LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
