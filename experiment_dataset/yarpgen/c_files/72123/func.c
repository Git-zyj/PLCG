/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72123
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) (_Bool)1);
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_9) & (6ULL))))));
            var_19 = arr_2 [i_1];
        }
        var_20 ^= ((/* implicit */unsigned int) ((signed char) -4207160024681969332LL));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_4] = ((min((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) 2935534713808196855LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))) >> (((((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_1 [i_5])))) - (22553))));
                        arr_18 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (_Bool)1))))) < (arr_6 [i_2]))));
                        arr_19 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) (~((-(var_11)))));
                        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4346))) < (((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (arr_15 [i_2] [i_5]) : (var_14))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) var_7);
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_13)), (var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)240))) : (var_11)));
    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((4799084586787054199LL), (((/* implicit */long long int) var_1))))) >= (18446744073709551615ULL)))), ((~(488406273U)))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (min((var_8), (var_8))) : (((unsigned int) ((((/* implicit */int) var_6)) + (var_2))))));
}
