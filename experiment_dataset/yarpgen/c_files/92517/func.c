/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92517
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
    var_14 = max((((18446744073709551615ULL) / (((/* implicit */unsigned long long int) -244038422)))), (18446744073709551615ULL));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_11 [1U] [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_7 [i_4] [i_3] [(short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [19] [i_0 - 1] [i_0 - 1]))) : (0ULL))) >> (((/* implicit */int) ((unsigned char) arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 3]))));
                                var_15 = ((/* implicit */signed char) (((~(arr_1 [i_4] [3LL]))) % ((~(-1402949924)))));
                                arr_12 [i_4] [i_0] [i_2] [i_1 - 3] [(signed char)0] [i_0] [(short)5] = ((signed char) max((min((((/* implicit */long long int) (unsigned short)65509)), (1563472241713547728LL))), (((/* implicit */long long int) max(((short)28843), (((/* implicit */short) arr_7 [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (unsigned char)195)))));
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2 + 1] [3LL])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6371))) : (2186324510U)))) : ((((!(((/* implicit */_Bool) (signed char)31)))) ? (((((/* implicit */_Bool) 3629935979U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10216))) : (10446745507815723416ULL))) : (min((((/* implicit */unsigned long long int) var_3)), (1ULL)))))));
}
