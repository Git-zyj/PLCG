/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72434
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] [2ULL] [i_0] = ((/* implicit */short) (signed char)127);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [(short)6] [i_3] [(unsigned short)5] [i_3] = ((/* implicit */signed char) ((arr_7 [i_3] [i_3]) >> (((min((((arr_3 [3U] [i_0] [i_0]) | (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)(-127 - 1))), (arr_6 [i_0] [i_2] [i_3])))))) - (3952606422U)))));
                            var_17 = ((/* implicit */unsigned short) min((((signed char) var_4)), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4240120148U)) ? (((/* implicit */unsigned long long int) 4240120135U)) : (18446744073709551615ULL)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) << (((((-9067565694028588339LL) + (9067565694028588357LL))) - (17LL))))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))));
                arr_10 [i_0] [i_1] [i_0] = (((!(((/* implicit */_Bool) 4240120158U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])) % (-9067565694028588339LL)))) : (min((arr_8 [i_1] [0LL] [i_0] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)54012)))));
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned short)6] [i_0])), (var_12))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_5);
    var_21 |= ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            {
                arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((arr_1 [i_4 - 1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4 - 3])) || (((/* implicit */_Bool) arr_1 [i_4 - 1])))))));
                arr_16 [i_4] [i_4] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((-9067565694028588339LL) < (((/* implicit */long long int) (-(54847143U))))));
            }
        } 
    } 
}
