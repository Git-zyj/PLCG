/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59441
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) | (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)10492))))))) ? (((((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39917))) : (var_14)))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_1 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (signed char)-69))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_0 [6U])))) < (((((/* implicit */int) (signed char)78)) >> ((((((-2147483647 - 1)) - (-2147483646))) + (4)))))))));
                var_20 *= (!(((/* implicit */_Bool) arr_1 [i_1 - 1])));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((arr_2 [5U] [i_1]), (((/* implicit */unsigned long long int) 0U))))))) && (((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_3)) << (((-1636737779) + (1636737796))))) >> (((((/* implicit */int) (short)-21275)) + (21298)))))));
                arr_10 [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_3]);
            }
        } 
    } 
}
