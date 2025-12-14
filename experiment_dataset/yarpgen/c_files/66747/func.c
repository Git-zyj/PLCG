/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66747
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
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
        var_14 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_0])))) <= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_8 [i_0] [17ULL] [i_1 + 3] |= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [(signed char)16] [i_1 + 4] [i_0])) % (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1]))));
            var_15 += ((/* implicit */unsigned short) ((unsigned char) (unsigned short)65527));
            arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (arr_1 [i_0]))))));
            var_16 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_7 [i_1])))) + (((/* implicit */int) var_6))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) -5095963672187380651LL)))));
        var_18 = ((/* implicit */long long int) var_5);
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_3]))))));
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
        arr_16 [i_3] = ((/* implicit */unsigned char) max((arr_1 [i_3]), (((arr_1 [i_3]) % (((/* implicit */unsigned long long int) arr_5 [i_3]))))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_21 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned short)65514)))), ((-((-(((/* implicit */int) arr_12 [i_3]))))))));
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (_Bool)1)))));
            var_23 *= ((/* implicit */_Bool) arr_11 [i_4] [i_3]);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            var_24 += ((/* implicit */unsigned long long int) ((((int) arr_10 [i_5])) + (((((/* implicit */int) arr_4 [i_3] [13] [13])) % (((/* implicit */int) arr_12 [i_5]))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) 2802987678U))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
        {
            arr_25 [i_3] = ((/* implicit */unsigned short) ((arr_22 [i_3] [i_3]) != (arr_22 [i_3] [i_6])));
            arr_26 [i_3] [i_3] |= ((/* implicit */unsigned short) arr_15 [i_3]);
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_26 = ((((/* implicit */int) (unsigned short)51704)) & (((/* implicit */int) (unsigned short)65531)));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((long long int) arr_21 [i_7] [i_9])) | (arr_34 [i_3] [i_6] [i_7] [i_8] [(unsigned short)22] [i_9 + 1])));
                            arr_36 [i_3] [i_6] [i_7] [i_7] [i_9] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_28 [(_Bool)1] [i_6] [i_6])))) ? ((-(arr_20 [i_9 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_9 - 1] [i_9 - 1] [i_9 + 1])))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-9223372036854775807LL - 1LL)))));
            }
            for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                arr_39 [i_10] [i_6] [i_3] [i_3] = ((/* implicit */unsigned int) arr_1 [i_3]);
                var_29 = ((/* implicit */signed char) ((_Bool) arr_29 [16U] [i_10] [20ULL] [i_6]));
            }
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_3]) + (arr_27 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : ((~(arr_22 [(short)2] [(short)2])))));
                arr_43 [i_11] = ((/* implicit */unsigned char) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]);
            }
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
            {
                arr_48 [i_12] [i_12] [i_12] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_10)) / (arr_33 [i_6] [i_6] [i_6] [i_6] [i_6])));
                arr_49 [i_3] [i_3] [i_3] [i_12] = ((/* implicit */signed char) (-(arr_5 [(unsigned char)19])));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((signed char) (signed char)-1)))));
                var_32 += ((/* implicit */short) arr_1 [i_12]);
                arr_50 [i_3] [i_12] [i_12] = ((/* implicit */unsigned int) (unsigned short)65535);
            }
            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_6]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
    {
        arr_54 [(unsigned char)9] = ((/* implicit */signed char) arr_19 [i_13]);
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    {
                        var_35 = ((/* implicit */signed char) ((((3104362674U) >> (((/* implicit */int) (unsigned short)9)))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))));
                        arr_63 [5U] [i_14] [(short)2] [i_13] = ((/* implicit */int) arr_57 [i_13]);
                        var_36 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)11693))));
                        var_37 += ((((/* implicit */int) (unsigned char)179)) + (32767));
                    }
                } 
            } 
            arr_64 [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_60 [(_Bool)1] [(_Bool)1] [i_14] [i_14]))));
            /* LoopNest 2 */
            for (short i_17 = 2; i_17 < 21; i_17 += 4) 
            {
                for (unsigned short i_18 = 3; i_18 < 22; i_18 += 2) 
                {
                    {
                        arr_71 [i_13] [i_18] [i_13] [i_13] [i_18] = ((/* implicit */signed char) var_8);
                        var_38 = ((((/* implicit */int) var_3)) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            arr_75 [i_13] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)47621)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11693)))))));
            arr_76 [i_13] [i_13] [i_13] = ((((_Bool) arr_17 [i_13] [i_13])) || (((/* implicit */_Bool) arr_51 [i_19])));
        }
    }
}
