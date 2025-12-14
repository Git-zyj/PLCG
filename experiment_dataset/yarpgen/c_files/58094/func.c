/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58094
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_11 [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_0]))) : (arr_10 [i_0] [(short)9] [i_2 + 1] [18LL] [i_3]))) & (((((/* implicit */_Bool) var_2)) ? (var_7) : (8887916256293103377ULL)))));
                        arr_12 [i_2] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (-4048051313055093377LL) : (((/* implicit */long long int) 2147483647))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_12)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2] [i_2]))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */short) (~(var_7)));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_18)))))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (((((/* implicit */int) var_17)) + (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) var_14)) ? ((+(var_12))) : (((long long int) var_16))))));
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (unsigned char)9))))))))));
}
