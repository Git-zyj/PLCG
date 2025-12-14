/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73239
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] &= min(((~(arr_3 [i_1 + 1] [i_1 - 1]))), (arr_3 [i_1 + 1] [i_1 - 1]));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    var_12 *= max((((((/* implicit */_Bool) var_5)) ? (4290772992ULL) : (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [0ULL])))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-35)))), ((+(((/* implicit */int) var_4))))))));
                    arr_8 [i_2] [i_2] = ((((/* implicit */_Bool) 261120U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (823478692U) : (((/* implicit */unsigned int) ((arr_0 [i_2 + 2]) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) arr_2 [i_0] [i_2]))))))));
                }
            }
        } 
    } 
    var_13 = ((var_7) << (((((/* implicit */int) var_3)) + (69))));
    var_14 = ((((/* implicit */unsigned long long int) 393216)) | (1ULL));
}
