/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95811
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
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)0] [i_0] = ((/* implicit */short) min(((((~(var_8))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))) : (4294967295U))) - (12U))))), (min((((/* implicit */int) (unsigned char)132)), (arr_4 [i_0] [4])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (((+(-449356105))) + (((/* implicit */int) (unsigned char)52))));
                    var_19 = ((/* implicit */short) arr_5 [i_0]);
                    arr_10 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((int) (+(694284129U)))) : (((/* implicit */int) arr_1 [i_2]))));
                    arr_11 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) % (281474976710655LL))), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 1]))));
                }
                for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    var_20 |= ((/* implicit */unsigned int) ((((int) min((var_0), (((/* implicit */unsigned long long int) 148917439))))) + (((((/* implicit */_Bool) ((var_8) - (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (arr_2 [i_1]) : (449356119))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (arr_7 [i_3]))))))));
                    arr_14 [i_0] = ((/* implicit */_Bool) 2886486071871401222LL);
                }
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 2617163222U))));
                    arr_17 [i_0] [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) ((((var_8) != ((+(var_12))))) ? (((int) (~(-1344656732)))) : (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 3]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) 4534044254360968075ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(((var_0) << (((/* implicit */int) var_3)))))))));
                    var_24 = (((!(((/* implicit */_Bool) 449356104)))) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_18 [(signed char)7])) : (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)2328)))))) : (((/* implicit */int) ((short) arr_19 [i_6] [i_7]))));
                }
            } 
        } 
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((1062370475) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -2886486071871401219LL)))) < (((((/* implicit */_Bool) 694284129U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7727))) : (var_13)))))))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (long long int i_9 = 3; i_9 < 19; i_9 += 1) 
            {
                {
                    arr_32 [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)-58)))))));
                    arr_33 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_20 [i_5])))) <= (((((/* implicit */long long int) arr_30 [i_5] [i_5])) / (var_4))))) ? (((((/* implicit */int) var_10)) | ((~(arr_23 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((arr_30 [(signed char)20] [i_5]) - (2510803327U)))))) || (((/* implicit */_Bool) (~(var_4)))))))));
                    arr_34 [i_9 + 1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_26 |= ((/* implicit */long long int) (~(((arr_30 [(unsigned char)9] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
                        var_28 = ((/* implicit */int) 694284129U);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        arr_40 [4] [4] |= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_2))));
                        var_29 *= ((/* implicit */unsigned char) var_12);
                    }
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_8] [i_12] [i_8] [i_8] [i_5] |= (+(((/* implicit */int) ((unsigned char) arr_38 [16U] [i_5] [i_9] [16U] [i_9]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            arr_48 [i_12] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((1030557681) >= (1111088208)))), (((((/* implicit */_Bool) 449356105)) ? (2563641303973894957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? ((+(arr_20 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_29 [i_5] [i_12] [i_13])) < (694284142U)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) ^ (694284146U)))))))));
                        }
                        arr_49 [i_5] [i_8] [i_5] &= var_12;
                    }
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))));
                        var_32 -= ((/* implicit */unsigned long long int) min((449356118), (((/* implicit */int) ((((/* implicit */_Bool) 10168798343485910896ULL)) || (((/* implicit */_Bool) arr_37 [i_5] [i_8] [i_14] [i_14])))))));
                        var_33 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-40)) > (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_36 [i_14])) : (arr_29 [i_5] [i_5] [i_5])))))) << (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-68))))) : (((/* implicit */int) ((449356127) != (((/* implicit */int) var_11)))))))));
                        arr_52 [i_5] [i_14] [i_9] [(short)18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_8]))))) ^ (((/* implicit */long long int) arr_29 [i_5] [i_9 - 1] [i_14])))))));
                    }
                    var_34 = ((/* implicit */long long int) arr_31 [i_9 - 2] [i_8] [i_5]);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) var_16))))))));
}
