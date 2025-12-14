/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70043
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
    var_15 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) 1380516012)) : (arr_2 [3U] [i_0 + 1])))) ? (((arr_2 [i_0] [i_0 + 1]) & (arr_2 [11LL] [i_0 - 1]))) : (min((arr_2 [5U] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 + 1])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                var_16 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) -977574454)), (arr_2 [11] [i_1]))), (((/* implicit */unsigned int) ((arr_6 [i_0 - 1] [i_1] [i_2 + 1] [i_1]) <= (((/* implicit */int) (unsigned char)250)))))));
                var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) 2140682950)), (2796654057U)));
            }
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)18)))) ? (arr_10 [i_0] [i_0 - 1] [i_0]) : (max((arr_10 [i_0] [i_0 - 1] [i_0]), (arr_10 [i_0] [i_0 - 1] [i_0])))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) min((min((1679115351603752831ULL), (11511743075843618439ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (2796654064U))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_1] [i_0] [i_0 + 1])), (((2796654057U) / (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_3]))))))))))));
                var_20 = (unsigned char)250;
            }
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)199)))) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_6)) ? (644469381437914828LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))))) : (min((((/* implicit */long long int) arr_10 [i_0] [i_0 - 1] [i_0 + 1])), (644469381437914804LL)))));
                    arr_15 [i_5] [i_0] [i_4] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]);
                    arr_16 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((644469381437914858LL) <= (max((((/* implicit */long long int) 1989281326U)), (-1475727786053562097LL)))))) == (((/* implicit */int) max((((((/* implicit */int) (signed char)22)) >= (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_8 [i_5] [i_0] [i_0] [i_0])))))))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) max((arr_12 [i_0] [i_0 + 1] [i_0] [i_0]), (((/* implicit */short) (signed char)-40))))) : (((arr_7 [i_5] [i_1] [i_1]) / (arr_8 [(_Bool)0] [i_1] [i_4] [i_4])))))) : (min((((/* implicit */unsigned int) (+(1007043651)))), (max((2796654064U), (((/* implicit */unsigned int) arr_12 [(signed char)8] [i_1] [3ULL] [i_1]))))))))));
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) (unsigned char)192)))))));
                }
                var_24 = ((/* implicit */unsigned int) max((min((((((/* implicit */int) (signed char)-17)) | (((/* implicit */int) (signed char)20)))), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [11])) : (((/* implicit */int) (signed char)-26)))))), (((((/* implicit */int) (signed char)40)) - (((/* implicit */int) (signed char)17))))));
            }
            arr_17 [i_0] [i_0] = (((~(arr_8 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))) % (((/* implicit */int) ((unsigned char) (~(var_10))))));
            arr_18 [i_0] [i_0 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)30412)) & (((/* implicit */int) (short)30080))))) : (arr_14 [i_0 - 1] [(signed char)7] [i_0 - 1] [i_1] [i_1] [i_0 + 1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((min((((/* implicit */long long int) arr_0 [i_6 + 1])), (1140924208910532553LL))) >> (((arr_1 [i_6]) + (8045211048593556558LL))))), (max((((/* implicit */long long int) ((unsigned char) 975582148))), (((1803037609081213292LL) << (((/* implicit */int) (_Bool)0))))))));
                        var_25 = ((/* implicit */short) (!(((((((/* implicit */_Bool) 717169176018412268ULL)) && (((/* implicit */_Bool) arr_4 [i_6 - 1] [0U])))) || (((/* implicit */_Bool) arr_22 [0U] [0U] [(_Bool)1] [i_0 + 1]))))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0 + 1] [i_8 - 1] [i_9])) >= (((/* implicit */int) arr_9 [i_0 + 1] [i_8 - 1] [(_Bool)1])))) && (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) 3888760344U))), ((-(arr_28 [i_0] [i_0] [i_0]))))))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_9] [i_8 + 1] [i_8 + 1] [8U]), (((/* implicit */short) arr_4 [(_Bool)1] [i_8 + 1])))))))) + (arr_10 [12] [i_8 - 1] [(unsigned char)6]))))));
                var_28 = ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_13 [3U] [3U] [i_9] [i_9])));
                var_29 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)24711))) % (77923913218769236LL))) == (max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (644469381437914875LL))), (((/* implicit */long long int) arr_5 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) 3888760344U);
                            arr_35 [i_11] [i_0] [i_9] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_8] [i_0 - 1])) ? (((/* implicit */int) arr_20 [i_9] [i_10] [i_11 + 1])) : (((/* implicit */int) arr_20 [i_9] [i_8 + 1] [i_0 - 1])))) % (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (644469381437914875LL))) ? (((/* implicit */int) ((signed char) arr_32 [8] [i_8 - 1] [i_8] [7U]))) : (arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 1])))));
                            arr_36 [i_0] [i_0] = min((((((/* implicit */int) ((((/* implicit */int) arr_27 [i_8] [(_Bool)1] [i_11])) != (1153457348)))) <= (((/* implicit */int) max((arr_0 [i_8 + 1]), (var_8)))))), (((((/* implicit */int) (short)18345)) >= ((+(((/* implicit */int) (short)4785)))))));
                            arr_37 [i_0 + 1] [i_0] [i_9] [i_10] [i_11] = ((/* implicit */short) ((((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0])) == (6786445756693598527LL))) ? (((arr_5 [i_0 - 1] [i_0]) * (arr_5 [i_0 - 1] [i_0]))) : (min((arr_5 [i_0 - 1] [i_0]), (arr_5 [i_0 + 1] [i_0])))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                var_31 = arr_33 [i_12] [i_8 + 1] [i_0] [i_0 + 1] [i_0];
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((arr_1 [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))))) | (((/* implicit */long long int) ((/* implicit */int) arr_20 [6U] [i_8 + 1] [i_12]))))))));
                var_33 = ((/* implicit */unsigned char) max((max((arr_28 [i_0 - 1] [i_8 + 1] [i_0]), (arr_28 [i_0 + 1] [i_8 + 1] [i_0]))), (((/* implicit */int) ((arr_32 [3U] [i_0 - 1] [i_0 - 1] [3U]) && (((/* implicit */_Bool) arr_22 [(unsigned char)2] [i_0] [i_8 - 1] [i_8 + 1])))))));
                var_34 = ((/* implicit */_Bool) ((unsigned int) min(((~(arr_39 [i_0 - 1] [i_8]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_0] [i_0])) : (arr_10 [i_0] [i_8] [i_0]))))));
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)234), (arr_9 [2] [i_8 + 1] [i_8 - 1])))) - (((((/* implicit */_Bool) -414909649)) ? (-1544178822) : (326450086)))))) ? (max((min((8603783476444529340ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)21)) ? (-5259895983813113597LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_8 - 1] [6] [(_Bool)1] [i_8])) & (((/* implicit */int) arr_24 [(unsigned char)8] [(unsigned char)8] [i_12])))))))));
            }
        }
    }
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_36 = ((/* implicit */int) max((var_36), (157031992)));
        var_37 = ((/* implicit */int) ((((/* implicit */long long int) max((arr_40 [i_13] [i_13]), (((arr_40 [i_13] [9U]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_13])))))))) <= (-3543870387525018387LL)));
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)));
    }
    var_39 = ((/* implicit */signed char) ((unsigned int) var_10));
}
