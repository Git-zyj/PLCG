/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8045
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_4))));
    var_14 = ((/* implicit */short) (unsigned short)26380);
    var_15 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (~((((+(((/* implicit */int) arr_0 [i_0])))) % ((~(((/* implicit */int) var_8))))))));
        arr_3 [22LL] = arr_0 [(_Bool)1];
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39155)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_8 [10LL]))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9053))) : (arr_2 [(unsigned short)14] [(unsigned short)14])))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
            {
                arr_12 [(_Bool)1] [(signed char)13] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) <= (arr_1 [i_1])));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_3])))))));
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(17355644024763231747ULL)))) || (((/* implicit */_Bool) var_6))));
                            arr_21 [(short)20] [i_2] [i_2] [i_2] [i_2] [(unsigned char)15] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)26392))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)39142))))) ? ((-(var_4))) : (((/* implicit */long long int) var_5))));
                    var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11))))) == (((/* implicit */int) var_6)));
                    var_21 = ((/* implicit */unsigned long long int) -8390392682714130109LL);
                }
                var_22 = ((/* implicit */short) (+(((var_10) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) : (arr_20 [i_1] [14ULL] [(unsigned char)0] [i_4] [i_4] [(_Bool)1])))));
                var_23 = ((/* implicit */unsigned short) 8390392682714130103LL);
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */short) arr_23 [i_1] [i_1]);
                arr_26 [i_1] [i_1] [i_1] [6] = ((var_3) ? (arr_24 [i_1] [i_2] [i_8] [i_8]) : (arr_24 [i_1] [i_1] [i_1] [i_8]));
                arr_27 [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [(unsigned short)15] [i_8] [(unsigned short)15])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))))));
                var_25 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)26401)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_1] [i_1] [i_8])))));
            }
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) arr_22 [i_1] [i_2]))));
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -2251707886217892732LL)) ? (arr_1 [i_2]) : (var_12)))));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 2251707886217892747LL))));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_29 [(short)14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
            }
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) var_12);
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_10])))))));
                arr_33 [i_10] [i_10] [i_1] = ((/* implicit */long long int) var_7);
            }
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        var_31 = ((/* implicit */int) (~(arr_34 [i_1])));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((var_5) + (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-28))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_42 [i_1] = ((/* implicit */short) arr_11 [(signed char)3] [i_13] [(unsigned short)20] [i_1]);
            var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-18219)) ? (((/* implicit */int) (_Bool)1)) : (-2097152))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_40 [i_1])) : (((/* implicit */int) arr_29 [i_1]))))));
        }
        for (unsigned int i_14 = 4; i_14 < 22; i_14 += 1) 
        {
            arr_46 [i_14] [i_14] &= ((/* implicit */long long int) ((var_3) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [(signed char)5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((arr_2 [i_1] [(unsigned char)12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_14]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4205670273U)) >= (arr_24 [(unsigned char)17] [(unsigned char)17] [i_14] [i_14]))))) == (((((/* implicit */_Bool) 1338166295)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39142))) : (var_5)))))))));
            var_34 = ((/* implicit */long long int) min((var_34), (max((9223372036854775800LL), (((/* implicit */long long int) var_7))))));
            arr_47 [(_Bool)1] [i_14] [i_14] = ((/* implicit */long long int) max((arr_43 [(signed char)0] [i_1]), (var_0)));
            var_35 = ((/* implicit */unsigned int) arr_40 [i_14]);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_36 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_48 [i_1] [i_15]))));
            var_37 *= ((/* implicit */signed char) ((((int) 12)) / (((/* implicit */int) (_Bool)1))));
        }
        var_38 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9))))));
        arr_51 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) (~(89297018U)))) ^ (min((((/* implicit */long long int) arr_41 [i_1])), (var_1)))))));
        arr_52 [22ULL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_40 [(short)14])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)122)), ((unsigned short)26380))))) : (((unsigned long long int) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])))))));
        arr_53 [i_1] [i_1] = ((/* implicit */short) arr_0 [(short)21]);
    }
    for (long long int i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) min((((_Bool) 7960942595727534788ULL)), ((!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), ((short)-26192)))))))))));
        var_40 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))));
        var_41 = ((/* implicit */short) var_11);
    }
}
