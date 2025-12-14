/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74939
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_6))))), (((var_0) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((1561438980) - (1561438949))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) max((((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_1] [i_1 - 3] [i_1])))));
                    var_12 = ((/* implicit */unsigned char) (unsigned short)0);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_3])) ^ (((((/* implicit */unsigned long long int) arr_11 [i_3])) | (0ULL))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned long long int) -1561438980))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1060694672)) ? (((/* implicit */unsigned int) -1561438980)) : (arr_11 [i_3]))) <= (((arr_11 [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))))))))) : (((8ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */int) max((((arr_16 [(short)21] [i_5] [i_5]) * (arr_16 [i_4] [i_5] [i_5]))), (arr_16 [i_4] [i_5] [i_5])));
                    arr_22 [i_4] [i_5] [i_6] = min((max((((/* implicit */int) arr_13 [i_5] [i_6])), (max((arr_10 [i_4]), (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) var_7)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) (+(1561438956)));
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4])) / (((((((/* implicit */unsigned long long int) arr_10 [19LL])) * (var_2))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_4] [i_4] [i_8] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))));
                        arr_31 [i_7] [i_7] [i_8] [1] = ((/* implicit */signed char) arr_23 [i_8] [i_7]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_35 [i_4] [i_7] [i_8] [i_7] [(signed char)10] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (7899948957848980095ULL)));
                            arr_36 [i_7] [i_7] [i_9 - 1] [i_9 - 1] [i_10] = ((/* implicit */short) arr_14 [(signed char)3]);
                        }
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_8)) | (arr_30 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_9]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (arr_24 [i_8])))) ? (((((/* implicit */int) arr_15 [i_4] [i_7] [16ULL])) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) arr_13 [5ULL] [i_7 - 1]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            for (signed char i_12 = 1; i_12 < 22; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    {
                        arr_44 [i_4] [i_11] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max(((short)-8029), (((/* implicit */short) (unsigned char)196))))) ? (((arr_41 [i_4] [i_11] [i_11 + 3] [i_12] [17U] [i_13]) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [14ULL] [i_11 + 2] [i_11] [i_12] [i_13] [10])) ? (1071431411) : (1073741823)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))));
                        var_17 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned short) var_6))));
                        arr_45 [i_4] [i_11] = ((/* implicit */signed char) (-(0LL)));
                    }
                } 
            } 
        } 
        arr_46 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49164)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1169123453)) ? (arr_39 [i_4] [i_4] [i_4] [i_4]) : (arr_39 [i_4] [i_4] [(unsigned char)15] [i_4]))))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            var_18 = max((arr_3 [i_15]), (((1561438982) / (((/* implicit */int) (unsigned char)177)))));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 3; i_16 < 12; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_18 = 2; i_18 < 12; i_18 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) 15022288063757605337ULL);
                            var_20 = ((/* implicit */unsigned long long int) var_3);
                        }
                        for (short i_19 = 0; i_19 < 13; i_19 += 2) 
                        {
                            var_21 = ((/* implicit */int) arr_38 [i_14] [17] [i_14]);
                            var_22 = ((/* implicit */long long int) max((((arr_4 [i_14 + 4] [i_16 - 2]) > (((/* implicit */int) arr_2 [i_15])))), (((2764127073U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14 + 4])))))));
                            var_23 = ((/* implicit */int) (~(var_0)));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_52 [i_14] [(signed char)5] [i_14 + 1]))));
                            var_25 = ((/* implicit */unsigned long long int) (~((~(arr_54 [i_15] [i_17])))));
                            arr_66 [(signed char)0] [i_15] [i_16] [i_20] [5LL] = ((/* implicit */long long int) ((arr_47 [i_15] [i_15]) <= ((~((~(var_3)))))));
                        }
                        var_26 = ((/* implicit */unsigned char) ((signed char) ((arr_30 [i_17] [i_14 + 3] [i_16 - 3] [i_16 + 1] [i_16 - 1]) ^ (((/* implicit */long long int) (~(arr_58 [i_17] [i_16] [i_15] [i_15] [i_14])))))));
                        var_27 = ((/* implicit */signed char) (~((~(arr_20 [i_14 + 2] [i_14 + 2] [i_16 - 2] [i_16 - 3])))));
                        var_28 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) arr_6 [i_14 + 3] [i_16 - 2])) ? (((/* implicit */int) var_4)) : (arr_6 [i_14 + 1] [i_16 - 3])))));
                    }
                } 
            } 
        }
        for (long long int i_21 = 2; i_21 < 11; i_21 += 4) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1947837121850056857ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (211063346751733755LL)));
            arr_70 [i_14] [(unsigned short)8] = ((/* implicit */unsigned long long int) arr_60 [i_14] [i_21] [(unsigned short)7] [i_14] [i_21] [i_21]);
            arr_71 [i_21] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [(unsigned short)9] [i_21])) : (1169123472)))) ? (((((/* implicit */_Bool) arr_49 [i_14 + 1] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_21] [i_21] [i_14 + 4] [i_21]))) : (var_2))) : (((/* implicit */unsigned long long int) var_3)))) > (((/* implicit */unsigned long long int) (~(arr_34 [i_14] [i_21] [0LL] [i_21 + 1]))))));
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 13; i_22 += 1) 
            {
                for (signed char i_23 = 1; i_23 < 10; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 3; i_24 < 11; i_24 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1561438938)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */int) arr_74 [i_14])) : (((/* implicit */int) ((8231774074334903153LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))))))) ? (((((/* implicit */_Bool) arr_53 [i_24 - 3] [i_22] [i_14 + 3] [i_14 + 3] [i_14])) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5755919608099334671ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_24 - 1]))) : (arr_16 [22U] [i_21 - 1] [i_22])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (arr_43 [10])))) ? ((-(((/* implicit */int) (unsigned short)61991)))) : (((/* implicit */int) var_6)))))));
                            var_31 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */short) (-(((/* implicit */int) arr_33 [i_14] [i_14] [i_14] [i_21]))));
        }
        /* vectorizable */
        for (unsigned int i_25 = 1; i_25 < 9; i_25 += 1) 
        {
            arr_83 [i_25] [i_25] = ((/* implicit */int) ((unsigned long long int) var_6));
            arr_84 [12] [i_25] [5ULL] = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) | (((/* implicit */int) arr_72 [12ULL] [i_25])))) + (((/* implicit */int) var_5))));
        }
        arr_85 [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_59 [i_14] [i_14 + 4] [i_14 + 2] [i_14 + 4] [i_14] [i_14] [i_14]))));
    }
    var_33 = var_3;
}
