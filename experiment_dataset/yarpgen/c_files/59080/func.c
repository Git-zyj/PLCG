/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59080
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
    var_14 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_13)))))))));
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)4])) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2]))));
            var_17 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (short)-26136)))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2070310788U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7691))) : (919741896U)))) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3)))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)25237));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3 + 1] [i_4] [i_3 + 1]))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)50658)) ? (((var_0) << (((((/* implicit */int) var_12)) - (70))))) : (arr_2 [i_0] [i_0] [i_2])));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_3 + 2] [i_3 - 1] [i_3 + 1]) : (var_11)));
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) var_12);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) (~(arr_5 [i_0])));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) (short)26147)))) : (((/* implicit */int) var_5))));
            var_22 = ((/* implicit */unsigned short) (-(var_0)));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                arr_21 [(short)21] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_13 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_5] [i_0]);
                var_23 = ((/* implicit */unsigned char) var_11);
                var_24 = ((/* implicit */unsigned int) var_6);
                arr_22 [i_5] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_5] [i_6] [i_6 + 1] [i_6 + 1]));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_6] [i_8] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65530))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_2 [i_6] [i_8] [(unsigned char)0])));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) ((long long int) var_2));
                arr_36 [i_0] [i_9] [i_0] [i_9] = ((/* implicit */short) -8600276343871146363LL);
            }
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25254))) <= (var_0))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_34 [(unsigned short)14] [i_9] [i_0] [i_0])))) : (((((/* implicit */int) (unsigned char)221)) >> (((/* implicit */int) (unsigned char)0))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            var_28 = var_0;
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_12)) - (68)))));
                            arr_46 [i_0] [i_11] [i_13] [i_12] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                            arr_47 [i_0] [i_13] [i_0] [i_0] = var_3;
                            arr_48 [i_0] [i_0] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */short) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_53 [i_0] [i_15] [i_11] [i_11] [i_14] [i_0] [i_15] = ((/* implicit */unsigned char) var_0);
                            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_0] [i_0] [(unsigned short)5]))));
                            arr_54 [i_0] [i_15] [i_0] [i_0] [i_15] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)28672)) >> (((((/* implicit */int) (unsigned short)40321)) - (40291)))));
                            arr_55 [i_0] [i_9] [i_11] [i_14] [i_15] [1U] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                        }
                    } 
                } 
                arr_56 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
                var_31 = ((/* implicit */unsigned short) arr_20 [i_0]);
            }
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) var_1);
                arr_60 [i_0] [i_9] = ((/* implicit */unsigned char) var_6);
                arr_61 [i_0] [i_0] [i_16] [i_9] = ((/* implicit */unsigned int) var_3);
            }
            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
            {
                arr_66 [i_0] [i_9] [i_17] = ((unsigned char) arr_30 [i_9] [i_9]);
                /* LoopNest 2 */
                for (unsigned short i_18 = 3; i_18 < 23; i_18 += 4) 
                {
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_26 [i_9]))));
                            var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_18] [i_18 - 1] [i_18 + 1] [i_18 - 1]))));
                            var_35 = ((unsigned short) (~(((/* implicit */int) var_3))));
                            arr_72 [5U] [i_19] [i_19] = ((/* implicit */long long int) var_5);
                            var_36 = ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) arr_19 [i_0]);
                arr_73 [i_0] [i_9] [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)61))))) ? (((long long int) (short)3052)) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))));
            }
            arr_74 [i_0] = var_2;
            var_38 = ((/* implicit */unsigned short) (+(arr_35 [i_0] [(unsigned short)2] [i_9])));
            arr_75 [19U] [19U] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_67 [i_0] [(unsigned short)11] [6LL] [(unsigned short)11] [6LL] [i_9]))));
            var_39 = ((/* implicit */unsigned short) ((unsigned char) var_4));
        }
        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned short i_20 = 3; i_20 < 10; i_20 += 2) 
    {
        arr_78 [i_20] [i_20] = var_2;
        var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)20092))));
    }
    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((arr_6 [i_21] [(unsigned short)23] [i_21]) + (9223372036854775807LL))) >> (((var_11) + (286529598315644284LL))))) : ((+(var_11)))));
        arr_81 [i_21] = ((/* implicit */short) ((arr_59 [i_21] [i_21]) % (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_8)))))))));
    }
    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
    {
        arr_84 [i_22] = ((/* implicit */unsigned short) min((((unsigned int) var_1)), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_4))))))));
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24)))))) ? (((/* implicit */int) max((var_9), (((/* implicit */short) arr_20 [i_22]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_35 [i_22] [i_22] [i_22])))))))));
        var_45 = ((/* implicit */unsigned char) arr_58 [i_22] [i_22] [i_22]);
        arr_85 [i_22] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)20065))));
    }
}
