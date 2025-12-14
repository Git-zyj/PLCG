/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65807
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_16))))) % (((((/* implicit */int) var_11)) << (((var_4) - (1866596128U)))))))));
    var_21 |= (~(((unsigned int) max((((/* implicit */unsigned long long int) 3867506810065964656LL)), (var_18)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_7 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_5 [i_0 + 3] [i_0]))))) & (6364734971303770594ULL)));
            var_22 = ((/* implicit */unsigned int) ((int) ((var_16) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8557255245568999921LL))));
            arr_8 [i_1 + 1] = ((/* implicit */unsigned long long int) (((+(var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1])))));
            arr_9 [i_0] [11LL] [11LL] |= ((/* implicit */unsigned int) var_5);
        }
        var_23 |= ((/* implicit */unsigned int) ((-8557255245568999921LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_24 = ((/* implicit */long long int) 660198304);
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                var_25 = ((((/* implicit */int) (signed char)-74)) / (arr_14 [i_0 + 1]));
                arr_15 [i_0 + 3] [i_0 + 2] [i_2] [i_3] = ((/* implicit */unsigned char) (+(var_7)));
            }
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_26 = ((/* implicit */long long int) ((arr_19 [i_0] [i_0] [i_0 + 1] [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
                    arr_20 [i_0] [(short)0] [i_4] [i_5] = var_3;
                }
                var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_2] [i_0] [i_4])))))));
            }
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                arr_23 [i_0] = ((/* implicit */long long int) ((unsigned char) (-(var_19))));
                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) var_16)))) << (((((((/* implicit */int) (unsigned char)240)) << (((/* implicit */int) (unsigned short)0)))) - (235)))));
            }
            for (short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((arr_14 [i_0]) <= ((~(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) || (((((/* implicit */_Bool) var_14)) || (arr_3 [i_0])))));
                    var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 3]))) % (29U));
                    arr_30 [i_7] [i_0] [i_7] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_12))) + ((-(var_13)))));
                    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                }
                arr_31 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_7] = ((/* implicit */unsigned char) ((((-673418648184602908LL) + (9223372036854775807LL))) << (((660198304) - (660198304)))));
                arr_32 [i_0] [i_7] = ((/* implicit */signed char) (~((-(485076153U)))));
            }
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                var_33 *= ((((/* implicit */int) arr_6 [i_0 + 3] [i_2])) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14454))) > (2168080382U)))));
                var_34 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1))))));
                arr_36 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [i_0] [0] [i_2] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) var_2)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_2))))))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((arr_4 [i_0]) > (((/* implicit */unsigned long long int) var_13)))))));
            }
            arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_0 + 3])) & (((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 3]))));
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) & (arr_4 [i_0 + 3])));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [7ULL])) ? (13699328892060633152ULL) : (((/* implicit */unsigned long long int) var_7))))))))));
                arr_42 [i_0] [i_10] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_15) << (((((/* implicit */int) var_12)) + (24316)))))) ? (((unsigned long long int) var_18)) : (((/* implicit */unsigned long long int) var_17))));
            }
        }
        for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
        {
            var_38 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)215)) ? (arr_28 [i_0] [(short)3] [i_12] [i_12] [i_0] [(_Bool)1]) : (((/* implicit */int) (_Bool)1))))));
            var_39 = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [i_0 + 2]))));
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                arr_49 [i_0] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_18) >> (((arr_34 [i_12] [i_12] [i_12] [i_0]) - (1323761390U)))))) ? (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned char)133)))) : (var_19)));
                var_40 = ((/* implicit */unsigned char) ((var_19) * (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_24 [13U])))))));
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_43 [i_0] [12U]))))))));
            }
            for (short i_14 = 1; i_14 < 21; i_14 += 4) /* same iter space */
            {
                var_42 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))) : (var_4)))));
                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (17192298574065722079ULL)))))));
            }
            for (short i_15 = 1; i_15 < 21; i_15 += 4) /* same iter space */
            {
                var_44 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)105)) & (var_13)));
                var_45 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_46 [i_0] [i_12] [i_15]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (arr_13 [i_0] [(_Bool)1] [i_15]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    arr_59 [(signed char)12] [(signed char)12] [i_0] [i_0] [i_0 + 2] [i_15] = ((/* implicit */short) (((+(var_15))) != (((arr_0 [i_0 + 3]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (short i_17 = 3; i_17 < 21; i_17 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) 11908025217652678617ULL);
                        arr_62 [i_0] [i_0] [17ULL] [i_15 - 1] [i_15] [15U] [i_17] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_15 + 1] [i_15 + 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))) + (((((/* implicit */unsigned long long int) 2715851923U)) & (arr_55 [i_0]))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        arr_66 [i_0] [i_12] [i_12] [i_16] [i_12] = ((/* implicit */unsigned long long int) (((~(8852921339195097179ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((352407484U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_12] [i_15] [i_12])))))))));
                        var_47 -= ((/* implicit */int) arr_50 [i_0] [i_0] [(_Bool)1] [i_16]);
                    }
                    arr_67 [4LL] [i_12] [i_12] [i_15] [i_15 + 1] [i_16] = 612663221855967167LL;
                }
            }
            /* LoopSeq 1 */
            for (long long int i_19 = 3; i_19 < 20; i_19 += 4) 
            {
                arr_71 [i_0] [i_0] [i_12] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_4)))) - (((long long int) arr_16 [i_0] [i_12]))));
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (264633604U) : (((/* implicit */unsigned int) 660198304))));
                arr_72 [i_0] [i_19 - 2] = ((/* implicit */signed char) (-(4179907599U)));
            }
        }
    }
    for (long long int i_20 = 0; i_20 < 13; i_20 += 3) 
    {
        var_49 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (max((var_4), (var_14)))))) != (((((/* implicit */int) ((-1177464214) > (((/* implicit */int) (unsigned short)20))))) % (((/* implicit */int) arr_57 [i_20] [i_20] [i_20] [i_20]))))));
        arr_75 [i_20] = ((/* implicit */unsigned char) (~(var_10)));
        var_50 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3U))))))));
        var_51 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) & (min((18446603336221196288ULL), (((/* implicit */unsigned long long int) (signed char)75))))));
    }
    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) var_1))));
    var_53 = ((/* implicit */unsigned long long int) ((((((2147483648U) & (1215914133U))) << ((((-(((/* implicit */int) (unsigned short)21053)))) + (21083))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1)))))));
}
