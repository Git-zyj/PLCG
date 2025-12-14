/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64468
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
    var_14 = ((min((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (min((var_5), (((/* implicit */long long int) (unsigned short)43502)))))) == (((/* implicit */long long int) ((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (3198877923U)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48864))) ^ (0U))), (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned char)242))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (576460752303423488ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_6)))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_3))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (unsigned char)255)), (arr_4 [i_2] [i_2] [i_2 - 2] [(unsigned short)2])))));
                    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_2 - 2] [i_1] [i_1])))), (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)251))))));
                    var_18 *= ((/* implicit */_Bool) arr_0 [i_1 - 2]);
                }
            } 
        } 
    }
}
