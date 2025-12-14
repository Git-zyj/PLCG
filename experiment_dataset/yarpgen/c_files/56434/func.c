/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56434
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
    var_12 = min((((((/* implicit */_Bool) min((var_7), (var_11)))) ? (((((/* implicit */_Bool) 2423794253U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)8176)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2423794250U)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)60666)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (+(2423794253U)))))));
        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)8192)) - (((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_0]))))))) : ((+(9223372036854775803LL)))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned short)4845), (((/* implicit */unsigned short) (signed char)5))))), (min((((/* implicit */long long int) (signed char)-24)), (9223372036854775803LL))))))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                arr_13 [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((signed char) arr_10 [i_2] [i_2] [i_3] [i_2 - 1])));
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)8174)) ? (-1990747272035264811LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60666))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)240)), ((+(2423794250U)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4572)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)101))))) - ((+((-9223372036854775807LL - 1LL))))))));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_16 = ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (signed char)93)), (arr_8 [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8186))))) ? (((var_6) & (((/* implicit */int) var_4)))) : (((((/* implicit */int) (unsigned short)60963)) - (((/* implicit */int) (unsigned short)4577))))))) : ((+(arr_8 [i_2 + 3] [i_2]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_6])) + (((/* implicit */int) (short)11115))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)39))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4863))) - (var_8)))))) ? (((int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4870)))))) : ((+((+(((/* implicit */int) (unsigned short)4870))))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-8208), (((/* implicit */short) (signed char)127))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1]))))) : (((unsigned int) var_10))))) ? ((+(((/* implicit */int) (short)-8214)))) : (((((/* implicit */_Bool) 7967517799627860721ULL)) ? (((/* implicit */int) arr_24 [i_2 + 1] [i_5] [i_2 - 1])) : (((/* implicit */int) arr_24 [i_2 + 2] [i_1] [i_2 + 3])))))))));
                            arr_26 [i_1] [i_2] [i_4] [i_2] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)60664))));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */int) max((arr_15 [i_1] [i_4] [i_2] [i_2 + 1]), (arr_15 [20] [(signed char)9] [i_4] [i_2 + 1])))) / ((-(arr_4 [i_2 + 3])))));
                            arr_27 [i_6] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_19 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) (+(((var_3) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (3818821737U)))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_35 [i_1] [i_2] [i_4] [i_2] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_8]))));
                        arr_36 [i_1] [i_2] [i_7 + 1] [i_8] = ((((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_7 + 2])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) <= (((/* implicit */unsigned long long int) min((-1808670215), (((/* implicit */int) (unsigned short)60664))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_21 = ((unsigned int) ((((((/* implicit */int) var_10)) << (((1659911621041036191ULL) - (1659911621041036178ULL))))) << ((((((~(((/* implicit */int) (unsigned short)60673)))) + (60692))) - (17)))));
                        var_22 = ((/* implicit */signed char) min((min((68652367872LL), (((/* implicit */long long int) (signed char)92)))), (((/* implicit */long long int) arr_18 [(short)20] [(short)20] [(short)20]))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (9223372036854775803LL)));
                    }
                }
                arr_41 [i_1] [i_2] [i_2] = (~(9223372036854775803LL));
            }
            /* LoopSeq 2 */
            for (unsigned char i_10 = 2; i_10 < 23; i_10 += 3) 
            {
                var_24 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_15 [i_10] [i_2 - 1] [i_2 + 3] [i_1])))));
                arr_44 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_1] [i_2 + 2] [i_10 - 2])))) : (((((/* implicit */_Bool) ((short) arr_23 [i_10] [i_2 + 2] [i_2] [i_1] [i_1]))) ? (arr_31 [i_2] [i_2]) : (((/* implicit */unsigned long long int) -681464855))))));
                arr_45 [i_1] [i_1] [i_10 + 1] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 3] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) (signed char)36))))) : ((+(arr_9 [i_1] [i_1])))))));
                arr_46 [i_10 - 1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_33 [i_1] [i_1] [i_2] [(unsigned char)4] [i_10] [i_10 - 1] [i_2])))))) >= (((int) ((arr_17 [i_1] [i_1]) ? (arr_7 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2 + 3] [i_2 + 3] [i_2]))))))));
            }
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_25 += ((/* implicit */unsigned char) -886997220);
                var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_19 [i_1] [i_2 + 2] [i_11] [i_2 + 3]), (arr_19 [i_1] [2ULL] [i_11] [i_2 + 2])))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [16U] [i_2 + 3] [i_2 + 1]))) : (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [16] [i_2 + 1] [i_2 + 1] [i_2 - 1])))))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_24 [i_2] [i_2] [i_1])), (1340778040U)))) ? ((~(482981824168486928LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_2])))))))) ? (((/* implicit */unsigned long long int) 3303867486221202200LL)) : (min((((unsigned long long int) arr_47 [i_11] [(unsigned char)21])), (min((arr_9 [(_Bool)0] [(signed char)20]), (((/* implicit */unsigned long long int) var_1))))))));
            }
            var_28 *= ((/* implicit */unsigned long long int) arr_18 [i_2] [i_1] [i_1]);
        }
        var_29 = ((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_1] [(signed char)23] [(signed char)23] [i_1]);
    }
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        for (signed char i_13 = 2; i_13 < 23; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 476145562U)) ? (7855810072796078663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13 - 1]))))));
                    var_31 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_22 [i_13])) ? (((((/* implicit */_Bool) 0U)) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2092))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)59)))))), ((+(((((/* implicit */_Bool) (short)-8214)) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_13] [i_13] [i_14] [13] [i_13])))))))));
                }
            } 
        } 
    } 
    var_32 ^= ((/* implicit */unsigned long long int) ((unsigned short) -68652367856LL));
    var_33 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 476145566U)) : ((+(-7733389616591652709LL)))))));
}
