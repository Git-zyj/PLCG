/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85220
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
    var_16 = ((/* implicit */unsigned short) max((var_5), (max((17981163286253151616ULL), (1848897704424484439ULL)))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)6312)))) / (var_5)));
    var_18 = ((unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1] [3ULL] = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (14762419616621076255ULL) : (var_14)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_3]))))) : ((~(var_10)))));
                            arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)23086);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((arr_4 [i_0]) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40396))) ^ (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))) ? (288230376151711743ULL) : (arr_4 [3ULL])));
                arr_12 [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                var_20 = arr_0 [(unsigned short)8] [i_1];
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11)))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : ((~(18446744073709551615ULL))))) - (63642ULL)))));
}
