/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95762
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
    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((3102368970U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) arr_0 [i_0]);
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_1))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_0 [i_1]))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (4013744158U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_14))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (281223167U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12636)))))));
                            arr_12 [i_0] [i_4] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0])) / (((/* implicit */int) arr_9 [i_0]))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0])) * (((/* implicit */int) arr_9 [i_0])))));
                            var_22 += ((/* implicit */_Bool) (((-(var_2))) << (((((((int) arr_4 [i_0] [i_1] [i_2] [i_3])) + (1507))) - (9)))));
                            arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5]))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_6] [i_7] [i_8])) ? (arr_23 [i_0] [i_5] [i_7] [i_6] [i_6] [i_6]) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                            arr_25 [i_0] [i_5] [i_6] [8U] [i_5] [i_8] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)12))));
                            arr_26 [i_8] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_6] [i_7])) != (((((/* implicit */int) (signed char)29)) - (((/* implicit */int) (signed char)5))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 25ULL))))))))));
            arr_30 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(_Bool)1] [i_9] [i_9] [i_9]))) : (arr_22 [i_0] [i_9] [0U] [0U] [i_9])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_0)))) : (max((arr_6 [i_0] [i_9] [i_0]), (((/* implicit */long long int) arr_9 [(short)14])))))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0] [i_9] [i_9])) : (((/* implicit */int) var_1))))), (max((arr_11 [i_9] [i_9] [i_9] [i_0] [i_0]), (((/* implicit */unsigned int) var_9)))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_7))));
        }
        for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 1) 
        {
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((var_14), (((/* implicit */unsigned int) arr_2 [i_0]))))));
            arr_35 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) var_13)))) > (((/* implicit */int) ((1141539604U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_10 + 1] [i_10] [i_10 + 1]))))))));
        }
        var_28 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) + (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)119)), ((unsigned char)147))))));
        arr_36 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-60))))) | (4013744149U)));
    }
    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_39 [i_11]))));
        /* LoopNest 2 */
        for (long long int i_12 = 2; i_12 < 14; i_12 += 4) 
        {
            for (long long int i_13 = 2; i_13 < 13; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-26953)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (641530606U)));
                        arr_50 [i_11] [i_12 - 1] [i_11] [i_12] = ((/* implicit */signed char) arr_23 [i_11] [i_11] [i_12 - 1] [i_13 + 1] [i_14] [i_14]);
                        arr_51 [i_11] [i_12] [i_11] [i_14] &= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (unsigned short)49455)), (3153427709U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_12] [i_13 + 2] [i_13 - 1] [i_13]))))) ? ((+(((/* implicit */int) var_15)))) : ((-(((/* implicit */int) (short)-3945)))))))));
                        var_31 |= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (var_7)))))))));
                    }
                    var_32 = ((/* implicit */int) arr_16 [i_11] [i_12 - 1] [i_11]);
                    var_33 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32767))))), (((unsigned int) 2728307328U)));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            {
                                arr_56 [i_15] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_12 + 1])) ? (((/* implicit */int) arr_54 [i_12 - 2])) : (((/* implicit */int) arr_54 [i_12 - 2]))))) ? (((((/* implicit */int) arr_3 [i_12 - 1] [i_12 + 1])) << (((((/* implicit */int) arr_3 [i_12 - 2] [i_12 + 1])) - (59))))) : (min((((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_13] [i_15] [i_16] [i_13])) ? (arr_14 [i_11] [i_11] [i_16]) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_7 [i_16] [i_15] [i_13 - 2]))))))));
                                var_34 = min((((((/* implicit */_Bool) (~(38381067U)))) ? (((/* implicit */unsigned long long int) ((int) arr_31 [i_12]))) : (max((arr_8 [i_16]), (arr_0 [i_11]))))), (((/* implicit */unsigned long long int) var_6)));
                                arr_57 [i_11] [i_11] [i_13 - 1] [i_11] [i_16] = ((/* implicit */signed char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_11] [i_12] [i_15] [i_16]))))), (max((((/* implicit */int) var_8)), (var_2))))), (((/* implicit */int) (!(arr_27 [i_12 + 1] [i_13 - 1] [i_13 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
