/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9840
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((var_8), ((signed char)-29)))), (max((0LL), (((/* implicit */long long int) (signed char)-12)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) (signed char)0))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)11)), (var_1))))))), ((short)16512)));
        var_21 |= ((/* implicit */long long int) ((unsigned char) max((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) (unsigned short)54738)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_5))));
            var_23 &= 2147483648U;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)12811)) == (((/* implicit */int) (unsigned short)15189)))))) & (min((arr_3 [i_0]), (var_3)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)16512)))));
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [6ULL] [i_3 - 1] [i_3] [i_2]))));
                var_27 = ((unsigned short) ((long long int) 2744492813U));
            }
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(3182337146U)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_4])) : (((/* implicit */int) (short)16512)))))));
                var_29 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)16512)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (33553408U)));
                var_30 |= ((/* implicit */signed char) var_17);
            }
        }
    }
    for (signed char i_5 = 4; i_5 < 13; i_5 += 4) 
    {
        var_31 = ((/* implicit */unsigned int) arr_0 [i_5 - 1] [i_5 + 1]);
        var_32 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */signed char) arr_11 [i_5 - 2] [i_5 - 4])), ((signed char)0)))), (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) (unsigned short)49335)) : (((/* implicit */int) (signed char)0))))) ? (arr_12 [i_5]) : (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))));
        var_33 = ((/* implicit */unsigned int) 8322084356682951863LL);
        var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (arr_7 [i_5] [i_5 - 1] [i_5] [i_5 + 1]))))) : (((unsigned long long int) (short)16512))));
        var_35 = arr_14 [i_5 - 1] [i_5];
    }
    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_4))));
}
