/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80778
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
    var_19 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-15601)) : (((/* implicit */int) (short)-28247))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (short)-28255);
        var_21 = ((/* implicit */unsigned int) ((((_Bool) (-(((/* implicit */int) (signed char)75))))) ? (((/* implicit */int) var_17)) : (min((min((1642917973), (((/* implicit */int) (short)-28260)))), ((~(((/* implicit */int) (unsigned char)190))))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (~((~(((long long int) (_Bool)0)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_12);
            var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 10667545298916032027ULL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) var_13))))));
        }
        for (long long int i_3 = 3; i_3 < 24; i_3 += 4) 
        {
            var_23 = ((((var_9) ? (arr_3 [i_3] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-28245))))) / (((/* implicit */long long int) arr_5 [i_1] [i_1])));
            var_24 = ((/* implicit */signed char) ((unsigned char) (+(-1642917997))));
            arr_11 [5LL] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-28247))))) - (arr_3 [i_3 - 2] [i_3 + 1])));
            arr_12 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) min((var_18), ((signed char)75))))) ^ (((((/* implicit */_Bool) arr_9 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65)))))))));
            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((5556459548179812562ULL) < (((/* implicit */unsigned long long int) arr_10 [i_3 - 3])))))));
        }
        arr_13 [i_1] = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28254))) + (var_10))) >> (((max((0LL), (((/* implicit */long long int) var_1)))) - (2646684493LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095LL)) ? (((/* implicit */int) (short)-28266)) : (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 664405648U)))) : (arr_10 [i_1]))))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 24; i_5 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) (((~(-9045791430168022607LL))) >> (((((/* implicit */int) var_17)) >> (((-1642917985) + (1642918009)))))));
            var_27 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)35187))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                var_28 += ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2147483647ULL))) % (((/* implicit */unsigned long long int) arr_19 [i_4] [i_6] [i_7]))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (short)-13279))));
                arr_25 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [(signed char)21] [(unsigned short)21])) ? (var_12) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((unsigned short) var_2)))));
                var_30 = ((/* implicit */unsigned long long int) var_0);
            }
            for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
            {
                arr_28 [i_6] = ((/* implicit */_Bool) ((((6213359948156122820ULL) < (((/* implicit */unsigned long long int) 5333574991475002394LL)))) ? (((((/* implicit */_Bool) (short)15924)) ? (16073252945656275325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11933))))) : ((~(arr_21 [i_6])))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            arr_34 [i_4] [i_6] [i_6] [i_9] [i_4] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)91))));
                            arr_35 [i_4] [i_4] [(unsigned short)23] [(unsigned short)23] [i_10] = ((signed char) (-(arr_32 [(unsigned short)0] [i_9] [7LL] [i_6] [i_4])));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_8 + 1] [i_4] [i_4]))));
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4216))) : (((10667545298916032027ULL) / (((/* implicit */unsigned long long int) -394738972))))));
            }
            arr_36 [10LL] = ((/* implicit */long long int) ((short) 2904240979U));
            var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) 5627646846926481122LL)))));
            arr_37 [i_6] = ((/* implicit */long long int) var_1);
        }
        for (long long int i_11 = 3; i_11 < 23; i_11 += 1) 
        {
            var_34 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)104)) ? (min((17949516878040960006ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), ((short)-28245))))))), (min((((((/* implicit */_Bool) (short)28270)) ? (((/* implicit */unsigned long long int) -9045791430168022626LL)) : (16288731020807744224ULL))), (arr_21 [i_11 + 1])))));
            var_35 |= ((/* implicit */short) ((min((arr_21 [i_11 - 3]), (var_10))) / (((/* implicit */unsigned long long int) ((((arr_5 [i_4] [(_Bool)1]) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_18 [i_11] [11ULL] [i_4])) > (arr_5 [(short)6] [(short)6])))) - (1))))))));
            var_36 = ((/* implicit */signed char) var_6);
        }
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_37 = ((((((/* implicit */_Bool) arr_14 [i_12] [(unsigned char)0])) ? (arr_3 [i_12] [i_4]) : (((/* implicit */long long int) arr_5 [i_4] [i_12])))) & (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_4] [i_12]))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)41))))) || (((/* implicit */_Bool) 4885075598525826318ULL))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28260)) ? (var_12) : (((/* implicit */int) (signed char)-8))));
                            arr_51 [i_12] = ((/* implicit */int) 3578626036438681519ULL);
                        }
                    } 
                } 
                var_40 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_44 [i_4] [12U])))) ? ((+(arr_21 [(unsigned short)11]))) : (((/* implicit */unsigned long long int) 4579780360869673382LL))));
                arr_52 [(_Bool)1] [i_12] [i_13] [i_13] = ((/* implicit */signed char) (~(-8475755584413506286LL)));
            }
            var_41 -= ((/* implicit */unsigned long long int) ((unsigned int) (~(var_14))));
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 1; i_16 < 24; i_16 += 2) 
            {
                arr_56 [i_12] [i_4] [i_16] = ((/* implicit */signed char) (-(0LL)));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            arr_61 [i_4] [i_4] [i_12] [i_12] [i_12] [i_17] [i_18] = ((/* implicit */unsigned int) -1830506179035668549LL);
                            var_42 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_55 [i_17] [i_16] [i_17])) || (((/* implicit */_Bool) var_15)))));
                        }
                    } 
                } 
                arr_62 [i_4] [i_4] [i_12] [i_16] = (signed char)-27;
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_66 [i_4] [i_4] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((18014364149743616ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) - (arr_58 [i_4] [i_12] [i_12] [i_19] [i_12])));
                var_43 = (signed char)-100;
            }
            var_44 = ((/* implicit */signed char) (+(((/* implicit */int) var_18))));
        }
        var_45 = ((/* implicit */int) ((signed char) ((short) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */long long int) var_12)) : (3485929952837714617LL)))));
        var_46 = ((/* implicit */long long int) arr_23 [i_4] [i_4] [i_4] [i_4]);
    }
    for (int i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
    {
        arr_71 [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [(signed char)0] [i_20] [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_57 [17U] [i_20] [i_20] [12] [i_20] [i_20])) : (((/* implicit */int) arr_57 [i_20] [i_20] [i_20] [(signed char)18] [i_20] [(short)0])))))));
        var_47 *= ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) var_7)) ? (-7412007772090746814LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18171))))))), (((((/* implicit */_Bool) arr_19 [i_20] [(unsigned short)19] [i_20])) ? (((/* implicit */long long int) (+(arr_19 [i_20] [i_20] [i_20])))) : (max((-1790299167334218047LL), (((/* implicit */long long int) arr_29 [i_20] [i_20]))))))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                {
                    var_48 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_4))))));
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 25; i_24 += 2) 
                        {
                            {
                                arr_83 [i_20] [i_21] [i_20] [i_23] [i_20] = ((/* implicit */unsigned long long int) (unsigned short)47353);
                                var_49 += (signed char)-13;
                                var_50 += ((/* implicit */long long int) (((+(((/* implicit */int) arr_20 [i_21] [i_23] [i_24])))) + (((/* implicit */int) var_7))));
                                var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) arr_53 [i_20] [i_23] [i_23] [i_24]))));
                                var_52 = ((/* implicit */short) max((max((((((/* implicit */int) var_11)) << (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)34531)))), ((+(((/* implicit */int) arr_73 [i_20] [i_21]))))));
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)8))))) >= ((-(-5627646846926481094LL)))))), (((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)(-127 - 1)))))))));
                    var_54 |= ((/* implicit */_Bool) arr_76 [i_20] [i_20] [i_20] [i_20]);
                }
            } 
        } 
    }
    var_55 = ((/* implicit */unsigned int) max((((var_4) ? (((/* implicit */unsigned long long int) ((int) var_9))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (2158013052901807413ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-41))))), (-130408816346121977LL))))));
}
