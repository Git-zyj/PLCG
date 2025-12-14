/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72916
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [(short)2] = ((/* implicit */short) ((var_5) << (((((/* implicit */int) arr_1 [i_0])) - (18622)))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (3364748957380766647ULL))))))), ((+(max((3364748957380766665ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))))));
        var_22 = ((/* implicit */unsigned int) 3887362097701529579ULL);
        var_23 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_6 [i_1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */short) arr_7 [i_1]))))))))));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) - (var_14)))), (arr_6 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) < (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : (((/* implicit */int) var_8)))))))));
                    var_25 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_0 [i_1])))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) -8751618532665920604LL);
    }
    var_27 = ((/* implicit */unsigned char) 15081995116328784986ULL);
    var_28 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) + (((var_19) % (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) min(((unsigned short)1126), ((unsigned short)20880)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (var_19)))))))));
    var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_0)) ? (var_17) : (var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
}
