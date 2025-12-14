/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99810
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [10U] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max(((~(max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_12))))), (((/* implicit */long long int) min((-1557631389), (((/* implicit */int) (_Bool)0))))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(var_14)))) < (((/* implicit */int) var_11))))) >> (((((1685004974176431541LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))))) - (8219536459397225LL)))));
            arr_9 [i_1] = ((/* implicit */unsigned short) var_9);
            arr_10 [i_2] = ((/* implicit */unsigned int) max((min((((4582868840909400236LL) | (((/* implicit */long long int) ((/* implicit */int) (short)23425))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (231166392U)))))), (((/* implicit */long long int) arr_4 [i_1 + 3]))));
        }
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-13486))));
        arr_11 [i_1] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1 - 1])))));
        var_18 -= ((/* implicit */long long int) max((((unsigned long long int) ((short) var_11))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28627)))))));
        var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1])), (var_13)))), ((+(-1557631389)))))), (max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_5 [i_1] [i_1]) : (3893796967U)))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) arr_7 [i_3 - 1]);
        arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) / (1046242080U)));
        /* LoopSeq 3 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            arr_17 [(short)1] = ((/* implicit */int) arr_13 [i_3 - 1]);
            arr_18 [i_3] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (unsigned char)186)))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((arr_21 [i_3 - 1] [i_5 - 1] [i_5 + 2]) >> (((var_6) - (4212739546242453734LL)))));
            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_5]))));
        }
        for (short i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3])) | (((/* implicit */int) (unsigned char)228))));
            arr_25 [i_3 - 1] [i_6] [i_6] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 6558127601837925674ULL))))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                arr_30 [i_3] [i_6] [i_6] [i_7 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_12)) : (4863362160396944498ULL))))));
                arr_31 [i_6] = ((/* implicit */int) arr_6 [i_6 + 2]);
                var_24 += ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3] [i_7])) ? (((/* implicit */int) arr_23 [i_3 - 1])) : (((/* implicit */int) (unsigned short)44180))));
            }
        }
        var_25 = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) >= (var_7)));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_26 [i_8 - 1] [i_8] [i_8] [(short)14]))));
        var_27 ^= ((/* implicit */short) arr_5 [i_8 - 1] [i_8 - 1]);
        arr_36 [i_8] [(short)6] = ((/* implicit */unsigned short) ((unsigned char) min((arr_19 [(short)0] [i_8]), (((/* implicit */long long int) var_2)))));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_35 [i_8])), (12170828479093096718ULL)))) && (((/* implicit */_Bool) ((arr_5 [i_8] [i_8]) >> (((((/* implicit */int) arr_13 [i_8 - 1])) - (40752))))))))) < (((/* implicit */int) var_3)))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    arr_46 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) max((((((((/* implicit */int) arr_43 [i_11] [i_10] [i_9])) + (2147483647))) >> (((((/* implicit */int) arr_43 [i_9] [i_10] [i_11])) + (2158))))), (var_0)));
                    var_29 = ((/* implicit */int) (short)11533);
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_4 [i_9]))));
                    arr_47 [i_10] [i_10] [i_11] = ((unsigned int) max((min((arr_39 [i_10]), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((short) var_13)))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (var_11)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1415016880) : (((/* implicit */int) (short)11525)))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
    {
        arr_50 [i_12] = ((/* implicit */unsigned char) arr_6 [i_12]);
        var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */_Bool) arr_48 [i_12] [i_12])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (short)18550)) : (var_0))))))));
        arr_51 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_7 [i_12])) / (2180349243052333523ULL)));
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
    {
        var_33 ^= ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_9))));
        arr_54 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) min(((short)7662), (arr_4 [i_13])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_13])), (var_13))))));
        var_34 = ((/* implicit */unsigned long long int) ((unsigned int) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)117)), (-2087097723)))))));
        arr_55 [i_13] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 2739694242U)) ? (((/* implicit */int) (short)-8501)) : (((/* implicit */int) (unsigned short)12169)))), (((/* implicit */int) arr_42 [i_13] [i_13])))) / (((((((/* implicit */_Bool) arr_4 [i_13])) && (((/* implicit */_Bool) (unsigned char)186)))) ? (((/* implicit */int) (short)7662)) : (max((1557631388), (((/* implicit */int) (signed char)-63))))))));
    }
    for (signed char i_14 = 3; i_14 < 16; i_14 += 1) 
    {
        var_35 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_48 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-68)), (arr_57 [i_14] [i_14]))))) : (arr_7 [i_14]))));
        arr_58 [i_14] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_53 [i_14]))) ? ((-(((/* implicit */int) arr_52 [18U] [18U])))) : (((/* implicit */int) arr_52 [i_14] [i_14]))))), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_0)) : (172277765U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned short)62688)) - (62683))))))))));
    }
    for (unsigned short i_15 = 1; i_15 < 7; i_15 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) var_3);
        /* LoopSeq 3 */
        for (short i_16 = 3; i_16 < 6; i_16 += 3) 
        {
            var_37 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [i_15 + 3]))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [(signed char)14])))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12864162659135008178ULL)))))));
            var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_16])) >> (((arr_7 [i_15 + 3]) - (1148397010U)))))) ? (max(((+(((/* implicit */int) (short)-16162)))), (((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)31)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_16])))))))));
        }
        for (short i_17 = 1; i_17 < 8; i_17 += 3) 
        {
            var_39 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) var_11)));
            arr_69 [i_17] = ((/* implicit */unsigned int) arr_57 [i_15] [i_15]);
        }
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            arr_73 [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (979576356U)))))));
            var_40 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((var_12) | (((/* implicit */long long int) -995312706)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_35 [i_18])), (var_7))))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
            arr_74 [i_18] = ((/* implicit */short) ((min((arr_39 [i_18]), (arr_39 [i_18]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_18])) && (((/* implicit */_Bool) arr_39 [i_18]))))))));
            arr_75 [i_18] = ((/* implicit */short) arr_2 [i_15] [i_18]);
            arr_76 [i_18] = ((/* implicit */unsigned long long int) (short)-23186);
        }
    }
    var_41 ^= ((short) var_2);
}
