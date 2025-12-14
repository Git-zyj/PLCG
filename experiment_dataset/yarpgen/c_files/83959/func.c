/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83959
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26353)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-17108))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((4294967295U), (((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (122880U)))))));
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_4)) - (((/* implicit */int) var_11)))), (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */signed char) (_Bool)0))))))))));
                var_13 = ((/* implicit */short) ((_Bool) ((((var_4) ? (-5LL) : (arr_2 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))));
                arr_5 [i_1] [1LL] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(max((((/* implicit */int) var_3)), ((+(var_0))))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) < (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-89))))) ? (var_8) : (((-6517526109618449741LL) - (((/* implicit */long long int) ((/* implicit */int) (short)17098)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_17 -= ((/* implicit */signed char) min((((arr_6 [i_2 + 2]) - (arr_6 [i_2 + 1]))), (arr_6 [i_2 - 1])));
            var_18 = ((/* implicit */unsigned short) ((1115976663) - (((/* implicit */int) arr_8 [i_2]))));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (short)15))))), ((-(var_6))))))));
            var_20 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_9 [i_2 + 1]))))));
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(arr_13 [i_6]))))));
                        arr_21 [i_7] [i_5] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_3 [i_2 + 2] [i_5])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_5])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_5]))))));
                        arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)-28007))))), (((int) (+(var_1))))));
                        var_22 -= ((/* implicit */int) var_5);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
            {
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) arr_11 [i_5] [i_5]))))) ? ((+(9223372036854775807LL))) : (var_8));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((_Bool) (short)28007)))))));
                arr_26 [i_5] = var_5;
                var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), ((signed char)102)))))) ? (((((/* implicit */_Bool) arr_14 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1115976664))))))) : (min((((arr_23 [(signed char)4]) ? (var_0) : (((/* implicit */int) (unsigned short)29423)))), (((/* implicit */int) ((_Bool) arr_8 [i_8])))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) var_3);
                var_27 = ((/* implicit */long long int) ((((arr_14 [i_2 + 2] [i_2 - 1]) / (-1447534915))) >> ((((~(((/* implicit */int) arr_13 [i_2 + 2])))) + (16)))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((short) arr_23 [i_2 - 1])))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        {
                            arr_36 [i_2 + 1] [i_2 + 1] [i_2] [i_2] = ((/* implicit */signed char) var_7);
                            arr_37 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                arr_38 [i_2] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_14 [i_2] [i_2 + 2]), (arr_14 [i_2 - 1] [i_2 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))))));
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_12 = 1; i_12 < 12; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)17098)) - (((/* implicit */int) (unsigned char)28))))))));
                        var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_24 [i_2] [i_12 - 1] [i_2 + 1])))));
                        var_31 += ((/* implicit */signed char) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_39 [i_2]))));
                        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((long long int) (unsigned short)16165))))) ? ((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) arr_35 [i_2]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) max((((long long int) arr_9 [i_2 + 2])), (((/* implicit */long long int) 1U))));
                        arr_54 [i_2] |= ((/* implicit */signed char) 1447534914);
                    }
                } 
            } 
        } 
        var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_3)))) : ((~(((/* implicit */int) arr_53 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_2])))))) : (((/* implicit */int) arr_25 [i_2]))));
    }
    /* vectorizable */
    for (unsigned int i_18 = 1; i_18 < 11; i_18 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
        {
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_19])))))));
            var_36 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_39 [i_18])))) <= (arr_51 [i_18 + 2] [i_18 - 1] [i_18 + 2] [i_18 + 2])));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (short i_21 = 2; i_21 < 11; i_21 += 2) 
                {
                    {
                        var_37 = ((((/* implicit */_Bool) (unsigned char)205)) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_47 [i_19] [1]))))));
                        var_38 = ((/* implicit */long long int) ((arr_19 [i_18 - 1] [i_20] [i_21] [i_21] [i_18]) ? (((/* implicit */int) arr_19 [i_21] [i_20] [i_19] [i_18] [i_18])) : (((/* implicit */int) arr_19 [(signed char)12] [i_20] [i_20] [i_19] [i_18]))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_30 [i_18] [i_18] [i_19] [i_19] [i_18] [i_18])) : (var_0)))) || (((arr_44 [i_19]) >= (((/* implicit */unsigned long long int) arr_61 [i_18] [i_18] [i_18])))))))));
        }
        for (int i_22 = 0; i_22 < 13; i_22 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) var_4))));
            var_41 = ((/* implicit */signed char) ((arr_7 [i_18 + 1]) - (((/* implicit */unsigned int) -2147483632))));
        }
        arr_68 [i_18] = ((/* implicit */unsigned int) var_10);
        var_42 = ((/* implicit */unsigned short) arr_2 [i_18 + 2]);
    }
    for (unsigned int i_23 = 1; i_23 < 11; i_23 += 1) /* same iter space */
    {
        var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_23] [i_23 + 2]))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_23 + 1] [i_23 - 1])))));
        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_23] [i_23 + 1] [i_23 + 2] [i_23 + 2]))))), (min((arr_34 [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23 + 2]), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((_Bool) ((_Bool) var_5)))))))));
        /* LoopNest 3 */
        for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            for (short i_25 = 3; i_25 < 11; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    {
                        arr_82 [i_26] [i_23] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_25 - 3] [i_24] [i_25] [i_25 - 3])) ? (((/* implicit */int) arr_71 [i_25 - 1])) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_7)) - (17308))))))))));
                        arr_83 [i_24] [i_24] |= ((/* implicit */unsigned short) max(((+(((var_6) / (arr_59 [i_23]))))), (((long long int) ((((/* implicit */_Bool) -1447534940)) ? (((/* implicit */int) var_4)) : (arr_69 [i_23] [i_26]))))));
                        var_45 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_32 [i_26] [i_26] [i_26] [i_26] [i_26])), (var_7)))), (max((1379545413305447268LL), (((/* implicit */long long int) arr_66 [i_23] [(short)4])))))));
                        var_46 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_2 [i_23 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_35 [i_23 - 1])))));
                    }
                } 
            } 
        } 
    }
}
