/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77283
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
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_15 *= max((arr_0 [i_0 + 1]), (arr_1 [i_0 - 2] [(short)9]));
        arr_3 [i_0] = ((short) ((((/* implicit */int) var_0)) & (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)96))))));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4688598500843627279ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (short)7906)) : (((/* implicit */int) (short)-16384))));
            /* LoopNest 3 */
            for (signed char i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_11 [i_1 + 2] [i_2])))) + (2147483647))) >> (((((/* implicit */int) var_12)) + (107)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((short) arr_15 [i_1] [i_1 + 1] [i_1 - 2] [i_1] [16ULL]))) ? (((/* implicit */int) ((signed char) (signed char)-96))) : (((/* implicit */int) max(((short)24576), (((/* implicit */short) (signed char)22)))))))));
                            var_18 = ((/* implicit */short) min(((-(((/* implicit */int) (short)0)))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_4] [(short)20])) : (((/* implicit */int) arr_6 [(short)15] [(short)12] [(short)12])))) - (((/* implicit */int) (short)-14012))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_15 [i_1 + 1] [i_1 - 1] [11ULL] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [(short)22] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [(short)12] [(signed char)8])))) : (((/* implicit */int) min((((/* implicit */short) arr_5 [i_1])), (arr_9 [(short)24] [i_1] [i_1] [(signed char)1]))))))));
        }
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_20 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (short)-24577)), (13758145572865924337ULL))), (12857304227120108411ULL)));
            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_13 [i_1 + 2]), (arr_13 [i_1 - 2])))) ? (((/* implicit */int) min((arr_13 [i_1 - 1]), (arr_9 [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) arr_13 [i_1 - 2]))));
            arr_20 [i_6] [(short)24] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_6] [(short)19] [i_6] [10ULL])) || (((/* implicit */_Bool) arr_18 [i_1 + 2]))))))) : (((/* implicit */int) arr_17 [i_1] [i_6]))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (short i_8 = 3; i_8 < 24; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 22; i_9 += 2) 
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1 + 1] [i_1] = ((signed char) ((((/* implicit */_Bool) (short)976)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)-8))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24570)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10))) : (13758145572865924336ULL)));
                            var_23 |= ((/* implicit */signed char) ((13758145572865924336ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1] [7ULL] [i_6] [i_6] [(signed char)5] [i_8] [i_9 - 1])) - ((-(((/* implicit */int) arr_22 [i_6] [(short)4])))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_24 &= ((/* implicit */unsigned long long int) arr_25 [i_6] [(short)21] [i_6]);
                            var_25 = (short)-26088;
                            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [(short)5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))) ? ((+(((((/* implicit */_Bool) (short)28421)) ? (((/* implicit */int) arr_25 [(signed char)7] [(signed char)7] [i_1])) : (((/* implicit */int) arr_7 [i_7] [i_8 - 1])))))) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1]))));
                            var_27 ^= ((short) ((((/* implicit */int) max((var_8), (arr_15 [i_1] [(short)19] [i_7] [(signed char)5] [(short)12])))) & (((/* implicit */int) arr_7 [i_1] [i_6]))));
                        }
                        var_28 ^= (short)6144;
                        var_29 += ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_1] [(short)5] [i_7] [i_8] [i_8 - 2]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            arr_36 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-34)) + (((/* implicit */int) ((signed char) var_6)))));
            arr_37 [i_1] [i_11] = ((/* implicit */signed char) min(((-((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_11])))))), (((((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (short)28419)) : (((/* implicit */int) var_9)))) >> (((((/* implicit */int) var_4)) + (16238)))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)1]))) : ((-(var_6))))) : (min(((-(var_7))), (((/* implicit */unsigned long long int) arr_4 [i_11]))))));
            var_31 = ((short) (short)15415);
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (signed char i_13 = 1; i_13 < 24; i_13 += 3) 
                {
                    {
                        var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) ((signed char) var_13))) : ((-(((/* implicit */int) arr_17 [i_1] [i_1])))))), (((((/* implicit */_Bool) arr_28 [i_12] [22ULL] [i_11] [i_13] [i_12])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1] [21ULL] [(short)20] [(short)20] [i_1] [i_1] [i_1 - 2])) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_17 [i_1 + 2] [i_1 + 1]))))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 2; i_14 < 22; i_14 += 3) 
                        {
                            var_33 += ((signed char) ((unsigned long long int) 1073741823ULL));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15415)) * (((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (short)26794)) : (((/* implicit */int) arr_16 [i_1 - 1] [i_11] [(short)13] [(short)19] [(short)13] [(short)13]))))))) ? ((+(((/* implicit */int) arr_25 [i_1] [i_14] [i_12])))) : (((((/* implicit */_Bool) arr_15 [i_14 - 2] [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 3])) ? (((/* implicit */int) arr_15 [i_14 - 2] [i_14 + 2] [i_14] [i_14] [i_14 - 2])) : (((/* implicit */int) arr_15 [i_14 + 3] [i_14 - 2] [i_14] [(signed char)22] [i_14 + 2]))))));
                            var_35 &= ((/* implicit */short) ((signed char) max((arr_22 [i_11] [i_11]), (arr_6 [i_1 - 2] [i_13 - 1] [(short)0]))));
                            var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)27485)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-27486))));
                            arr_47 [i_13] = ((signed char) ((unsigned long long int) ((short) arr_14 [i_1] [1ULL] [(signed char)2] [i_12] [i_13] [8ULL] [i_14 + 2])));
                        }
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11299)) ? (((/* implicit */int) (short)-27467)) : (((/* implicit */int) (short)20432)))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_46 [(signed char)22] [i_12] [i_12] [(signed char)22] [i_15] [i_12])), (arr_18 [i_12])))))) ? (((/* implicit */int) ((signed char) max((var_10), (arr_11 [i_1] [i_13]))))) : (((((/* implicit */_Bool) arr_43 [i_11] [(short)20] [i_12] [(short)6])) ? (((/* implicit */int) arr_26 [i_1] [i_13] [i_1])) : (((/* implicit */int) max(((short)-15397), (((/* implicit */short) var_2))))))))))));
                        }
                        var_39 = ((/* implicit */signed char) ((short) ((short) var_0)));
                        var_40 *= ((/* implicit */short) (-((-(((((/* implicit */_Bool) (short)26820)) ? (((/* implicit */int) (short)20436)) : (((/* implicit */int) (signed char)-58))))))));
                    }
                } 
            } 
        }
        for (short i_16 = 1; i_16 < 22; i_16 += 2) 
        {
            arr_54 [i_16] [i_16] = var_10;
            arr_55 [i_16] [i_16] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1])))))) ? (((/* implicit */int) arr_34 [i_1 - 2])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_16 [i_16] [i_16] [(signed char)13] [i_16] [i_16] [i_16])), (arr_43 [i_16] [i_16] [i_1] [i_16])))))));
        }
        arr_56 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (short)6))));
    }
    var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) 7479625315253234054ULL)) || (((/* implicit */_Bool) (short)32766))));
}
