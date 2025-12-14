/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75918
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
    var_12 |= ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_13 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) 816331808U);
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))) == (((((/* implicit */_Bool) 1770462821U)) ? (3478635487U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
        var_15 -= ((/* implicit */unsigned short) var_6);
        arr_4 [i_0] [(short)2] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1])))))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_3] [i_4]);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (816331808U)));
                            var_19 = ((/* implicit */signed char) ((_Bool) 3478635470U));
                            var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 939524096))));
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_1] = ((/* implicit */unsigned long long int) var_11);
    }
    var_21 = ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) (_Bool)1)));
    var_22 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_8)))), (((int) (_Bool)1))));
}
