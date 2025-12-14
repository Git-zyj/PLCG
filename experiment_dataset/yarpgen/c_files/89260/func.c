/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89260
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned short)12] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (((long long int) max((var_6), (((/* implicit */unsigned long long int) var_3)))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (14656877949408754997ULL) : (((/* implicit */unsigned long long int) 3536095614U))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_16 [i_3] [(short)11] [i_2] [i_2] [15] = ((/* implicit */int) (-(9223372036854775807LL)));
                            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [(unsigned short)6] [14ULL])) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_1] [i_2] [i_2 + 2]))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (var_0)))));
                            arr_17 [(signed char)19] [i_3] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
                            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)25)) ? (max((min((1834197845006696198ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) var_2))))))) : (2766600834157605291ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) var_3)) / (var_7))));
    var_13 = ((/* implicit */short) var_5);
}
