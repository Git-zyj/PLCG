/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66885
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
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) -1682910579)) ? (-2923995581560962393LL) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) -1682910581);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) + (arr_8 [(short)6] [i_1] [i_0] [i_1] [i_1] [i_0] [i_3 - 1]))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [(signed char)1] = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (7408997486386781260ULL))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (11037746587322770361ULL)))))), (var_5)));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_13))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [(_Bool)1] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((/* implicit */int) arr_1 [i_6] [i_7]))))) ? (-458009122) : (arr_17 [i_5] [i_6] [i_5])));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_27 [8U] [i_6] = ((/* implicit */unsigned int) var_5);
                        var_23 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)16696))))));
                        arr_28 [i_8] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_6]) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) var_14))))) ? (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (signed char)-106))))))));
                    }
                    for (int i_9 = 1; i_9 < 8; i_9 += 4) 
                    {
                        arr_32 [i_5] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (-1271070189)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) != (((/* implicit */long long int) ((/* implicit */int) var_18))))))) : (((var_2) << (((((/* implicit */int) var_3)) - (50)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-(((long long int) (_Bool)1))));
                            var_25 += (((+(((/* implicit */int) (unsigned short)48840)))) & (((/* implicit */int) arr_25 [(_Bool)1] [i_6] [i_7] [i_9 + 1] [i_10])));
                            arr_37 [i_7] |= ((/* implicit */long long int) arr_13 [i_9] [i_10]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_10] [i_9] [i_9] [i_9 - 1])) : (((((/* implicit */_Bool) arr_35 [i_5] [i_6] [i_7] [i_9] [i_7] [i_10])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)5952)))))))));
                        }
                        arr_38 [i_5] [i_5] [i_9] [i_6] [i_9 - 1] [i_9 + 2] = ((/* implicit */_Bool) ((unsigned short) 1682910571));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 9; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 3) 
                        {
                            {
                                arr_47 [i_5] [i_11] [i_7] [i_11] [i_12] = ((/* implicit */unsigned char) ((arr_43 [i_5] [i_5] [i_5] [7U] [i_5]) != (((/* implicit */long long int) var_13))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59584))) : (var_11)));
                                arr_48 [i_11] [i_7] = ((/* implicit */_Bool) ((arr_20 [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1]) ? (((/* implicit */int) arr_18 [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_18 [i_11 + 1] [i_11 - 2] [0] [i_11 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                {
                    arr_55 [i_5] [i_13] [i_13] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (var_2) : (((/* implicit */unsigned int) -1271070189))))) ? (((/* implicit */int) arr_0 [i_13] [i_13])) : (((/* implicit */int) ((1794409041U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 11037746587322770361ULL)) ? (2787644707U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))))));
                    arr_56 [i_13] [i_13] = ((/* implicit */int) arr_52 [i_5] [i_5] [i_13] [i_14]);
                    arr_57 [i_5] [i_13] [i_5] = ((/* implicit */int) (!((_Bool)0)));
                }
            } 
        } 
        var_29 = ((/* implicit */int) min((var_29), ((+(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12)))) && (((/* implicit */_Bool) (unsigned char)216)))) && (((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_15])));
        var_31 = ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */int) (unsigned short)29288)) != (((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15] [i_15]))) > (var_16)))))));
    }
    for (signed char i_16 = 4; i_16 < 19; i_16 += 4) 
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))) / (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_63 [i_16])))))) * (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_15))))))))));
        arr_64 [i_16] = (~(((/* implicit */int) var_8)));
    }
}
