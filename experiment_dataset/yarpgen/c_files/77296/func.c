/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77296
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
    var_20 *= ((/* implicit */unsigned char) var_17);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */short) (unsigned short)65535);
            var_21 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 + 1] [i_1]);
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1552022623)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)56))))) ? (3661752973U) : (((633214323U) / (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) max((633214311U), (((/* implicit */unsigned int) (short)17180))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            var_23 -= ((/* implicit */unsigned short) min((arr_1 [i_2] [i_3 + 2]), (((((/* implicit */_Bool) 3661752944U)) ? (arr_1 [i_3] [i_3 - 4]) : (((/* implicit */int) (short)28037))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_10 [i_3 - 4]), ((unsigned short)5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_4 [i_2] [i_3 - 2] [i_2]))))) : (((((/* implicit */_Bool) (-(var_19)))) ? (max((((/* implicit */unsigned int) arr_3 [i_3] [i_2])), (var_8))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2])))))))));
            var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15185))) : (min(((+(var_14))), (max((((/* implicit */unsigned int) (signed char)-2)), (4136950406U)))))));
            arr_12 [i_2] [i_3] = ((/* implicit */unsigned char) ((((var_12) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (arr_8 [4]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 3] [i_3 - 3] [i_3 + 2]))))))));
        }
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                var_26 -= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_4] [i_2]))))) ? (((/* implicit */unsigned int) min((-2040601131), (((/* implicit */int) arr_2 [i_2]))))) : (((var_17) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) : (var_9))))));
                var_27 -= ((/* implicit */_Bool) arr_19 [i_2] [i_4] [i_5]);
            }
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_10))));
            var_29 = ((/* implicit */long long int) ((unsigned char) var_5));
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_22 [i_6] = ((/* implicit */int) arr_15 [i_2]);
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_9 - 1])) ? (max((((/* implicit */int) var_7)), (arr_1 [i_7] [(unsigned short)12]))) : ((~(((/* implicit */int) (unsigned char)37))))))) + (max((((/* implicit */unsigned int) arr_27 [i_9 - 1] [i_9 - 1] [i_2] [i_9] [i_2] [i_7])), (var_14)))));
                            var_31 *= ((/* implicit */_Bool) (+(var_14)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_32 = ((/* implicit */short) min((var_3), (((/* implicit */unsigned long long int) var_17))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483632)) || (((/* implicit */_Bool) (unsigned char)163))));
                    arr_38 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 49152)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_7 [i_2]))))) <= (((unsigned int) (unsigned short)62251))))) : (min((((/* implicit */int) (unsigned char)219)), (((((/* implicit */int) arr_2 [19ULL])) * (((/* implicit */int) (unsigned char)227))))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_12 = 3; i_12 < 10; i_12 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    var_35 -= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)143))))));
                    arr_42 [i_2] [i_6] [i_6] [(unsigned char)3] = ((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_10]);
                    arr_43 [i_2] [i_6] [(_Bool)1] [i_12 - 2] [i_6] = ((/* implicit */signed char) (unsigned short)254);
                }
                /* vectorizable */
                for (short i_13 = 2; i_13 < 11; i_13 += 1) 
                {
                    arr_46 [i_2] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)221)) > (((/* implicit */int) (unsigned short)0))));
                    arr_47 [7U] [i_6] [7U] [i_6] [i_2] = ((/* implicit */signed char) ((((_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : ((+(var_12)))));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_0))));
                }
            }
            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6]))));
        }
        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)59754))));
    }
    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_39 = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) var_0))), (965075957U)));
        var_40 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)16)), (3661752972U)));
        var_41 ^= ((/* implicit */unsigned short) min((((arr_48 [i_14]) ? (((/* implicit */int) arr_48 [i_14])) : (((/* implicit */int) var_10)))), ((+(((/* implicit */int) arr_49 [i_14]))))));
        var_42 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) & (min((3661752964U), (((/* implicit */unsigned int) arr_48 [i_14])))))), (((/* implicit */unsigned int) var_7))));
        var_43 -= ((((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (unsigned char)13))))) ? (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3661752957U))))))) : (((/* implicit */int) (unsigned short)41149)));
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        arr_52 [i_15] = ((/* implicit */long long int) ((var_17) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)23268)))))) : (var_19)))) : (max((((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_15 + 1] [i_15]))), (max((((/* implicit */unsigned long long int) var_18)), (arr_50 [i_15] [i_15])))))));
        var_44 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3)))))) == (((((/* implicit */_Bool) 3292240319U)) ? (3329891339U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))))));
    }
    var_45 *= ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
}
