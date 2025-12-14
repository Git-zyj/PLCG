/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99599
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
    var_12 -= ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1 - 1] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) | (((/* implicit */int) var_6))))) : (arr_6 [i_1 + 2] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_3] [i_2])) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [(signed char)18] [(signed char)6] [i_1 + 2] [i_1 + 1]))) / (var_9)))));
                                var_14 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [5LL] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) var_11)) : (15544235129232722592ULL)))) ? (((/* implicit */int) ((_Bool) -389306456959096952LL))) : ((-(var_2))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_3]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1 + 1] [i_2] = ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_1])))) ? (arr_6 [i_0] [i_0]) : (9223372036854775807LL))) ^ (((/* implicit */long long int) ((arr_2 [i_1 - 3]) & (arr_2 [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_6)))) + (2147483647))) << (((((((var_2) | (((/* implicit */int) var_4)))) + (30))) - (29)))))) ? ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (4410550894289020310LL))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_11))) - (93))))) : (max((((4410550894289020309LL) | (var_9))), (((/* implicit */long long int) var_7))))));
}
