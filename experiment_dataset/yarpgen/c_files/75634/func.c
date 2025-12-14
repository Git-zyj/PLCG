/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75634
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
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */_Bool) (short)1315);
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_22 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 1]))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_24 ^= ((/* implicit */unsigned char) var_13);
                    arr_16 [i_0 + 1] = ((/* implicit */_Bool) arr_7 [i_0 + 1]);
                    arr_17 [i_0] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned short) ((signed char) arr_1 [i_4]));
                }
            }
        }
        arr_18 [i_0 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_0 + 1])), (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) == ((~(((/* implicit */int) (_Bool)1)))))))) : (min((arr_14 [i_0] [1LL] [i_0 + 1] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_17))))));
    }
    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (signed char)45)))));
        arr_22 [i_5] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((short) var_12))), (arr_20 [i_5 - 1])))));
        var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) (!((_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) min(((short)-3758), (var_17)))) | ((~(((/* implicit */int) (_Bool)1))))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_21 [i_5 - 1] [i_5])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((((/* implicit */_Bool) 18093187927679287801ULL)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (signed char)25)))) < (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_12)))))))));
    }
    for (short i_6 = 3; i_6 < 22; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [(unsigned char)8] = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_2), (arr_24 [i_6 + 3] [i_6 - 3]))))));
        var_28 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_6 - 3]))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)21723)))), (((/* implicit */int) arr_23 [i_6]))))) : ((((~(23U))) & (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-5827), (((/* implicit */short) (_Bool)1))))))))));
        var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) min((min((12555318136195608897ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)21736)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)18109))))) : (((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)128)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_6] [i_6 + 2])) : (((/* implicit */int) var_1))))))))));
    }
    for (short i_7 = 3; i_7 < 22; i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) var_12);
        arr_30 [i_7] = ((/* implicit */unsigned long long int) max((((unsigned short) (_Bool)1)), (((unsigned short) (_Bool)1))));
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_35 [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7 - 2])) || (((/* implicit */_Bool) (unsigned char)32)))))));
            var_30 &= ((/* implicit */_Bool) arr_32 [i_7] [i_8]);
        }
        for (short i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
        {
            arr_38 [i_7] = ((/* implicit */signed char) ((short) min((min((((/* implicit */unsigned char) (signed char)103)), ((unsigned char)12))), (((/* implicit */unsigned char) ((6342239512666178491ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7])))))))));
            arr_39 [i_9] [i_7] [i_7] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_28 [i_7 - 2])))), (((/* implicit */int) ((short) arr_33 [i_7 + 3] [i_7] [i_7])))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
        {
            arr_42 [(unsigned char)8] = ((/* implicit */unsigned int) ((unsigned char) arr_34 [i_7 + 3] [i_7 - 3] [i_7 - 1]));
            var_31 = ((/* implicit */short) (+(((/* implicit */int) arr_33 [i_7 + 3] [i_7 + 1] [i_7 + 1]))));
            arr_43 [20ULL] [i_10] = ((/* implicit */signed char) (short)29801);
            arr_44 [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)149))))));
        }
    }
    var_32 = ((/* implicit */unsigned char) var_0);
    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)101)) != (((/* implicit */int) var_3)))) ? (((/* implicit */int) min((var_7), ((unsigned short)2540)))) : (((/* implicit */int) var_19)))))));
    var_34 = ((/* implicit */_Bool) var_17);
}
