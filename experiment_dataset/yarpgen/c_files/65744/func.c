/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65744
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((int) var_2))))) ? (((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))) : (min((var_5), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) var_17)))))));
    var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))))) & (max((((((/* implicit */int) var_7)) >> (((var_16) - (10219323920239126155ULL))))), (((/* implicit */int) var_12)))));
    var_20 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
        arr_4 [(unsigned char)0] = ((/* implicit */int) var_2);
        arr_5 [i_0] = arr_0 [(_Bool)1];
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            arr_9 [i_0] [i_0] [3] |= ((signed char) arr_0 [i_0]);
            arr_10 [i_0] = ((/* implicit */signed char) arr_0 [(unsigned short)2]);
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_1 [i_0])));
        }
        for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            arr_13 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_7 [(unsigned short)5] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) ((_Bool) arr_2 [(signed char)2] [(signed char)2]))));
            arr_14 [i_0] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
            var_22 = ((((/* implicit */_Bool) arr_2 [(unsigned short)5] [i_2 - 2])) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_2 - 2])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_23 = (!(((/* implicit */_Bool) var_4)));
            arr_17 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_15) : (((/* implicit */int) arr_11 [i_3]))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_21 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_15 [i_0] [i_0] [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) & (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 + 1] [i_0])))));
            arr_22 [i_4] = ((/* implicit */short) arr_19 [i_0] [i_0]);
        }
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        arr_26 [i_5] = ((/* implicit */short) ((signed char) min((((/* implicit */int) ((signed char) arr_23 [i_5]))), (max((arr_23 [i_5]), (var_6))))));
        arr_27 [9] [i_5] = ((/* implicit */signed char) var_13);
        arr_28 [i_5] [i_5] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_23 [i_5])))));
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_31 [i_6] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_6])) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_25 [6ULL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_29 [6]) <= (((/* implicit */int) arr_25 [i_6])))))) : (((unsigned long long int) var_8)))) : (((unsigned long long int) ((arr_23 [i_6]) - (((/* implicit */int) arr_25 [i_6])))))));
        arr_32 [i_6] [(unsigned char)1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_6])))) * (((((/* implicit */_Bool) arr_29 [i_6])) ? (((/* implicit */long long int) arr_23 [i_6])) : (arr_30 [i_6]))))) / (((/* implicit */long long int) var_15))));
        arr_33 [i_6] [i_6] = ((/* implicit */unsigned char) arr_30 [i_6]);
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                {
                    arr_40 [(short)10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_38 [i_7 + 1] [i_8 - 1])) ? (((/* implicit */int) arr_38 [i_7 + 1] [i_8 - 1])) : (((/* implicit */int) arr_38 [i_7 + 1] [i_8 - 1])))) : (((int) arr_38 [i_7 + 1] [i_8 - 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_44 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_6] [4] [3ULL] [i_6]))) && ((!(((/* implicit */_Bool) var_11))))));
                        arr_45 [4] [4] [i_7] [4] [11ULL] [4] = ((/* implicit */unsigned int) arr_24 [i_6] [i_6]);
                        arr_46 [(short)10] [(short)10] [i_8] [i_8] [i_7] = ((/* implicit */int) var_7);
                        arr_47 [i_7] [(signed char)11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_8 + 1] [i_9] [i_8 + 1] [i_9])) ? (arr_34 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_34 [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_53 [i_6] [i_6] [i_7] [i_10] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_52 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) << (((arr_34 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]) - (7653153744167825350ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(signed char)4] [(signed char)4] [0ULL] [0ULL]))) : ((-(var_17)))))) ? (((/* implicit */unsigned long long int) min((arr_23 [i_6]), (((((/* implicit */_Bool) arr_30 [i_6])) ? (((/* implicit */int) arr_38 [i_7] [i_10])) : (((/* implicit */int) arr_37 [i_8] [i_8]))))))) : (max((max((arr_41 [i_6] [i_6] [i_6] [10] [i_7]), (arr_41 [i_7] [i_8] [i_8] [i_7] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_6] [i_6] [(signed char)1] [i_6]))) != (var_5))))))));
                                var_24 ^= ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_6] [(unsigned short)10] [i_10] [i_11])))))));
                                arr_54 [(unsigned char)6] [(short)6] [i_6] [(signed char)6] [i_6] &= ((/* implicit */unsigned long long int) (((~(arr_34 [9] [9] [4]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_36 [i_6]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_59 [i_6] [i_6] [i_12] = ((/* implicit */int) arr_30 [i_6]);
            var_25 *= var_12;
            arr_60 [i_6] [i_12] = ((/* implicit */short) ((((arr_57 [i_6] [i_12]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_35 [i_12] [i_12])))))));
            arr_61 [i_6] [i_6] [(signed char)6] &= ((/* implicit */int) ((signed char) ((signed char) arr_23 [i_12])));
        }
    }
    var_26 = ((((/* implicit */_Bool) var_11)) ? (min((max((var_2), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_14)) - (52)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))));
}
