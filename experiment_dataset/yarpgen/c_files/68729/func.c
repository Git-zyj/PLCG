/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68729
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (((((/* implicit */int) var_16)) - (var_9)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((15841350966189251619ULL), (((/* implicit */unsigned long long int) arr_1 [i_1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (var_10)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_0 [i_0] [i_2]) || (((/* implicit */_Bool) var_17)))))))) : (min((arr_4 [i_2] [i_2 + 1] [i_2 - 2]), (arr_4 [i_2] [i_2 + 1] [i_2 + 1])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                {
                    arr_12 [i_3] [i_3] [i_0] [i_3] = (-(max((((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [(unsigned short)2])), (arr_4 [i_0] [i_4] [i_4 - 1]))));
                    arr_13 [i_3] [i_3] [i_3] &= (((_Bool)1) ? (((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_3])) ? (((/* implicit */int) arr_6 [i_4 + 1])) : (arr_8 [i_4 + 1] [i_3]))) : (((((arr_9 [i_0] [i_3]) + (2147483647))) << (((((arr_9 [i_4] [i_3]) + (1020298530))) - (27))))));
                    arr_14 [i_0] [i_0] [3] [i_0] = min((min((var_0), (((/* implicit */short) (_Bool)0)))), (((/* implicit */short) ((signed char) arr_2 [i_3]))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)3840)) != (((/* implicit */int) (unsigned short)55906))))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) (unsigned short)25722)))))))));
}
