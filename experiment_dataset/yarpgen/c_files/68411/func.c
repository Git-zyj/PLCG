/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68411
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)3)))) || (((((/* implicit */_Bool) arr_0 [(unsigned short)1])) && (((/* implicit */_Bool) (unsigned short)65513))))))), ((signed char)26)));
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-36)))) - (((/* implicit */int) (signed char)26)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) var_0);
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(7417588454768334376LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))) : (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (11899919698356078353ULL)))));
        arr_6 [(signed char)12] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) ((unsigned char) var_6)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 147846094)) ? (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (arr_4 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [(signed char)16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)8)) / (((/* implicit */int) arr_8 [i_2]))))), (((((/* implicit */_Bool) -8090551999171112358LL)) ? (((/* implicit */unsigned long long int) 320834361U)) : (14ULL)))))) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (arr_9 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))))))));
        var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) (signed char)0))))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_5)))) != ((+(((/* implicit */int) (signed char)110))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)27)))) > (((unsigned int) var_1)))))));
        var_14 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]);
    }
    var_15 = var_1;
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_7)) / (((/* implicit */int) var_9)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)15871))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */long long int) -1224867297))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_16 [i_3])))))));
            arr_18 [i_3] [i_4] = ((/* implicit */unsigned long long int) var_5);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_19 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) arr_12 [i_5]))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((_Bool)1) ? (1224867299) : (((/* implicit */int) (unsigned char)238)))))));
            var_21 = ((/* implicit */short) (unsigned char)255);
        }
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_22 |= ((/* implicit */short) (!(((((((/* implicit */_Bool) arr_22 [10ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)26)))) == (((((((/* implicit */int) (short)-13963)) + (2147483647))) << (((((((/* implicit */int) arr_15 [i_3] [i_3] [(unsigned char)16])) + (21132))) - (12)))))))));
                    var_23 += min(((+((-(var_6))))), (((/* implicit */unsigned int) ((-695721781) < (((/* implicit */int) (unsigned char)133))))));
                    var_24 &= ((/* implicit */signed char) var_6);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) arr_24 [i_3] [(signed char)9] [i_3]);
        var_26 *= ((/* implicit */unsigned short) arr_11 [2ULL]);
    }
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_2))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)54556)), (131070)))) ? (((-1244489238) & (((/* implicit */int) (unsigned short)54556)))) : (((/* implicit */int) var_2)))))));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
    {
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(-7947391269095044070LL))) - (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)85)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_26 [i_9] [i_9]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) 1224867297)) ? (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) -1224867299)) : (14081782321646644437ULL))) : (min((17781637958209800149ULL), (((/* implicit */unsigned long long int) arr_21 [i_9] [(unsigned char)0] [i_9]))))))));
        var_30 -= ((/* implicit */unsigned int) -1LL);
        arr_31 [i_9] = ((/* implicit */unsigned short) (((~(min((((/* implicit */long long int) var_2)), (-3755330722426867256LL))))) & (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ ((~(arr_23 [11LL] [i_9] [(signed char)5]))))))));
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
    {
        var_31 -= ((/* implicit */unsigned char) ((arr_13 [22LL]) ? (((/* implicit */int) (signed char)26)) : (min((1224867307), (((/* implicit */int) arr_15 [i_10] [i_10] [i_10]))))));
        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)890)) << (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) arr_15 [i_10] [i_10] [i_10])) ^ (((((/* implicit */int) arr_34 [i_10] [i_10])) >> (((/* implicit */int) var_2))))))));
        arr_36 [i_10] |= ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_19 [i_10] [i_10])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_10])) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13963)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (1224867313) : (((/* implicit */int) arr_25 [i_10]))))) : (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (short)56)))))))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) min(((signed char)1), ((signed char)(-127 - 1)))))));
    }
}
