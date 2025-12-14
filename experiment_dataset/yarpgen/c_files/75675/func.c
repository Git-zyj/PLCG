/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75675
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
    var_20 ^= ((/* implicit */short) ((((/* implicit */int) max((min((var_6), (var_12))), (((/* implicit */unsigned short) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_16)))))))) <= (((/* implicit */int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_14)))) < (((/* implicit */int) var_13)))))));
    var_21 = var_0;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_22 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)22758)) ? (((/* implicit */int) (unsigned short)43890)) : (((/* implicit */int) (_Bool)1)))) * ((+(((/* implicit */int) var_14))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            var_23 = ((/* implicit */long long int) var_15);
            arr_8 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((var_7) & (((/* implicit */long long int) arr_0 [i_0 + 2]))));
            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
        }
        var_24 = ((/* implicit */int) ((-4123188636249632835LL) | (((/* implicit */long long int) 1025418621))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_6 [i_2] [i_2]))))), (max((((/* implicit */unsigned int) var_11)), (arr_0 [1U])))))));
        arr_14 [6U] [i_2] = ((((/* implicit */int) ((((((/* implicit */int) arr_2 [i_2] [6ULL])) > (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_12)))))))) >> ((((+((+(var_0))))) + (1687798676005400854LL))));
    }
}
