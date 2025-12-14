/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7546
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
    var_11 |= ((/* implicit */unsigned short) (-((-(-1772148502)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0 + 4]));
        }
        var_12 = ((/* implicit */unsigned int) (((((~(arr_0 [i_0] [i_0]))) + (9223372036854775807LL))) << (((max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_2))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 3])))) - (13126473516537397483ULL)))));
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_13 |= ((/* implicit */signed char) min((2143289344LL), (((/* implicit */long long int) arr_7 [(signed char)8]))));
            var_14 = ((/* implicit */short) min((((/* implicit */int) ((short) (_Bool)1))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_16 [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_0));
            arr_17 [22] = ((/* implicit */long long int) (-(-1188981968)));
            arr_18 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39641))) == (arr_13 [i_2] [i_2] [i_2])))) % (((/* implicit */int) arr_8 [i_2]))));
        }
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((1856014905) >> (((-1188981968) + (1188981989)))))));
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_23 [10LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)52508)) ? (1188981968) : (((/* implicit */int) (unsigned char)15))));
        var_15 = ((/* implicit */short) (unsigned char)100);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            arr_26 [i_5] [i_5] [i_5] |= ((/* implicit */long long int) ((arr_25 [i_5] [i_5]) == (((/* implicit */int) (signed char)-70))));
            var_16 |= ((/* implicit */int) var_9);
        }
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_30 [4ULL] |= ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) -1772148516)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [(unsigned short)10]))) : (arr_3 [0U])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7])))))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            arr_34 [i_7] [(_Bool)0] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-63)) == (((/* implicit */int) (signed char)-63))));
            arr_35 [i_7] = ((/* implicit */_Bool) ((signed char) (unsigned short)57347));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
            {
                arr_43 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                arr_44 [i_9] [i_9] [i_7] = ((/* implicit */_Bool) max((max((min((arr_25 [7ULL] [i_9]), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)25901)) > (((/* implicit */int) var_10))))))), (arr_10 [i_7] [i_7])));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_9 - 1] [i_9 - 1] [i_9 - 1])) + ((-(((/* implicit */int) arr_8 [i_7]))))));
                    var_18 = ((/* implicit */short) max((((11141468) & (-1772148526))), (((((/* implicit */_Bool) arr_29 [i_7] [i_7])) ? (((/* implicit */int) arr_29 [i_7] [i_7])) : (((/* implicit */int) arr_29 [i_7] [i_7]))))));
                    arr_47 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((long long int) (unsigned short)65530)))) ? (((((long long int) arr_0 [i_7] [i_7])) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1142))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)5029)))))));
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2690007141U)) ? (((/* implicit */int) (_Bool)1)) : (1065353216)));
                    var_20 = ((/* implicit */signed char) ((unsigned short) arr_48 [i_7] [i_7] [i_7] [i_7] [i_7]));
                    arr_51 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) 1065353224)) - (3908647025U)))));
                }
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(1188981976))))));
            }
            for (int i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
            {
                arr_54 [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) arr_14 [i_9 - 1])) ? (arr_41 [i_9 - 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9 - 1])))))));
                var_22 |= ((/* implicit */long long int) ((short) ((signed char) (signed char)27)));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    for (unsigned char i_15 = 3; i_15 < 11; i_15 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39641)) << (((((/* implicit */int) (unsigned short)60577)) - (60573))))))))))))));
                            var_24 = ((/* implicit */unsigned char) arr_13 [i_7] [i_7] [i_7]);
                        }
                    } 
                } 
            }
            for (int i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
            {
                arr_64 [(unsigned short)8] [i_7] [i_16] = ((/* implicit */unsigned short) ((1670316453765272366ULL) < (((/* implicit */unsigned long long int) 1554807749U))));
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + ((-9223372036854775807LL - 1LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_7] [i_7] [i_7]), (((/* implicit */short) var_7)))))) - (((((/* implicit */_Bool) 7963848464987914429ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_28 [i_7]))))))));
                arr_65 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) var_3);
            }
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1])))))));
        }
        for (signed char i_17 = 1; i_17 < 11; i_17 += 2) 
        {
            arr_70 [i_7] [i_7] = ((/* implicit */unsigned short) ((max((arr_42 [2U] [i_17 + 2] [i_17] [i_17]), (arr_42 [i_17] [i_17 + 2] [i_17] [i_17]))) ? (((/* implicit */int) arr_42 [i_17] [i_17 - 1] [i_17] [10LL])) : (((arr_42 [i_17] [i_17 + 2] [i_17 + 2] [i_17]) ? (((/* implicit */int) arr_42 [i_17] [i_17 + 1] [i_17] [i_17])) : (((/* implicit */int) arr_42 [i_17] [i_17 + 1] [i_17] [i_17]))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned char) (((!(((/* implicit */_Bool) -1324249504379655500LL)))) ? (((/* implicit */unsigned long long int) arr_49 [i_17 - 1])) : (((var_2) >> (((arr_58 [i_7] [0]) + (5713745707270744062LL)))))))))));
            /* LoopSeq 1 */
            for (int i_18 = 3; i_18 < 12; i_18 += 3) 
            {
                arr_73 [2U] [i_18] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)9))));
                var_28 = (!(((/* implicit */_Bool) ((((unsigned int) 2100644551U)) >> (((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)217)))) - (207)))))));
                arr_74 [8] [i_7] [(unsigned short)12] = ((/* implicit */long long int) 2690007125U);
                arr_75 [i_7] [0ULL] [0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) < (arr_21 [i_17]))))) / (var_3)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_7])) && (((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7])))) ? (var_4) : (((/* implicit */int) ((((/* implicit */int) arr_66 [i_7] [i_7] [(signed char)4])) == (((/* implicit */int) arr_48 [(unsigned short)12] [(unsigned short)12] [i_7] [i_7] [i_7])))))))) : ((-(((((/* implicit */unsigned long long int) 7397931611355893255LL)) / (arr_32 [i_7])))))));
            }
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((max((arr_41 [i_7] [(signed char)6]), (arr_41 [i_7] [(short)6]))), (max((arr_41 [i_7] [(unsigned char)0]), (((/* implicit */unsigned int) arr_27 [6])))))))));
        }
    }
    var_30 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_1)))));
}
