/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71416
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [12]) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((8496392316058190281ULL) != (9950351757651361319ULL))))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (arr_0 [i_0]))));
        var_13 = ((/* implicit */long long int) ((unsigned char) 8881806018867957427ULL));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [6])))) == (arr_3 [i_1] [i_1 - 1] [i_1])));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6369568650527731775LL)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) var_1))));
        }
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((int) 5608892367033267327ULL)))));
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                var_18 &= ((/* implicit */unsigned long long int) arr_12 [(signed char)14] [i_0] [i_0] [i_0]);
            }
            var_19 += arr_12 [i_0] [(signed char)5] [(_Bool)1] [i_0];
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-14719)) + (2147483647))) >> (((341001670857407766LL) - (341001670857407740LL)))))) != ((+(var_4)))));
        }
    }
    for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        var_22 &= (~(arr_11 [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1]));
        /* LoopNest 3 */
        for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 6734642316639701623ULL)) || ((_Bool)1)))), ((+(((((/* implicit */int) var_2)) >> (((4827548816323235535ULL) - (4827548816323235510ULL)))))))));
                        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((arr_17 [i_4 - 1]) - (2067731806)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 1099511627775ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_26 = ((((((((_Bool) (short)5136)) ? (arr_22 [i_8]) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8] [i_8])) ? (((/* implicit */int) var_8)) : (arr_3 [i_8] [(unsigned char)0] [10ULL]))))))));
        var_27 &= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_11))))) & (arr_0 [i_8]))), (((/* implicit */long long int) var_10))));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_10 - 1] [i_9])) ? (((/* implicit */int) (short)2044)) : (((/* implicit */int) arr_31 [i_9] [(short)15] [i_11 - 1])))), (((/* implicit */int) var_5))));
                    var_29 = ((/* implicit */signed char) arr_31 [i_9] [i_9] [i_11 - 1]);
                    var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_9])))) : (8881806018867957431ULL))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 2112593057U)) : (((8881806018867957427ULL) >> (((/* implicit */int) var_6))))))));
                    var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_30 [i_9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9])))))) ? (((((/* implicit */_Bool) -3LL)) ? (var_0) : (((/* implicit */int) arr_25 [9ULL] [i_10])))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_31 [i_11 - 2] [i_10 + 1] [(unsigned char)11]))))))) ? (max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_29 [i_11 + 1] [i_10 - 1]))))));
                }
                var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) arr_28 [(unsigned char)0] [(unsigned char)0])), ((short)20272))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (1152921504602652672ULL)))) ? (((/* implicit */int) (unsigned short)65535)) : (min((((/* implicit */int) (short)32767)), ((-2147483647 - 1))))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_30 [i_9]), (((/* implicit */unsigned long long int) 1634815896U))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_12 = 1; i_12 < 15; i_12 += 3) 
    {
        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))));
        var_34 &= ((/* implicit */int) ((_Bool) arr_32 [i_12 + 2] [6U] [i_12 + 3]));
        var_35 = ((/* implicit */unsigned char) var_7);
        var_36 = ((/* implicit */unsigned short) (~(arr_33 [i_12 + 1] [i_12])));
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            var_37 &= ((/* implicit */unsigned char) arr_25 [i_12] [i_13]);
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((short) arr_32 [i_12 + 1] [i_13] [i_12])))));
            var_39 -= ((/* implicit */short) ((unsigned char) arr_28 [i_13] [i_13]));
        }
        for (int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_12 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_16 - 1]))) : (((unsigned long long int) (_Bool)1))));
                            var_41 = (i_12 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */long long int) 3268140904U)) & (var_7))) >> (((arr_33 [i_16 - 1] [i_12]) + (728803649)))))) : (((/* implicit */signed char) ((((((/* implicit */long long int) 3268140904U)) & (var_7))) >> (((((arr_33 [i_16 - 1] [i_12]) + (728803649))) + (1271784804))))));
                            var_42 *= ((((/* implicit */int) arr_38 [i_16 + 1] [i_12 + 3] [i_12])) ^ (((/* implicit */int) arr_38 [i_16 + 1] [i_12 + 1] [i_12])));
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */short) ((2112593040U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
    }
}
