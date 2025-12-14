/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63704
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */long long int) var_7)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((min((((int) (_Bool)1)), (((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))))), ((~(((/* implicit */int) arr_0 [(signed char)9]))))));
        var_20 = ((/* implicit */long long int) min(((unsigned char)89), (((/* implicit */unsigned char) (_Bool)1))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((((/* implicit */_Bool) ((int) arr_4 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((int) min((var_5), (var_5))))) : (((((/* implicit */_Bool) max((2210450168756865674LL), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_15) : (arr_5 [i_0] [(unsigned short)12]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))))))));
            var_21 += ((/* implicit */short) (((((_Bool)1) ? ((~(var_16))) : (var_0))) / (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3)))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] [(short)10] = ((/* implicit */unsigned short) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3969535605U))));
            arr_10 [i_2] = ((/* implicit */short) (-(arr_1 [i_2] [i_0])));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_2))))));
        arr_13 [i_3] &= ((/* implicit */unsigned char) (!((_Bool)1)));
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_8 [i_5])) + (124))))));
                    arr_19 [i_3] [0] [i_4] = ((/* implicit */int) ((short) arr_12 [i_4 - 2]));
                    var_24 -= ((/* implicit */long long int) arr_11 [i_5]);
                }
            } 
        } 
    }
}
