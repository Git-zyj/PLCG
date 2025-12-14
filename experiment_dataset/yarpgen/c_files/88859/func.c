/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88859
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)26)) != (((/* implicit */int) (_Bool)0)))))));
            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50403)) / (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((var_7) ? (((/* implicit */int) (unsigned short)11715)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((3503563048U) != (3503563048U))))));
            arr_5 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60523)) >> (((/* implicit */int) arr_1 [i_0]))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)1920))));
            arr_9 [i_0] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned short)8064)) * (((/* implicit */int) (unsigned short)36667)))));
            var_11 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2 + 1])) < (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_2])))));
            arr_10 [i_0] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_2 - 1])) != (((/* implicit */int) arr_0 [i_0] [i_2 - 2]))));
        }
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((long long int) (_Bool)1))));
        arr_12 [i_0] = var_6;
    }
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(var_0))) + (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_5)))))))));
}
