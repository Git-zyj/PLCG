/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57204
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_19 *= (+(min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [i_0 + 1]))));
        var_20 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_0 + 1])))), (arr_1 [i_0 + 1] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1 + 1] [i_2 + 3]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_2 + 2]))))) ? (((/* implicit */int) min((arr_3 [i_1 + 1] [i_2 + 3]), (arr_3 [i_1 + 1] [i_2 + 2])))) : (((/* implicit */int) ((signed char) arr_3 [i_1 + 1] [i_2 - 1])))));
                    var_21 = ((/* implicit */long long int) (unsigned char)69);
                    var_22 = ((/* implicit */int) max((var_22), (arr_1 [i_1] [i_1])));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_0 [i_3]))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_3] [i_2])), (var_6)))) ? (((/* implicit */long long int) arr_1 [i_1] [i_1])) : ((~(arr_8 [i_1] [i_1 + 1] [i_3])))));
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_1] [(_Bool)1])))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1]))));
        var_25 -= ((/* implicit */short) arr_5 [i_1 + 1] [i_1]);
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 1])) < (((/* implicit */int) arr_5 [i_1] [i_1]))))) < (((/* implicit */int) arr_6 [14LL] [i_1]))));
    }
    var_27 = ((/* implicit */unsigned long long int) 9168027605477507997LL);
    var_28 = ((/* implicit */unsigned long long int) (!(var_15)));
    var_29 = ((/* implicit */long long int) max((var_29), (max((9168027605477507997LL), (((/* implicit */long long int) (signed char)24))))));
    var_30 = ((/* implicit */unsigned long long int) var_18);
}
