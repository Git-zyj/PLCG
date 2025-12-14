/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78513
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_18 *= arr_1 [i_0];
        var_19 = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))), ((-(var_3))))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)24382)), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), (arr_0 [i_1])))) | (((/* implicit */int) max((arr_3 [i_1]), (var_4))))))));
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((_Bool) (unsigned short)24382)) ? (((/* implicit */int) min((arr_3 [i_1 + 1]), (((/* implicit */unsigned short) arr_1 [i_1 - 1]))))) : (max((((-963825209) % (((/* implicit */int) (unsigned short)511)))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) > (((/* implicit */int) arr_0 [i_1])))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_7 [i_2] [i_2 + 2] [i_2 + 2])), (var_1)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_2 + 2]))) : (max((((((/* implicit */_Bool) (unsigned short)41153)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (arr_6 [i_2]))), (arr_6 [i_2 - 1])))));
                arr_9 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_3])), (var_12)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_7 [i_3] [i_2] [i_2]), (arr_7 [i_2] [i_3] [i_2]))))))) : (min((((/* implicit */unsigned int) (unsigned short)24382)), (min((((/* implicit */unsigned int) (unsigned short)34138)), (0U)))))));
            }
        } 
    } 
}
