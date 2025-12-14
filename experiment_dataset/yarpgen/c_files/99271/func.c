/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99271
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
    var_12 = ((/* implicit */int) ((unsigned short) -24LL));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (var_11)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) (+(min(((-(((/* implicit */int) var_6)))), (((arr_0 [i_0]) - (((/* implicit */int) (unsigned char)86))))))));
                        var_15 = ((/* implicit */short) ((signed char) max((((/* implicit */long long int) arr_1 [i_0] [i_3])), (-36LL))));
                        var_16 *= ((/* implicit */unsigned int) arr_6 [8] [4] [8]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_5 [i_4]) : (arr_5 [i_4])))), (max((3722186132U), (((/* implicit */unsigned int) arr_5 [i_4]))))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
            var_19 = ((/* implicit */signed char) min(((unsigned char)139), (((/* implicit */unsigned char) (signed char)100))));
            var_20 = ((/* implicit */signed char) (~(((long long int) -1LL))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_11))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned int) arr_5 [i_4])) > (arr_2 [i_4] [i_6]))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (arr_16 [i_6] [i_4 - 1])));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 4; i_7 < 10; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((unsigned int) ((int) var_9)));
                            var_25 ^= ((/* implicit */unsigned char) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
                var_26 += (short)32165;
                /* LoopSeq 1 */
                for (signed char i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-((+(arr_4 [i_4]))))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_28 *= ((/* implicit */short) var_3);
                        var_29 = (~(-24LL));
                    }
                    for (short i_12 = 2; i_12 < 10; i_12 += 3) /* same iter space */
                    {
                        var_30 &= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-119))))) > (((long long int) -1))));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))));
                        var_32 -= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_4] [i_4]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_22 [i_4] [i_7 - 2] [i_7 - 2] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4]))));
                        var_34 += ((/* implicit */signed char) (~((~(((/* implicit */int) var_10))))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15730)) && (((/* implicit */_Bool) ((short) arr_36 [i_7] [i_7] [i_7] [i_4] [i_7])))));
                        var_36 |= ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_31 [i_13] [i_4] [i_7] [i_4] [i_4])) ? (var_5) : (((/* implicit */int) arr_1 [i_4] [i_4])))) : (((/* implicit */int) var_1)));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_37 &= ((/* implicit */int) (~(0U)));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_4])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */int) max((var_39), ((+(((/* implicit */int) arr_42 [i_15] [i_4] [i_4 - 1] [i_4] [i_4 - 1]))))));
                        var_40 = ((/* implicit */signed char) (~(((/* implicit */int) arr_36 [i_4] [i_4] [(signed char)9] [i_4] [i_7]))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4))))) * (((/* implicit */int) var_4))));
                    }
                    for (long long int i_16 = 1; i_16 < 11; i_16 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) arr_26 [i_7] [i_10] [i_7] [i_7] [i_4 + 1] [i_4 + 1]);
                        var_43 += ((/* implicit */long long int) arr_16 [i_7] [i_6]);
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32165))) | (4294967273U)));
                        var_45 = ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_10 [i_4] [i_7 - 4]))));
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((2147483644) <= (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_47 = ((/* implicit */int) (unsigned char)128);
                }
            }
        }
    }
    for (long long int i_17 = 3; i_17 < 10; i_17 += 3) 
    {
        var_48 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) (signed char)99))), (3612705317U)));
        /* LoopNest 2 */
        for (unsigned short i_18 = 2; i_18 < 13; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 14; i_20 += 3) /* same iter space */
                    {
                        var_49 = ((((int) arr_9 [i_17])) | (((/* implicit */int) var_4)));
                        var_50 -= (((!(arr_45 [i_18] [i_18 - 2]))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_17] [i_18]))));
                        var_51 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_3) ? (var_7) : (((/* implicit */long long int) arr_50 [i_18])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_18] [i_18])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((int) var_5))) : (min((((/* implicit */unsigned int) (unsigned short)65535)), (3014149184U)))));
                        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_1 [i_18] [i_17 + 3])) : (((/* implicit */int) arr_1 [i_18] [i_17 + 3]))))))));
                        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((unsigned char) (unsigned short)7)))));
                    }
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_55 [i_18 - 1] [i_17] [i_18 - 1] [i_18])), (max((var_9), (var_0))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_17]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : ((-(23LL)))))));
                        var_55 &= ((/* implicit */_Bool) ((var_3) ? (((((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_54 [i_17] [i_18] [i_17] [i_18] [i_18] [i_21])))) : ((~(((/* implicit */int) var_0)))))) : (max((((/* implicit */int) arr_6 [i_18] [10] [(signed char)20])), ((~(-1)))))));
                        var_56 += ((/* implicit */unsigned short) (~((((-(((/* implicit */int) (signed char)48)))) - (((/* implicit */int) arr_9 [i_18]))))));
                        var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65529))))) - (((((/* implicit */_Bool) arr_7 [i_18 - 1] [i_21] [i_18] [i_21] [i_18] [i_17 - 1])) ? (min((var_7), (((/* implicit */long long int) arr_46 [i_18] [i_18])))) : (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
                    }
                    var_58 = (~(((/* implicit */int) (unsigned char)144)));
                    var_59 &= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_48 [i_17 + 2] [i_18])) >> (((((/* implicit */int) arr_48 [i_18] [i_18])) - (13552)))))));
                }
            } 
        } 
        var_60 = ((/* implicit */long long int) var_8);
    }
}
