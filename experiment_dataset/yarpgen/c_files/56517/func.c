/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56517
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_17 *= ((/* implicit */signed char) ((arr_0 [(unsigned short)6]) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7757497716138330946LL)) || (((/* implicit */_Bool) arr_0 [(_Bool)1]))))))));
        var_18 = (~(((((/* implicit */_Bool) -7757497716138330963LL)) ? (arr_0 [i_0]) : (-429203323994143426LL))));
        var_19 = ((/* implicit */int) ((3979037666U) < (3839141562U)));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((7757497716138330951LL) == (arr_3 [i_0] [i_0 + 2])))) == (((/* implicit */int) (signed char)-12))));
            arr_5 [i_1] [i_1 - 1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1226462711U))))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) (-(arr_3 [i_0 - 1] [(unsigned char)15])));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)16383))) < (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
            /* LoopSeq 4 */
            for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                arr_13 [i_0] [(unsigned char)19] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0])) ? (-7757497716138330951LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_0])))));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) > (3068504560U)));
            }
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_16 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2])))))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3068504584U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)18)))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)15723)) == (((/* implicit */int) (signed char)(-127 - 1)))));
            }
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_0 + 3] [i_0 + 1])))))));
                var_27 = arr_18 [i_0] [i_2] [i_6];
            }
            arr_22 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_0 + 1] [i_0])) || (((((/* implicit */int) (signed char)114)) >= (((/* implicit */int) (short)20604))))));
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            arr_25 [i_7] |= ((/* implicit */unsigned char) arr_20 [(short)16] [i_7] [i_7]);
            arr_26 [i_0] [11ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3068504566U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_2 [i_0]))))) : (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))))));
            /* LoopSeq 3 */
            for (long long int i_8 = 3; i_8 < 22; i_8 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) (((~(arr_28 [i_8 + 1]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0 + 2] [i_0] [9U] [(signed char)3])) ? (((/* implicit */int) arr_7 [i_7] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                arr_29 [i_0 + 1] [i_0] [17ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_8] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) != (arr_20 [9ULL] [i_0] [i_8])));
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52111)) ? (((/* implicit */long long int) arr_24 [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_7])) ? (-7757497716138330951LL) : (arr_2 [i_0])))));
                arr_30 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(short)2] [i_0]))) != (arr_2 [i_0]))))));
            }
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_7] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_0]))));
                var_30 = ((/* implicit */unsigned short) (+((-(arr_24 [i_0])))));
            }
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_11 = 3; i_11 < 22; i_11 += 2) 
                {
                    arr_41 [i_0] [i_7] [i_0] [(unsigned short)12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -3924003080837851521LL)) ? (-3924003080837851521LL) : (((/* implicit */long long int) 4294967295U)))) > (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10] [i_0] [i_0] [i_0])))));
                    arr_42 [i_0] [i_7] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_0] [i_0 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_37 [i_0] [i_0 + 3] [i_11 - 3])) : (((/* implicit */int) arr_37 [i_0] [i_0 + 1] [i_11 + 2]))));
                    var_31 -= ((/* implicit */unsigned short) (~(arr_14 [i_11 - 1] [i_7] [i_0 - 1])));
                }
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) arr_21 [i_0 + 3] [i_7] [18LL] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_7])))))));
            }
            arr_43 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > ((((-9223372036854775807LL - 1LL)) / (arr_0 [i_0])))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((arr_28 [i_0 + 2]) > (var_9))))));
        }
    }
    for (long long int i_12 = 1; i_12 < 14; i_12 += 2) /* same iter space */
    {
        arr_47 [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_17 [i_12] [i_12 + 1] [i_12 + 2] [14LL])) && (((/* implicit */_Bool) arr_17 [i_12] [i_12 - 1] [i_12 + 1] [(signed char)4])))), (((((/* implicit */_Bool) arr_19 [(unsigned short)2] [10LL] [i_12 + 2] [(unsigned short)2])) && (arr_11 [i_12] [i_12] [i_12])))));
        var_34 ^= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52111)))))) | (arr_3 [i_12 + 2] [(unsigned short)0])))));
        arr_48 [(signed char)6] = ((/* implicit */unsigned int) arr_24 [(unsigned char)4]);
        arr_49 [2LL] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-100)) != (((/* implicit */int) (unsigned char)216))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48112)) || (((/* implicit */_Bool) (unsigned short)31842)))))));
    }
    /* vectorizable */
    for (long long int i_13 = 1; i_13 < 14; i_13 += 2) /* same iter space */
    {
        arr_52 [i_13] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_13 + 1] [(unsigned char)10])) ? (((/* implicit */int) arr_4 [i_13] [(unsigned char)18])) : (((/* implicit */int) arr_8 [i_13 - 1] [i_13 + 1] [(_Bool)1]))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((arr_38 [i_13 + 2] [i_13] [(unsigned short)2] [i_13 + 1]) <= (arr_38 [i_13 + 2] [i_13] [8] [20U]))))));
        var_36 ^= ((/* implicit */long long int) arr_7 [i_13 + 2] [14ULL]);
        var_37 = ((((/* implicit */_Bool) arr_40 [i_13 + 2] [i_13 + 2] [14U])) ? (arr_2 [(short)22]) : (((/* implicit */long long int) 3127836301U)));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) 7757497716138330960LL))));
    }
    /* vectorizable */
    for (long long int i_14 = 1; i_14 < 14; i_14 += 2) /* same iter space */
    {
        arr_55 [7LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [18LL])) || (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) arr_14 [i_14] [i_14] [9LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)22]))) : (arr_39 [(short)20] [(unsigned short)10] [i_14 + 1] [i_14] [i_14 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        var_39 = arr_46 [i_14 - 1] [i_14];
    }
    var_40 = ((/* implicit */long long int) var_15);
    var_41 = ((/* implicit */short) var_11);
    var_42 = ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_11)))) : (min((var_2), (((/* implicit */long long int) var_3)))))));
}
