/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73323
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [5ULL] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (signed char)0)) * (var_2))));
                    var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_1] [i_2] [i_2]))) ? (((/* implicit */int) ((2147483647) == (((/* implicit */int) (short)22968))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 1] [i_2])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_1 + 2]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (arr_4 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((long long int) ((unsigned long long int) var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_4] [i_4])))));
                var_14 = ((/* implicit */signed char) (~(((unsigned long long int) arr_4 [i_3] [i_4]))));
                var_15 ^= ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (-1148010991) : (((/* implicit */int) var_5)))) / (((/* implicit */int) (_Bool)1))))));
                arr_14 [i_3] |= ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_13 [i_4] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_4])))))));
            }
        } 
    } 
}
