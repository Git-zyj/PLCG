/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60123
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [5LL])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (short)5931)))) >> (((/* implicit */int) var_0))));
                        var_14 *= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_3]);
                        arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) (short)-6270)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_1 [i_1])))) != ((-9223372036854775807LL - 1LL))));
                        arr_14 [i_2] [i_4] = ((/* implicit */int) arr_2 [21U] [21U]);
                        arr_15 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_7 [i_0] [i_0] [i_2] [i_4] [i_2]))));
                        var_16 = ((((/* implicit */int) ((_Bool) var_4))) < (((((/* implicit */_Bool) arr_1 [i_4])) ? (1355625707) : (((/* implicit */int) (short)-11098)))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (arr_12 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [(_Bool)1]))))))));
                    }
                    var_18 = ((/* implicit */_Bool) ((unsigned long long int) 9223372036854775788LL));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((arr_6 [i_5] [i_5] [i_5 + 1] [i_5 + 1]) <= (arr_6 [i_5] [i_5 + 1] [12LL] [i_5]))))));
        arr_19 [i_5] = ((/* implicit */short) ((int) arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1]));
    }
    for (long long int i_6 = 2; i_6 < 16; i_6 += 3) 
    {
        var_20 = ((/* implicit */long long int) -767406802);
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((min((max((9223372036854775775LL), (((/* implicit */long long int) 58042867U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6] [i_7]))))))) >> (((max((14700145267541725160ULL), (((/* implicit */unsigned long long int) ((long long int) 12392131777874403746ULL))))) - (14700145267541725150ULL))))))));
            arr_26 [i_6] = ((/* implicit */int) max((4236924403U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_22 = ((((long long int) arr_31 [i_6 - 2] [i_6])) >> ((((-(3407747453733988563ULL))) - (15038996619975563050ULL))));
                        arr_32 [i_9] [i_8] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_30 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_12))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) (short)11666);
                            arr_35 [i_6] = ((/* implicit */_Bool) arr_33 [i_6] [i_10] [i_8] [(unsigned short)3] [i_6] [i_9]);
                        }
                        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            arr_40 [i_6] [i_9] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7086))) * (var_5)))) ? (((arr_3 [i_6] [i_7] [i_8]) << (((((/* implicit */int) arr_0 [i_7])) - (46524))))) : (((/* implicit */int) arr_27 [i_8] [i_7])))), (((/* implicit */int) ((-5650889087421097296LL) <= (((/* implicit */long long int) ((/* implicit */int) ((524224U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
                            var_24 *= arr_22 [i_8];
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((max((((/* implicit */long long int) (unsigned char)171)), (-5650889087421097297LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_31 [i_6 - 2] [i_6 + 1])) == (arr_22 [i_6 - 2])))))))));
                            var_26 = ((/* implicit */long long int) min((max((arr_17 [i_6] [i_6]), (arr_3 [i_6 + 1] [i_6 + 1] [i_6]))), (arr_3 [i_6] [i_7] [i_6])));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((_Bool) (unsigned char)167));
                            var_28 = ((/* implicit */long long int) ((unsigned int) (short)20451));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_2 [(unsigned char)0] [(unsigned char)0])), (arr_4 [i_8]))), (((/* implicit */unsigned long long int) max((arr_34 [i_6] [i_7] [i_6] [i_8] [i_9] [i_12 - 1]), (arr_21 [i_9] [i_6]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8413160469945653754LL)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (unsigned short)19240))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_11 [i_7] [i_8] [i_9] [i_12 - 1])) ? (arr_16 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_12] [7U] [i_6]))))))) : (max((1741095271U), (((/* implicit */unsigned int) arr_17 [i_12 - 1] [i_6]))))));
                            var_30 = ((/* implicit */unsigned short) (-(((149796085U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-11666)))))));
                            var_31 *= ((/* implicit */short) var_8);
                        }
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_11 [i_6 - 2] [i_7] [i_8] [i_8])) ? (5113197023922832040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 + 1] [i_7] [(_Bool)1] [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_8] [i_8])), (301523993U)))) ? (-4126059503094739918LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */unsigned int) -1025494634)) : (var_8))))))))))));
                    }
                } 
            } 
            var_33 ^= ((/* implicit */short) arr_2 [i_6 - 2] [i_7]);
        }
        arr_43 [i_6] [i_6] = arr_28 [(short)1] [i_6 - 2] [i_6 - 1];
    }
    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_46 [i_13] = ((/* implicit */short) arr_17 [i_13] [i_13]);
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                {
                    arr_52 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 864691128455135232ULL))))), ((-(arr_30 [i_13] [i_13] [i_13] [i_13])))))) ? (((((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_13]))) / (arr_20 [i_13] [i_15]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_13] [i_14] [i_14] [i_14] [i_15])) ? (arr_7 [i_13] [i_13] [i_13] [i_13] [i_13]) : (arr_7 [i_15] [i_14] [i_14] [i_13] [i_13]))))));
                    var_34 = ((/* implicit */unsigned int) 1025494626);
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) ((((arr_41 [i_13]) ^ (0U))) >> (((((/* implicit */int) (short)21010)) - (20994)))));
        var_36 = ((/* implicit */unsigned int) arr_5 [i_13] [i_13] [i_13]);
    }
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) != (var_5)));
}
