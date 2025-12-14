/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62389
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */long long int) 465171916U)) ^ (arr_7 [i_0] [i_1] [i_0] [i_2 - 2]))), (((/* implicit */long long int) (signed char)-126))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (2144374045434290687LL))), (((/* implicit */long long int) 2884993756U))));
                        var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-73)), (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32183))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (16127388965485065522ULL))))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_7 [i_2] [(short)9] [i_2] [i_2 - 1]))));
                    }
                    arr_12 [i_0] [i_1] [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56314)) ? (min((((/* implicit */long long int) var_1)), (arr_7 [i_2] [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) 3829795396U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_15))))) ? (3524837178U) : (17U)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (var_10)));
    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_9))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) >= (3829795390U))))))), (((((/* implicit */_Bool) 3829795392U)) ? (((/* implicit */unsigned long long int) 10LL)) : (10872764929640783917ULL)))));
}
