/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89567
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
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (((long long int) 17500140985911659244ULL))))) ? (var_1) : (((/* implicit */unsigned long long int) max((((var_14) % (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 992870481013565206LL)) ? (var_9) : (4294967293U)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_5 [i_1 + 1] [i_1])) / (((/* implicit */int) arr_5 [i_1 + 2] [i_1])))), (((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 3])) / (var_2)))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (946603087797892377ULL) : (((/* implicit */unsigned long long int) 612514460U))))) ? (((int) arr_3 [i_1] [i_2])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)125))))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1])), (18ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)-79), (((/* implicit */signed char) (_Bool)1))))) ? (1152921504069976064LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                    var_22 = arr_2 [i_0] [i_1 + 2];
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 = ((/* implicit */short) var_6);
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_16))));
}
