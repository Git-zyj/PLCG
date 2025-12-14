/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99597
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
    var_17 &= ((/* implicit */long long int) ((((/* implicit */int) var_4)) | (var_10)));
    var_18 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15105))) % (-7855598597891167428LL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = var_1;
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_20 += ((/* implicit */_Bool) min((1526204699), (((/* implicit */int) (unsigned char)42))));
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_6 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [2U] [i_0] [i_0] [2U] [i_0])) : (arr_3 [14ULL]))), (((/* implicit */unsigned long long int) arr_7 [i_0] [4ULL] [i_0] [4ULL] [(unsigned char)14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */long long int) arr_2 [16LL] [i_0] [i_0])))))) : (min((arr_2 [(_Bool)1] [i_0] [(_Bool)1]), (((/* implicit */unsigned int) var_8)))))))));
    }
}
