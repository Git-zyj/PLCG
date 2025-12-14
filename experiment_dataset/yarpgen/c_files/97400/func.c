/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97400
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned long long int) -1124107427723736271LL)))))));
                var_21 = ((/* implicit */signed char) 0);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned short)65535))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            {
                var_23 &= ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_2])) % (((/* implicit */int) arr_10 [i_2])))) >> (((((int) max(((unsigned short)65535), ((unsigned short)0)))) - (65512)))));
                var_24 = ((int) ((signed char) arr_9 [i_3 - 2]));
            }
        } 
    } 
    var_25 &= ((/* implicit */signed char) (-(((((((/* implicit */int) var_12)) - (-1399849967))) + (((/* implicit */int) var_7))))));
    /* LoopSeq 3 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_26 -= ((/* implicit */signed char) (((+(((/* implicit */int) arr_13 [10ULL] [10ULL])))) >= ((-(-1477700409)))));
        var_27 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [4])) ? (((/* implicit */int) arr_12 [12ULL])) : (((/* implicit */int) arr_12 [(signed char)18])))) + (((/* implicit */int) (unsigned short)0))));
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16864))) != (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4])) != (((/* implicit */int) var_1)))))) - (min((((/* implicit */unsigned int) var_4)), (var_13)))))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 3) 
    {
        var_28 = ((/* implicit */signed char) ((((arr_4 [i_5] [i_5 + 1]) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_19)) - (var_0)))))) ? (((/* implicit */long long int) ((int) (~(1399849944))))) : (var_17)));
        var_29 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_16 [i_5 + 2]))));
    }
    /* vectorizable */
    for (long long int i_6 = 4; i_6 < 18; i_6 += 2) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 2])) && (((/* implicit */_Bool) var_14)))))));
        arr_21 [i_6] = ((/* implicit */signed char) (((-(-1399849930))) - (1399849928)));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 17; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_9]))));
                        arr_30 [i_9] [i_9] [i_9] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_11 [i_9] [i_9])) ? (((/* implicit */long long int) var_4)) : (var_9)))));
                        arr_31 [i_6] [i_6] [i_9] [i_6] = ((/* implicit */_Bool) (+(var_0)));
                        arr_32 [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */_Bool) var_13);
                    }
                } 
            } 
            arr_33 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6] [i_6 - 4] [i_6] [i_6])) == (var_11)));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1399849930)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_20 [i_6 - 3]))));
        }
        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 1; i_11 < 17; i_11 += 3) 
            {
                arr_39 [i_6] [i_6] [i_11] [i_11] = ((/* implicit */int) var_18);
                var_32 -= ((/* implicit */signed char) var_6);
            }
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483622))))) / (((/* implicit */int) (unsigned short)1))));
                            var_33 -= (+(((/* implicit */int) arr_34 [i_6 + 1] [i_10])));
                        }
                    } 
                } 
                arr_48 [i_12] = var_9;
            }
            for (int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_17))) + (((/* implicit */int) arr_11 [i_15] [i_15]))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    for (signed char i_17 = 2; i_17 < 17; i_17 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_6] [i_17 + 1]))));
                            var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2794544716464282513LL)) || (((/* implicit */_Bool) arr_40 [i_17 - 2] [i_17 + 2] [i_17 - 2] [i_6 - 2]))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned long long int) ((var_15) <= (arr_19 [i_6 - 1] [i_6 - 1])));
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_6 - 3] [i_6 - 3] [i_6 - 4])) ? (-4586963780588435151LL) : (((/* implicit */long long int) var_19))));
        }
        for (signed char i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned short) (signed char)-13);
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_11 [i_6 - 1] [i_6 - 4]))));
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (334449296) : (((/* implicit */int) (signed char)-12)))))))));
            arr_59 [i_6] [i_6] [i_18] = ((/* implicit */signed char) (-(1475729021)));
            arr_60 [i_18] = ((/* implicit */signed char) 1056187753);
        }
    }
    /* LoopNest 3 */
    for (signed char i_19 = 1; i_19 < 13; i_19 += 2) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 12; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 14; i_23 += 2) 
                        {
                            {
                                var_42 = ((arr_70 [i_19] [i_19] [i_19] [i_19]) > (((/* implicit */long long int) (-(((/* implicit */int) var_8))))));
                                var_43 = ((/* implicit */_Bool) max((-1399849929), (((/* implicit */int) (signed char)-124))));
                                var_44 = ((/* implicit */long long int) ((max((arr_63 [i_19 + 1]), (arr_63 [i_19 - 1]))) & ((~(-1399849942)))));
                            }
                        } 
                    } 
                    var_45 = 2794544716464282494LL;
                    var_46 = max((((/* implicit */signed char) ((((/* implicit */int) arr_72 [i_20] [i_21] [i_20] [i_21])) == (((/* implicit */int) (signed char)42))))), (var_8));
                }
            } 
        } 
    } 
}
