/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94825
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
    var_17 |= ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 87400510U)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) var_14)))))), (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((signed char) (~(min((var_1), (((/* implicit */unsigned int) (unsigned char)99))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_19 *= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        arr_4 [i_0] [i_0] |= ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (2115061417954767073ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (134)))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1] [i_3] [i_3] [i_2])) == (((/* implicit */int) min((((/* implicit */short) arr_6 [i_2 - 1])), (var_4))))));
                var_22 = ((/* implicit */unsigned char) var_3);
                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)159)), (arr_8 [i_1] [i_2 - 1])))) >> ((((-(var_3))) + (506650559))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31826))))) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */int) var_12)) * (arr_11 [i_1])))))));
                var_24 *= ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)3445))))), (4207566785U))));
            }
            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) min((arr_7 [i_1] [i_2] [i_2]), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1])))))))) ? (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (14524342928528694711ULL)))) | (((/* implicit */int) ((signed char) 87400507U))))) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (unsigned char)229))))));
            arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) <= (max((((/* implicit */int) var_11)), (arr_11 [i_2 - 1])))));
        }
        arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_26 *= ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]);
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (short)-24095))));
    }
}
