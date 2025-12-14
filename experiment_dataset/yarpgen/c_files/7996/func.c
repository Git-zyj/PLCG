/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7996
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    arr_8 [i_2] [i_2] [2LL] |= ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) 4398012956672LL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) var_12))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */unsigned long long int) max((-4398012956673LL), (((/* implicit */long long int) var_12))))) : (((arr_3 [i_1 + 2]) - (arr_3 [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [18ULL] [i_3 + 2] [i_1] [i_3 - 3] [i_4] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)0))))))));
                                arr_17 [22ULL] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] &= ((/* implicit */unsigned int) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1465))) != (11417057536929560397ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((arr_2 [i_1] [i_0]) ? (((/* implicit */unsigned long long int) var_12)) : (arr_10 [i_0] [8] [i_0] [3LL] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) var_10)))), ((-2147483647 - 1))));
    var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)697)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16933)))))));
}
