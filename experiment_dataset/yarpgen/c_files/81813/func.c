/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81813
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
    var_15 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24726)) & (max((((/* implicit */int) var_13)), (308879589)))))) : (max((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned char) var_7))))), (max((7577339834460252723LL), (var_3))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) max((min(((signed char)-59), (((/* implicit */signed char) var_7)))), (((/* implicit */signed char) ((arr_1 [i_0]) || (arr_1 [i_0]))))))) ? (((/* implicit */int) min((arr_1 [i_0 - 2]), (var_7)))) : (((/* implicit */int) var_10)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (-1287620368229732633LL) : (var_1))), (((long long int) arr_3 [(unsigned short)14] [i_1]))))) ? (var_9) : ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)209))))))));
            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_12)))) ? ((+(((/* implicit */int) arr_2 [i_0 + 2] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) (signed char)44)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (1175552330) : (((/* implicit */int) (unsigned short)54886))))) ? (max((((/* implicit */long long int) var_6)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (arr_3 [i_0] [i_0])))))))));
            arr_4 [i_0] [(unsigned short)7] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [7ULL])))) * (((/* implicit */int) arr_2 [i_0 + 2] [i_1] [2LL])))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)19)))) : (((/* implicit */int) (signed char)28))))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0 - 1] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_2]))) : (var_12))) << (((4169900873U) - (4169900845U))))));
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) 2444778870U);
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((signed char) arr_7 [i_3] [i_3] [i_3])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_7))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8369845895169507884LL)) ? (((/* implicit */int) arr_2 [i_3] [i_4] [i_4])) : (((/* implicit */int) (unsigned char)48))))) ? ((~(41117080U))) : (62510919U));
            var_22 *= ((/* implicit */unsigned long long int) 656388104);
            /* LoopSeq 3 */
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                arr_19 [i_3] [i_4 + 2] [i_5] [i_5] = ((/* implicit */signed char) ((arr_13 [i_4 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77)))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_13 [i_4]))));
            }
            for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                var_24 = ((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 2]);
                arr_23 [i_6] = ((/* implicit */unsigned int) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)0)))) : (arr_5 [i_4 + 2] [i_3])));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_26 [i_3] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_22 [i_3] [i_3]);
                arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -255490004)) ? (((/* implicit */long long int) 3392329237U)) : (35184372088320LL)));
                arr_28 [i_7 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4194303LL)) ? (((int) 5216995198918813801ULL)) : (((/* implicit */int) (_Bool)1))));
            }
        }
        var_25 = ((unsigned short) arr_24 [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        arr_33 [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((arr_30 [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))));
        arr_34 [(unsigned short)9] [i_8] = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 14; i_9 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)35)))))));
            arr_37 [i_9] = ((/* implicit */long long int) (((_Bool)1) ? (arr_6 [i_8] [i_9 - 1] [i_9]) : (((/* implicit */unsigned long long int) 65504))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9] [i_9])) ? (((/* implicit */int) arr_2 [i_8] [i_8] [i_8])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_8] [i_9])) >> (((((/* implicit */int) (unsigned short)51037)) - (51017)))))) : ((+(var_1)))));
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_9 + 2] [i_9 - 1])) & (((/* implicit */int) var_14))));
        }
    }
}
