/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91927
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
    var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_15)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) * (((/* implicit */int) ((((/* implicit */int) (short)32742)) != (-1172791098))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_0 [(signed char)8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_6))))) : (arr_0 [i_0]))))))));
        var_23 = ((/* implicit */short) max(((~(var_10))), (((var_10) + (arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) (+((((((~(382926703))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3344))) : (1796047301U))) - (3314U)))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)235)) & (((/* implicit */int) (signed char)103))));
            arr_7 [i_2] = ((/* implicit */short) (~(((/* implicit */int) max((var_5), (var_13))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
            {
                arr_15 [i_3] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_3 [(unsigned short)12])))) & (((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 1]))));
                arr_16 [i_3] [18] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) arr_9 [i_1] [i_1])))))));
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-25493))));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
            {
                arr_21 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3349)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
                var_26 = ((/* implicit */unsigned char) (+(17868905209504743667ULL)));
                var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_18 [i_3] [i_3]))));
                var_28 = ((/* implicit */int) min((var_28), (((2003577361) / (((/* implicit */int) (short)28594))))));
                var_29 = ((/* implicit */unsigned short) ((var_17) == (((/* implicit */int) var_1))));
            }
            for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                arr_24 [i_1] [i_3] [i_3] [i_6 + 3] = ((/* implicit */short) (+(arr_8 [i_3 - 3] [i_3] [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_3 - 3] [i_6] [i_7] [i_8] [i_7] |= ((/* implicit */long long int) (~(arr_25 [i_7] [i_3 + 1] [i_7])));
                            var_30 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(unsigned short)13] [(unsigned short)13] [i_3 + 1] [i_8] [(unsigned short)13] [i_8]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 2; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    arr_37 [i_1] [i_1] [i_9] [i_10] [i_10] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_10 - 2] [i_3] [i_3 - 1] [i_10]))));
                    arr_38 [i_3] = ((/* implicit */int) (+(13565366591940691167ULL)));
                }
                for (signed char i_11 = 2; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_31 |= ((((/* implicit */int) arr_39 [(unsigned short)4] [i_3 - 2] [i_9])) + (((((/* implicit */int) var_2)) + (var_10))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 23; i_12 += 4) 
                    {
                        arr_43 [i_3] [i_3] [i_3] = ((((((/* implicit */_Bool) (short)9033)) ? (arr_1 [i_11]) : (((/* implicit */int) var_7)))) ^ ((~(((/* implicit */int) (unsigned short)27936)))));
                        arr_44 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)5)) ? (var_14) : (868501181)));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) 323419428)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_12))))));
                    }
                }
                arr_45 [i_3] [i_3 - 1] [i_1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1174896332)) ? ((~(11860292389357371772ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5)))))));
            }
            var_33 = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_3 - 3] [i_3 - 1] [i_3])) - (((/* implicit */int) arr_30 [i_3 - 1] [i_3 - 3] [i_3]))));
            arr_46 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [i_3 + 1])) || (((/* implicit */_Bool) var_1))));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (-1174896333) : (((/* implicit */int) var_2))));
        }
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            arr_50 [(unsigned short)13] [i_13] [i_13] = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)41)))) + ((~(((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_48 [i_1])) : (-2147483646)))))));
            var_35 -= ((((((/* implicit */_Bool) (unsigned short)34064)) ? (((/* implicit */int) (signed char)61)) : (arr_10 [i_13]))) >> (((((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (8710057153359551655LL) : (((/* implicit */long long int) var_17)))) - (8710057153359551635LL))));
        }
        arr_51 [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)15)))) >> (((((((/* implicit */_Bool) 2003577340)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_48 [i_1])))) + (21382)))));
        arr_52 [i_1] |= (~(((((/* implicit */_Bool) 2003577352)) ? (((/* implicit */unsigned long long int) 11)) : (7729448914985492895ULL))));
        var_36 &= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) 3532934022425567631ULL)))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_5 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4991761704389073160LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_49 [i_1])))))));
    }
}
