/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73583
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) 131071)) ? (((/* implicit */unsigned long long int) var_11)) : (var_8))) * (((/* implicit */unsigned long long int) var_11)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_1 [i_0]), (((/* implicit */short) var_9)))), (var_7)))) ? (min((((/* implicit */int) max((arr_0 [i_0]), ((short)7807)))), (((((/* implicit */_Bool) (short)21013)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-87)))))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)21007)) ? (10140721921542322527ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_4)))))))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        var_17 -= ((/* implicit */unsigned long long int) ((signed char) ((long long int) (short)-21015)));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */int) 17U);
        arr_8 [i_1] = ((/* implicit */unsigned char) max((arr_3 [i_1]), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [7LL] [7LL]))) : (arr_3 [i_1])))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) var_3);
                        var_20 = ((/* implicit */signed char) arr_9 [i_1]);
                    }
                } 
            } 
        } 
    }
}
