/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81092
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] &= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) var_19))))))));
        arr_5 [i_0 - 1] &= ((/* implicit */long long int) ((_Bool) min((((/* implicit */int) (unsigned char)113)), (1531846829))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])) : (var_18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) : (max((var_16), (((/* implicit */unsigned int) (unsigned char)255)))))));
        arr_9 [i_1 - 1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1 - 1] [i_1])), (var_7)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_2 [i_1 - 1] [i_1])), (arr_0 [i_1 - 1] [i_1]))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1]))) : (var_9)))), (max((arr_1 [i_1]), (arr_1 [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4399341926600003883LL)) ? (7169566910420971532LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_21 &= ((/* implicit */short) ((signed char) ((int) arr_13 [(_Bool)1])));
            var_22 = ((/* implicit */_Bool) (+((+(-2594093565561776624LL)))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_6))))));
                        arr_23 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))));
                        arr_24 [i_2 - 1] [i_3 - 1] [i_2] [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-10))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) 4399341926600003878LL)) ? (((/* implicit */int) (unsigned short)27560)) : (525499831)))));
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_22 [i_5] [i_5] [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2]))))) : ((+(8191)))));
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((unsigned short) ((signed char) -5227030204152823422LL)));
                    var_26 = ((/* implicit */int) ((unsigned long long int) ((signed char) (signed char)24)));
                }
                var_27 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 338147490259309391ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)113))))));
            }
            var_28 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned char)143)))));
        }
        arr_33 [i_2] = ((/* implicit */int) (+((-(13139128665042650989ULL)))));
        var_29 = ((/* implicit */short) (((!(arr_32 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */int) ((unsigned short) 465373700U))) : (((/* implicit */int) (!(arr_3 [i_2]))))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_30 -= ((/* implicit */long long int) (~((~(22)))));
            arr_36 [i_2] [i_2] [i_9] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_11 [i_2]))) ? ((~(var_17))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_31 [i_2]))))));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
            {
                var_31 &= ((/* implicit */signed char) (~((-(((/* implicit */int) arr_37 [i_9]))))));
                var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_9]))) ? (((((/* implicit */_Bool) 0)) ? (0ULL) : (16555106888684267525ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_10] [i_9]))))));
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 3) 
                    {
                        {
                            arr_50 [i_9] [i_12] [i_11] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)43))));
                            var_33 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_12))))));
                            arr_51 [i_13 + 1] [i_12] [i_2] [i_2] [i_9] [i_2 - 4] = ((/* implicit */int) ((_Bool) (+(var_18))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_14 = 2; i_14 < 19; i_14 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (~((~(var_3)))));
                    arr_54 [i_2] [i_9] [i_11] [i_14] &= ((/* implicit */signed char) ((unsigned long long int) (~(arr_41 [i_2 - 2] [i_9] [i_11]))));
                }
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    var_35 = ((/* implicit */unsigned int) ((short) (unsigned short)12088));
                    arr_59 [i_2] [i_2] [i_2] [i_15] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 4698198543533165318ULL)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) arr_31 [i_2])))));
                }
            }
            arr_60 [i_9] &= ((/* implicit */int) ((unsigned int) (-(arr_1 [i_9]))));
            var_36 -= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_15 [i_9])))));
        }
        for (signed char i_16 = 2; i_16 < 19; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 3; i_17 < 18; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) ((short) (signed char)24));
                        var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_2 + 3])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2 - 2])))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (short)29029)) : (-980606734))) : (((/* implicit */int) (!((_Bool)0))))));
                        var_39 = ((/* implicit */int) (+(((long long int) (unsigned char)241))));
                    }
                } 
            } 
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_16 + 1]))) : (var_9)))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned char) -8660691481793668346LL))))))));
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_2 + 3] [i_16 - 2]))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((signed char) -114510168)))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned char i_20 = 3; i_20 < 19; i_20 += 1) 
                {
                    {
                        arr_74 [i_2] [i_19] [i_2] = ((/* implicit */short) (+(((var_6) ? (arr_14 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 - 4] [i_2 + 1])))))));
                        var_42 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_16] [i_16]))))) ? ((((_Bool)1) ? (arr_70 [i_2] [i_16 - 2] [i_16 - 2] [i_20 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))))) : (((/* implicit */long long int) ((arr_40 [i_16]) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (_Bool)1)))))));
                        var_43 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (signed char)21)))));
                    }
                } 
            } 
            var_44 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_2 - 3])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_8))))));
        }
    }
    for (int i_21 = 0; i_21 < 17; i_21 += 2) 
    {
        var_45 -= ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned short)27590))))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_0)), (arr_47 [i_21] [i_21] [i_21] [i_21] [i_21]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((1526200145U), (((/* implicit */unsigned int) arr_62 [i_21] [i_21] [i_21]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
        {
            var_46 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)255)) ? (2594093565561776623LL) : (((/* implicit */long long int) -16)))));
            var_47 -= ((/* implicit */_Bool) ((((_Bool) (unsigned short)25624)) ? (((/* implicit */unsigned int) (+(var_3)))) : (((((/* implicit */_Bool) arr_42 [i_21] [i_21] [i_21] [i_21])) ? (arr_43 [i_21] [i_22] [i_21] [i_22] [i_21]) : (arr_39 [i_21] [i_21] [i_21])))));
        }
        arr_79 [i_21] [i_21] = ((/* implicit */signed char) ((unsigned short) (signed char)121));
        arr_80 [i_21] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)180))));
        var_48 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned char)223), (((/* implicit */unsigned char) (signed char)96)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) arr_71 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))), ((-(var_2))))) : (((/* implicit */unsigned long long int) max((max((arr_56 [i_21]), (((/* implicit */long long int) var_16)))), (min((arr_58 [i_21] [i_21] [i_21] [i_21]), (((/* implicit */long long int) arr_57 [i_21] [i_21] [i_21] [i_21])))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_23 = 2; i_23 < 23; i_23 += 3) 
    {
        arr_83 [i_23 + 1] [i_23 + 1] = ((/* implicit */unsigned short) ((((_Bool) arr_81 [i_23] [i_23])) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_81 [i_23] [i_23 + 1]))))) : ((~(arr_82 [i_23] [i_23])))));
        var_49 &= ((/* implicit */_Bool) (+((+(((/* implicit */int) var_11))))));
        arr_84 [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -5539790347711227025LL))) ? (((long long int) (unsigned short)58945)) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)47371)))))));
    }
    /* LoopNest 3 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        for (long long int i_25 = 0; i_25 < 22; i_25 += 1) 
        {
            for (int i_26 = 3; i_26 < 21; i_26 += 1) 
            {
                {
                    var_50 = ((/* implicit */signed char) min((((((_Bool) (-2147483647 - 1))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_87 [i_24] [i_25]), (((/* implicit */unsigned short) arr_89 [i_25]))))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))));
                    var_51 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_89 [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_2))), (((/* implicit */unsigned long long int) (~(4294967295U))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -2293622577089334976LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)165)), ((short)11364))))))) : (max((((/* implicit */unsigned long long int) ((long long int) var_7))), (max((9ULL), (((/* implicit */unsigned long long int) arr_86 [i_24])))))));
                    var_52 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)84))))));
                }
            } 
        } 
    } 
}
