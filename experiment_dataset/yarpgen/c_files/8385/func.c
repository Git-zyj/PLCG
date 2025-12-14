/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8385
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
    var_19 = ((/* implicit */unsigned long long int) min((100663296U), (var_18)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 + 3] [i_0] [i_1 - 3]))));
            var_20 = ((/* implicit */unsigned char) 1013129460U);
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) var_6);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21712))) : (var_16)));
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_12 [i_3] [i_0] [i_0] = ((/* implicit */signed char) var_2);
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 4; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_6 - 3])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_6 - 1])))));
                            var_23 = ((/* implicit */signed char) var_17);
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) arr_20 [i_0] [i_0 + 2])) / (((/* implicit */int) arr_3 [i_0 + 2] [i_0]))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_18 [i_0] [(unsigned short)2]))));
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((2104767134) - (2104767119)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_30 [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_7] [13U] [i_7] [13U]))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) & (((/* implicit */long long int) arr_28 [i_8]))))))))));
            var_28 = var_0;
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_7] [i_8] [i_7] [i_9] [i_10])) + (((/* implicit */int) arr_22 [i_7] [i_8] [i_7] [i_8]))));
                        arr_36 [i_8] [i_8] [i_8] [10LL] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -2104767129)) ? (((/* implicit */int) arr_9 [i_8] [i_8])) : ((+(((/* implicit */int) arr_31 [i_7] [i_8] [(signed char)8]))))));
                        arr_37 [i_7] [i_9] [i_9] [i_7] [i_7] = ((((/* implicit */long long int) arr_34 [i_7] [i_9] [i_8] [i_7])) >= (-807405502594825550LL));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
        {
            var_30 |= (_Bool)1;
            var_31 += ((/* implicit */long long int) arr_8 [i_7] [i_7]);
            arr_42 [i_7] [i_11] [i_7] = ((/* implicit */int) var_10);
        }
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) -5640108758066852729LL))));
            arr_45 [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) var_14))));
            var_33 = ((/* implicit */int) var_4);
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_7] [i_7] [i_12] [i_12]))))) ? (((/* implicit */long long int) var_2)) : (-5640108758066852754LL)));
            var_35 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
        }
        var_36 = ((/* implicit */long long int) arr_27 [i_7] [i_7] [i_7]);
        arr_46 [i_7] = ((/* implicit */signed char) (unsigned char)134);
        arr_47 [i_7] = ((/* implicit */signed char) ((arr_19 [i_7] [i_7] [i_7]) < ((-(0LL)))));
        var_37 += (+(((/* implicit */int) (unsigned char)122)));
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        var_38 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_15)), (100663296ULL))) & (((/* implicit */unsigned long long int) ((((var_12) ? (1593014709549635548LL) : (var_13))) << (((((min((var_5), (var_13))) + (8601784909337551472LL))) - (45LL))))))));
        arr_51 [i_13] = ((/* implicit */signed char) ((((((((var_16) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13] [i_13] [i_13] [i_13]))))) + (9223372036854775807LL))) << (((var_13) - (8653227003750388339LL))))) / (((((/* implicit */_Bool) (short)-31646)) ? (((/* implicit */long long int) 2718233776U)) : (min((807405502594825546LL), (((/* implicit */long long int) var_0))))))));
    }
    for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        arr_54 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_53 [i_14]), (arr_53 [i_14])))) ? ((-(((((/* implicit */_Bool) arr_53 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11247560471244154341ULL))))) : (((/* implicit */unsigned long long int) var_2))));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            arr_57 [i_14] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (unsigned char)167)))))) + (((((/* implicit */_Bool) arr_55 [i_14])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            var_39 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (unsigned char)136)))));
        }
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) min((arr_52 [i_14]), (((/* implicit */short) arr_53 [i_14]))))) > (((((/* implicit */_Bool) -9107354039700894718LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_55 [i_14]))))))) << (((((((/* implicit */_Bool) var_5)) ? (((unsigned int) (unsigned short)36306)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_53 [i_14]))))))) - (36288U))))))));
    }
}
