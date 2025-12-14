/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58262
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */short) max((arr_3 [0U] [i_1]), ((~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (signed char)(-127 - 1))))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6680249388130668314ULL))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) : (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) : (var_2)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (var_6)))) : (min((arr_0 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) var_8)) : (5618113552937799237LL)))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))) ^ (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 19; i_2 += 3) 
    {
        arr_13 [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 11667536851834774575ULL)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_0)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        arr_14 [i_2 - 3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_2 - 1]))));
        arr_15 [i_2] = ((/* implicit */signed char) var_9);
    }
    var_15 = ((/* implicit */short) var_10);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_11))), (max((var_2), (((/* implicit */long long int) (_Bool)0))))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))));
}
