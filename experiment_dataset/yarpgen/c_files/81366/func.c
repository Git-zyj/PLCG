/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81366
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
    var_17 = ((/* implicit */int) var_11);
    var_18 = ((/* implicit */signed char) 0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 405548628299473328ULL)) ? (((/* implicit */unsigned long long int) 8619543272968592758LL)) : (18041195445410078288ULL)));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (-1337499858) : (((/* implicit */int) (signed char)116)))))));
                    var_22 &= ((/* implicit */signed char) var_6);
                    arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15029206924551308609ULL)) ? (0U) : (arr_1 [i_1 + 1] [i_1 - 1])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) var_11);
        var_24 += ((/* implicit */unsigned short) ((unsigned char) var_6));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_25 -= ((/* implicit */long long int) var_2);
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) 15762598695796736ULL)) && (((/* implicit */_Bool) (signed char)109)))))));
    }
    for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_4]))))) - (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_1 [i_4] [(_Bool)0])) : (arr_5 [(short)12] [i_4] [i_4]))), (((/* implicit */long long int) min((524287U), (((/* implicit */unsigned int) arr_6 [9] [i_4] [i_4] [i_4])))))))));
        var_27 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_11)))) ? (var_9) : (arr_13 [i_4 + 2])))));
    }
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(var_16))))));
}
