/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81324
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned char) (signed char)1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_12 -= ((/* implicit */short) var_10);
                        arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) var_0);
                        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_1))))) || (arr_4 [i_1] [i_2] [i_2]))) ? (max((((/* implicit */long long int) arr_2 [i_0])), (9223372036854775803LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 9223372036854775793LL))))));
                        arr_15 [i_0] [i_0] [(short)13] [(unsigned char)5] [i_3] [i_0] = ((/* implicit */unsigned short) var_2);
                    }
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_3 [i_2]))));
                    arr_16 [(_Bool)1] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_12 [i_2])))), (((((/* implicit */_Bool) -9223372036854775786LL)) ? (var_4) : (((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned char) (-((+(((((/* implicit */int) arr_6 [(signed char)16] [i_0] [i_0])) | (((/* implicit */int) var_5))))))));
        arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_0] [i_0]))))))) ? (((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (24U))), (((((/* implicit */int) arr_2 [i_0])) >= (var_4)))))) : (((/* implicit */int) arr_9 [i_0] [(signed char)5]))));
    }
    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)5)), (9223372036854775785LL)));
}
