/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9196
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
    var_16 = ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) 0U)), (((var_11) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_5))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) -531772027)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_1);
                    var_19 = ((/* implicit */int) arr_8 [i_0] [i_1 - 2]);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) 8);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) -1026603675);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (arr_10 [i_3 + 2]) : (var_8)));
        var_21 = ((((/* implicit */_Bool) 9854466793044073594ULL)) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */long long int) 112060105U)))) : (((/* implicit */long long int) var_13)));
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (6033670391797623852ULL) : (((/* implicit */unsigned long long int) var_13))));
        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) min(((((_Bool)0) ? (107252970U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) min((1783607445), (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (signed char)94)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (arr_16 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_3 [i_5] [i_5]) >= (((/* implicit */int) arr_17 [i_5]))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
