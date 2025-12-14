/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7419
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)35038))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((var_5) ? (max((((/* implicit */unsigned long long int) var_8)), (var_2))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)65534))))))) <= (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (16219183194055807208ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_1)))))))));
                var_11 = ((/* implicit */unsigned int) max((var_11), (((((/* implicit */_Bool) max((((arr_1 [i_0]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_0 [i_0])) - (41))))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_5 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (signed char)-88))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((var_3) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)9882)))))))))));
}
