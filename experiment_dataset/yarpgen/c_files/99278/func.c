/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99278
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_15 -= ((/* implicit */short) (signed char)-29);
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)6517))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (arr_4 [i_2] [i_3])));
                        var_18 *= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)41770))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((arr_9 [i_3] [i_0] [12] [i_0] [i_0]) ? (((/* implicit */int) ((signed char) arr_4 [i_1 - 1] [i_1]))) : (((/* implicit */int) ((signed char) arr_9 [i_2] [i_0] [i_2 - 1] [i_2 + 1] [i_0]))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) (unsigned short)41770);
        }
        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)114)))))) >= (((/* implicit */int) min((min((((/* implicit */unsigned short) var_13)), (arr_12 [i_4 + 1] [i_0] [i_0]))), ((unsigned short)23764))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((unsigned char) arr_14 [i_4])), (((/* implicit */unsigned char) arr_9 [i_0] [i_4] [i_0] [i_0] [i_4 + 1]))))) < (((/* implicit */int) (unsigned short)41770))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                arr_18 [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((((/* implicit */int) (!((_Bool)0)))) + (((/* implicit */int) (short)-1))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_24 [5U] [i_7] [i_7] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)23770))) ? (6422963354010032680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_16 [i_0] [i_4] [1U] [i_7]))))));
                            arr_25 [i_4 + 2] [i_4 + 2] [i_4] = arr_9 [i_5 + 2] [i_4] [10ULL] [i_4] [i_4 + 1];
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) (unsigned short)38332);
            }
            arr_26 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
        }
        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            arr_31 [i_0] [(unsigned short)4] = arr_6 [i_8] [i_0] [i_0];
            arr_32 [i_8] = ((/* implicit */signed char) ((_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] [i_8])))));
        }
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)26444))));
        var_25 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0])) != (8230612240042889540ULL)))) * (((/* implicit */int) (short)15049))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    {
                        arr_42 [i_9] [i_9] [i_11] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) ((unsigned short) 2540676689U)))));
                        var_27 = ((/* implicit */unsigned short) (signed char)-15);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) arr_0 [i_9 + 2] [i_9]);
        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_9 + 2] [(unsigned char)4] [i_9]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)-13)) : (((((/* implicit */int) (unsigned char)78)) + (((/* implicit */int) (short)-18792))))));
        /* LoopSeq 2 */
        for (int i_13 = 1; i_13 < 8; i_13 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) var_8);
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_37 [i_9 + 2])));
            var_32 *= (!(((/* implicit */_Bool) var_2)));
            var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_13 - 1] [i_13 + 3] [i_13 - 1] [i_9 + 1]))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            arr_48 [i_14] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned int) ((unsigned short) arr_15 [i_14]));
            var_34 = ((/* implicit */short) ((arr_43 [i_9 - 1] [i_9 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
            var_35 = ((((/* implicit */_Bool) ((short) arr_47 [i_9 + 1] [i_9] [i_9 + 1]))) ? (((/* implicit */int) arr_1 [i_9 + 2])) : (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6)))));
            var_36 = ((/* implicit */unsigned char) min((var_36), (((unsigned char) arr_34 [i_9]))));
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 4; i_15 < 18; i_15 += 2) 
    {
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        arr_61 [(short)10] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned char) ((arr_54 [i_15] [i_16] [i_15] [i_18]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (arr_49 [i_15]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_16])))))));
                        var_37 = ((/* implicit */unsigned int) var_6);
                        var_38 -= ((/* implicit */signed char) arr_58 [i_17] [i_16] [i_15 + 2]);
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_66 [i_15 - 2] [i_16] [i_17] [i_17] [i_19] = ((/* implicit */signed char) arr_55 [i_15]);
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_56 [i_15] [(_Bool)0] [i_15 - 1] [i_15 + 1])) : (((/* implicit */int) var_11))))) ? (arr_65 [i_16] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22695)))));
                        var_40 = ((/* implicit */signed char) var_13);
                    }
                    for (unsigned int i_20 = 4; i_20 < 16; i_20 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 4) 
                        {
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_15 - 1]))))) << ((((+(arr_67 [i_15 + 1] [i_17] [(_Bool)1] [i_20 - 2]))) + (698610448134050715LL)))));
                            arr_73 [i_21] [i_20 - 2] [i_17] [i_16] [i_15] = ((/* implicit */int) (-(((unsigned int) (signed char)99))));
                            arr_74 [i_15] [i_16] [i_17] [i_20] = ((/* implicit */signed char) (short)22695);
                            var_42 = ((/* implicit */_Bool) ((int) 97588601U));
                        }
                        /* vectorizable */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_43 = ((/* implicit */signed char) max((var_43), ((signed char)54)));
                            var_44 = ((/* implicit */unsigned long long int) arr_58 [i_20] [i_17] [i_16]);
                            var_45 = ((unsigned char) arr_51 [i_15 - 4]);
                        }
                        arr_77 [i_15] [i_16] [i_17] [i_20 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_58 [i_15 - 2] [i_15 - 2] [i_17]))))) & (((/* implicit */int) (unsigned char)206)))))));
                    }
                    var_46 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
    var_47 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)));
}
