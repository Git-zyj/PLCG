/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96601
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_10)))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) arr_2 [i_0] [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 2])) : (((((unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)14)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) arr_6 [i_0 - 2]);
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_1])) : (((((/* implicit */int) var_8)) + (((((/* implicit */int) var_0)) + (arr_7 [(_Bool)0])))))));
                        var_21 += var_11;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        arr_15 [i_4] = (_Bool)1;
        var_22 |= var_2;
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_14 [i_4]))));
    }
}
