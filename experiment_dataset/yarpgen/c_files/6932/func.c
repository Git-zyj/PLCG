/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6932
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
    var_18 = (-((+((~(((/* implicit */int) (signed char)-59)))))));
    var_19 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)42))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) var_0);
            var_22 |= ((/* implicit */_Bool) var_4);
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_23 |= ((/* implicit */int) ((((((var_11) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))) + (9223372036854775807LL))) << (((var_3) - (107955931)))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_24 = (short)4095;
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_2] [i_2] [(short)9])) ? (arr_11 [i_4 + 1] [i_2] [i_3] [i_3]) : (arr_11 [i_4 + 1] [i_2] [i_3] [i_4 + 1])));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((unsigned short) arr_15 [i_0] [i_2] [i_2] [i_0] [i_2]));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)82))) < (-7360717947890812862LL))))));
                        var_28 = ((12845353095474349977ULL) > (arr_11 [i_0] [i_6] [i_6] [i_7]));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 2; i_8 < 13; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
                            arr_23 [(signed char)4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_8] [i_6] [i_6] [i_6] [i_0])) ? (((arr_7 [(short)9] [i_8]) << (((arr_18 [i_8 - 2] [i_2] [i_0]) - (16532013953137696563ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_13)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_30 = ((4353898555232130866LL) / (4353898555232130877LL));
                            var_31 -= ((/* implicit */_Bool) var_2);
                            arr_26 [i_0] [i_0] [i_0] [i_9] [i_7] [i_9] = ((/* implicit */unsigned char) ((int) arr_13 [i_9] [i_9] [i_6] [i_9] [i_0]));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [(_Bool)0] [i_9] [i_9])) ? (var_12) : (-1783198299338765658LL)))));
                        }
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [0LL])) - (((/* implicit */int) arr_28 [i_10])))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_12] [i_0] [i_0]))) >= (779610664359317219LL)));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_12] [i_12] [i_11] [i_12] [i_0]) > (-798019332))))) + (arr_31 [i_0] [i_10])));
                        var_36 += ((/* implicit */long long int) 262143);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            var_37 &= ((/* implicit */short) ((-1617563132) > (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1390)))))));
                            var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_0] [i_13] [i_13] [i_14]))));
                            var_39 += ((/* implicit */unsigned long long int) arr_5 [i_0] [i_10]);
                        }
                        for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 2) 
                        {
                            arr_47 [i_0] [i_0] [i_13] [(_Bool)1] [i_13] = (-(((/* implicit */int) arr_25 [i_0] [7] [i_16] [6LL] [i_16] [i_16 - 1])));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] = ((/* implicit */int) var_13);
                            var_40 = ((/* implicit */unsigned long long int) arr_38 [i_13] [i_13] [i_10] [i_14] [i_16]);
                        }
                        for (signed char i_17 = 2; i_17 < 11; i_17 += 2) 
                        {
                            arr_52 [3] [3] [i_13] [i_13] [i_17] [i_13] [i_14 + 2] = ((/* implicit */unsigned char) (((~(-1307286923))) & (((/* implicit */int) arr_24 [i_13] [i_13] [i_17 + 1] [i_14]))));
                            var_41 = (-(arr_11 [i_14 - 1] [(_Bool)1] [i_13] [i_17 + 2]));
                            var_42 |= (((+(arr_15 [12LL] [i_17] [i_13] [12LL] [i_14 + 3]))) / (var_16));
                            var_43 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_13] [i_10] [i_0] [i_14 + 2]))));
                        }
                        var_44 = (+(arr_8 [i_14 + 1] [i_14 + 1] [i_14 - 3]));
                        var_45 = ((18410715276690587648ULL) << ((((+(((/* implicit */int) var_8)))) - (81))));
                        arr_53 [13] [i_10] [i_13] [i_14] = ((/* implicit */int) arr_22 [i_10] [i_10] [i_10]);
                    }
                } 
            } 
        }
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            for (short i_20 = 3; i_20 < 10; i_20 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        for (signed char i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            {
                                var_46 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_18 - 1]))))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_18 - 1] [i_19 - 1])), (arr_3 [i_21] [i_19]))) : (((/* implicit */unsigned long long int) ((int) max((-951984934), (((/* implicit */int) (unsigned short)26580))))))));
                                var_47 += ((/* implicit */unsigned char) ((short) ((((long long int) -9223372036854775796LL)) >= (((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_21] [i_19 - 1] [i_20] [i_21] [i_22]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_48 |= ((/* implicit */unsigned long long int) var_13);
                        var_49 = ((/* implicit */_Bool) arr_39 [i_23] [i_19 - 1]);
                    }
                }
            } 
        } 
        arr_69 [i_18 - 1] &= max(((+(((((/* implicit */int) (signed char)89)) | (((/* implicit */int) arr_12 [i_18])))))), (((((/* implicit */_Bool) 12845353095474349969ULL)) ? (-1307286910) : (951984951))));
        arr_70 [i_18] = ((/* implicit */long long int) var_13);
        var_50 |= arr_14 [(short)4] [i_18 - 1];
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        var_51 = ((/* implicit */short) var_14);
        var_52 = ((/* implicit */int) (-(arr_72 [i_24])));
    }
    /* vectorizable */
    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
    {
        arr_75 [i_25] = ((/* implicit */unsigned short) -8236371671788077104LL);
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 18; i_26 += 2) 
        {
            for (int i_27 = 0; i_27 < 18; i_27 += 2) 
            {
                {
                    var_53 = ((/* implicit */long long int) (~(var_3)));
                    var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) arr_79 [i_25 + 1] [i_25 + 1]))));
                }
            } 
        } 
    }
    var_55 |= ((/* implicit */unsigned long long int) var_15);
}
