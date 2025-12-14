/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79195
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
    for (short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_4 [11] [11] [i_0 + 1])))))))), (((((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >> (((((((/* implicit */long long int) var_12)) % (6097918842861931075LL))) + (1585352642LL)))))));
                var_16 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) (short)-21784)));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_10)), (arr_1 [i_1])))), (846317347U))), (((/* implicit */unsigned int) ((short) (!(var_9))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) var_1);
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((((~(var_5))) + (9223372036854775807LL))) << ((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) arr_9 [i_2]))))));
                var_19 ^= min((((var_7) >> (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_15))))))), (((/* implicit */unsigned int) min((((24961771) - (((/* implicit */int) arr_10 [12U] [(signed char)10] [i_2])))), (((/* implicit */int) (unsigned short)55779))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) var_7)) / (((18446744073709551615ULL) % (((/* implicit */unsigned long long int) 1798576903)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_15) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) % (((/* implicit */int) var_3)))))));
}
