/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60739
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((var_11), (var_8)))) != (((/* implicit */int) var_0))))) + (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_0] [i_0])) != (((/* implicit */int) (unsigned short)65519)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)50856)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0]))) == (((/* implicit */int) (unsigned short)63821))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1] [i_1])) | (((/* implicit */int) var_12)))) << (((((/* implicit */int) (unsigned short)4698)) - (4694)))))) ? (((((/* implicit */int) (unsigned short)4723)) - (((/* implicit */int) (unsigned short)62244)))) : (((/* implicit */int) (unsigned short)4718))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 24; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_12 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_3])) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)65530)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29944)))))));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65530)) >= (((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3]))))) * (((((/* implicit */int) arr_11 [(unsigned short)4] [(unsigned short)4] [i_3] [i_3])) | (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_19 = var_5;
                            arr_22 [i_5] [i_2] [i_2] [i_5] [i_6] = (unsigned short)1695;
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55145)) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_4] [i_5] [i_6])) && (((/* implicit */_Bool) arr_7 [i_1])))))));
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3297)) != (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_22 = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)60854)) ? (((/* implicit */int) (unsigned short)1695)) : (((/* implicit */int) (unsigned short)4))));
                    var_23 += (unsigned short)65514;
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
                }
                var_25 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_1] [i_1] [(unsigned short)15] [i_1]))));
            }
            var_26 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) >> (((/* implicit */int) (unsigned short)5)))) % (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (unsigned short)4945)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned short)3287)))) : (((/* implicit */int) max(((unsigned short)41291), ((unsigned short)4704))))))));
            arr_25 [(unsigned short)2] [(unsigned short)16] [i_2] = arr_18 [i_1] [i_2] [i_2] [i_2 + 1];
            arr_26 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_7 [i_2 - 1]), ((unsigned short)4681)))) ? (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned short)21602)) : (((/* implicit */int) (unsigned short)21507)))) : (((/* implicit */int) ((unsigned short) (unsigned short)61180)))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 23; i_9 += 4) 
            {
                var_27 = ((unsigned short) (unsigned short)60817);
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 23; i_10 += 2) 
                {
                    for (unsigned short i_11 = 2; i_11 < 24; i_11 += 2) 
                    {
                        {
                            arr_38 [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63831)) ? (((/* implicit */int) (unsigned short)33030)) : (((/* implicit */int) (unsigned short)16228))));
                            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4958)) % (((/* implicit */int) (unsigned short)6173))));
                            var_29 += ((/* implicit */unsigned short) (((+(((/* implicit */int) var_3)))) >= (((/* implicit */int) arr_7 [i_9]))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (unsigned short i_13 = 1; i_13 < 23; i_13 += 3) 
                {
                    for (unsigned short i_14 = 3; i_14 < 23; i_14 += 4) 
                    {
                        {
                            var_30 = (unsigned short)65535;
                            arr_47 [i_1] [i_1] [i_1] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [(unsigned short)20] [i_8]))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)60858)) * (((((/* implicit */int) (unsigned short)63821)) % (((/* implicit */int) (unsigned short)62244))))));
        }
        for (unsigned short i_15 = 2; i_15 < 24; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                for (unsigned short i_17 = 2; i_17 < 23; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_17 + 1]), ((unsigned short)62244)))) ? ((+(((/* implicit */int) arr_2 [i_16] [i_17 + 2])))) : (((/* implicit */int) (unsigned short)63821))));
                        var_33 = var_6;
                        var_34 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)60854)) >> ((((~(((/* implicit */int) (unsigned short)63335)))) + (63342)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_18 = 1; i_18 < 22; i_18 += 4) 
            {
                for (unsigned short i_19 = 1; i_19 < 23; i_19 += 2) 
                {
                    for (unsigned short i_20 = 4; i_20 < 22; i_20 += 2) 
                    {
                        {
                            var_35 = (unsigned short)65516;
                            arr_63 [i_1] [i_1] [i_15] [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_19 [i_18] [i_18] [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) (unsigned short)28424))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_21 = 1; i_21 < 24; i_21 += 2) 
        {
            arr_67 [i_21 + 1] = arr_37 [i_1] [i_1] [i_21 - 1] [i_21] [i_21 + 1] [i_21];
            /* LoopNest 2 */
            for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                for (unsigned short i_23 = 2; i_23 < 23; i_23 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)25449)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((min(((unsigned short)63831), ((unsigned short)65535))), ((unsigned short)65529))))));
                        var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)59898), ((unsigned short)16)))) ? (((/* implicit */int) ((unsigned short) min((arr_14 [i_1] [i_21 - 1] [i_22] [i_22]), (var_12))))) : (((/* implicit */int) arr_50 [i_21]))));
                        var_38 *= ((/* implicit */unsigned short) min((min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))))), (((/* implicit */int) ((unsigned short) arr_31 [i_1] [i_22] [i_21] [i_1])))));
                        var_39 = max(((unsigned short)65534), ((unsigned short)65534));
                    }
                } 
            } 
            arr_72 [i_1] [i_21] [i_21 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)19646)) / (((/* implicit */int) (unsigned short)32)))) & (((((/* implicit */int) arr_2 [i_21] [i_21 + 1])) * (((/* implicit */int) (unsigned short)0))))));
            var_40 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_65 [(unsigned short)11] [i_21 + 1])) : (((/* implicit */int) arr_65 [i_1] [i_21 - 1]))))));
        }
    }
}
