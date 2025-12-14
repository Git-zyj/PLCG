/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9890
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) 2099008267)))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0 + 1] [2U] [i_3 - 1])) >> (((((/* implicit */int) var_7)) - (20179)))));
                            arr_13 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3292))))) ? (((/* implicit */unsigned int) var_10)) : (((unsigned int) (short)2255))));
                        }
                    } 
                } 
            } 
            var_21 += ((/* implicit */short) arr_9 [(unsigned char)8] [i_1] [i_0] [i_1]);
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0 - 1]))));
            arr_14 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)3292))) / (((/* implicit */int) var_0))));
            arr_15 [i_1] [i_1] [i_1] = arr_10 [(unsigned char)0] [i_1] [i_0];
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((var_10) ^ (arr_21 [i_7 - 2])));
                        arr_25 [i_7] = ((/* implicit */unsigned long long int) var_11);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50)))))) < (((((/* implicit */unsigned int) arr_16 [i_0] [i_5] [4U])) & (2977732871U)))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_5] [i_5])))))));
            arr_26 [i_0] [i_0] [8U] = ((/* implicit */_Bool) (~(arr_6 [i_0] [i_0 - 2])));
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
        {
            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0 - 1] [i_8])) ? ((+(arr_21 [i_0 + 1]))) : (((/* implicit */int) ((short) arr_19 [i_0 + 1])))));
            var_27 &= ((/* implicit */short) (+(var_13)));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_36 [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned int) arr_34 [i_8] [i_9] [i_10 - 2]);
                        arr_37 [i_0] [(short)5] [i_9] [(unsigned short)6] [i_9] [i_9] = ((/* implicit */int) (signed char)-50);
                    }
                } 
            } 
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(var_8)))), (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8] [i_8] [i_0] [i_0]))) : (var_18)))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_8]))));
            arr_38 [i_0] [i_8] = ((/* implicit */short) max(((!(((/* implicit */_Bool) var_14)))), (((((/* implicit */int) ((short) (short)18494))) != (((/* implicit */int) ((short) var_16)))))));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
        {
            var_29 = max((((((/* implicit */_Bool) arr_28 [i_0 + 1] [i_11])) ? (((/* implicit */int) arr_28 [i_0 + 1] [i_11])) : (((/* implicit */int) var_7)))), (((((/* implicit */int) arr_28 [i_0 + 1] [i_0])) ^ (((/* implicit */int) arr_28 [i_0 + 1] [i_11])))));
            var_30 = ((((/* implicit */_Bool) max((max((((/* implicit */short) var_5)), ((short)-4932))), (((/* implicit */short) ((signed char) var_17)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0 - 1] [i_0 + 1])) ? (var_13) : (arr_4 [i_0 - 1] [i_0])))));
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 13; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_31 = ((/* implicit */short) (~(max((625120183), (((/* implicit */int) (signed char)58))))));
                        arr_47 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(var_15))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_11] [i_11]), (((/* implicit */short) (signed char)-59))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)74)))))) : (max((((/* implicit */int) arr_44 [i_12 - 1] [10ULL])), ((~(((/* implicit */int) (short)4932))))))));
                        var_32 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_11])) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (short)4932))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                for (int i_15 = 2; i_15 < 11; i_15 += 1) 
                {
                    {
                        var_33 = ((signed char) (short)-18495);
                        var_34 -= ((/* implicit */_Bool) max((arr_9 [10] [i_11] [i_11] [i_0 + 1]), (min((arr_9 [i_15] [i_11] [i_11] [i_0 - 2]), (arr_9 [i_15 + 2] [i_0] [i_0] [i_0 - 2])))));
                        arr_53 [i_14] [i_14] [i_14] [i_15] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (short)-4932)) ? (arr_33 [(unsigned char)7] [i_11]) : (((/* implicit */unsigned int) arr_16 [i_0] [i_14] [i_14])))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_50 [i_15 + 3] [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_11])), (var_7)))) & (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (var_17))))))))))));
                    }
                } 
            } 
            arr_54 [i_11] [i_11] = ((/* implicit */short) arr_21 [i_0 - 2]);
        }
        var_36 -= ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_16)))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0 + 1] [i_0])) / (((/* implicit */int) arr_28 [i_0] [i_0]))))))) >> (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21709))) + (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) -468337081)))))));
        arr_55 [i_0 + 1] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (unsigned short)1950)), (min((-8639876294408430728LL), (((/* implicit */long long int) (unsigned char)136))))))));
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
    {
        arr_59 [i_16] |= ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_58 [i_16]))))) : ((-(((unsigned int) var_16)))));
        arr_60 [i_16] = ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0)));
        var_37 = ((/* implicit */unsigned char) var_17);
        arr_61 [i_16] = ((/* implicit */unsigned long long int) (+(-2099008268)));
    }
    var_38 = ((((/* implicit */_Bool) -2099008268)) ? (((/* implicit */int) (_Bool)0)) : (-2099008268));
    var_39 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        for (long long int i_18 = 1; i_18 < 23; i_18 += 2) 
        {
            {
                var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_18 + 1] [i_18] [i_18 - 1])) ? (arr_66 [i_18 - 1] [i_17] [19]) : (((/* implicit */int) var_2)))))));
                arr_67 [i_18] [i_18] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_64 [i_17])) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) arr_64 [i_17])))), ((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
