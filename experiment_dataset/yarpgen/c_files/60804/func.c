/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60804
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        arr_4 [(unsigned short)9] [i_0] = ((/* implicit */unsigned short) (((-(arr_0 [i_0 - 1]))) + (arr_1 [10U] [i_0 - 1])));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */short) arr_2 [i_0]);
            arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) var_11));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) -696914220)) ? (((/* implicit */long long int) 696914220)) : (-3601876711284083184LL)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_14 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_1] [(short)8] [i_2]))));
                arr_15 [18U] |= ((/* implicit */int) (-(arr_1 [i_0 - 1] [i_1 - 1])));
                arr_16 [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_1]));
                /* LoopSeq 2 */
                for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) -696914235))));
                    arr_20 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (~(arr_5 [i_1 - 3] [i_1])));
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) 6872070805751694665LL);
                }
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    var_16 = (!(((/* implicit */_Bool) var_11)));
                    var_17 += ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0 - 1]));
                }
                arr_25 [i_0] [i_0] [i_1] [i_0] = 12361963744197443436ULL;
            }
            for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_18 = var_14;
                    var_19 = ((/* implicit */int) var_5);
                }
                var_20 &= ((/* implicit */_Bool) (~(5125392932809028934ULL)));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_35 [i_1] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((signed char) 696914220));
                        arr_36 [i_0] [(unsigned short)16] [(signed char)20] [i_1] [i_8] = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_3)))));
                        arr_37 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [(unsigned short)22] [i_1] [i_7] [i_8 + 1]))));
                        arr_38 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-60))));
                        arr_39 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_28 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) arr_26 [i_0]))));
                    }
                    arr_40 [(unsigned short)9] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)52074))));
                    arr_41 [i_0] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-69)) ? (-696914220) : (((/* implicit */int) (unsigned short)59266))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_31 [i_0] [i_5 - 1] [i_1 + 2] [i_7]))));
                        arr_44 [i_0 - 1] [(short)1] [i_1] [i_5] [i_1] [3LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0 - 1] [(unsigned char)6] [i_5 + 1] [(unsigned char)10])) ? (((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1] [i_5 + 2] [i_7])) : (((/* implicit */int) arr_29 [i_0 - 1] [i_1] [i_5 + 1] [i_7]))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 12361963744197443436ULL))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        arr_47 [(signed char)10] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) == (8576523707827090057LL))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))));
                        arr_48 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_0]))));
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        var_23 |= ((/* implicit */int) arr_11 [(unsigned short)13] [i_1 + 1] [i_5] [i_7]);
                        var_24 = ((/* implicit */unsigned long long int) arr_50 [i_7] [i_1] [i_5 + 2] [i_1] [i_1 - 3] [i_5 - 1]);
                    }
                    arr_53 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                }
                arr_54 [i_0] [(short)7] [i_1] = ((/* implicit */int) var_1);
            }
        }
        for (unsigned char i_12 = 4; i_12 < 21; i_12 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -696914220)) ? (-1222310898) : (((/* implicit */int) (unsigned short)21121)))))));
            arr_58 [15] [i_12] = ((unsigned short) arr_31 [i_0] [20LL] [i_12] [i_12]);
        }
        for (unsigned char i_13 = 4; i_13 < 21; i_13 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) var_7)) * (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
                arr_65 [i_0] [(short)7] [i_14] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                var_27 -= ((unsigned short) arr_60 [i_0 - 1]);
                var_28 = ((/* implicit */unsigned int) max((var_28), (var_10)));
            }
            for (int i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32768)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (696914220) : (((/* implicit */int) (signed char)59)))))));
                arr_69 [i_0 - 1] [i_13] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 1] [i_13 - 3] [(unsigned short)4] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0 - 1] [i_13 + 2] [i_0 - 1] [i_0 - 1] [i_15])) : (var_8)));
            }
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                var_30 += ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (_Bool)0)))));
                arr_72 [i_0 - 1] [(_Bool)1] [i_13] [(unsigned char)13] = ((((/* implicit */_Bool) arr_6 [i_13 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_16])) : (((/* implicit */int) ((unsigned short) (unsigned short)608))));
                arr_73 [i_0 - 1] [(unsigned char)4] [(_Bool)1] [(short)0] = ((/* implicit */unsigned char) ((((unsigned long long int) var_6)) >= (((/* implicit */unsigned long long int) var_2))));
                var_31 = ((/* implicit */unsigned long long int) ((((arr_51 [i_13 + 1] [i_13] [i_13 + 1]) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [i_0 - 1] [i_16])));
                arr_74 [i_13] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)226)) < (((/* implicit */int) (signed char)123)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_8)))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_17 = 3; i_17 < 20; i_17 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (((!(var_0))) ? (((8576523707827090048LL) + (-4423678210964475104LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_12))))))))));
                var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1222310898)) ? (arr_27 [(signed char)10] [i_0 - 1] [i_0 - 1]) : (arr_27 [(_Bool)1] [(_Bool)1] [i_0 - 1])));
                var_34 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_45 [i_17] [i_13 - 2] [i_13 - 4] [i_13 - 4] [i_13 - 2] [i_0]))));
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_81 [i_0] [i_0] [i_17] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 696914201)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(unsigned short)16] [i_13 - 1] [i_17]))))))));
                    arr_82 [i_0] [i_13] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)100)) * (((/* implicit */int) arr_56 [i_13 + 2] [i_13 + 2] [i_17 + 1]))));
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 23; i_19 += 3) 
    {
        arr_86 [i_19] &= ((/* implicit */unsigned long long int) arr_42 [i_19] [i_19]);
        var_35 = ((/* implicit */unsigned long long int) var_2);
    }
    var_36 = ((/* implicit */unsigned short) var_14);
    var_37 = ((/* implicit */unsigned char) (short)31079);
}
