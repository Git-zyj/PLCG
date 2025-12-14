/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87634
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3236568337U)) ? (((/* implicit */unsigned long long int) var_5)) : (max((((/* implicit */unsigned long long int) var_1)), ((-(20ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned int) ((var_6) & (var_6)));
            var_12 = ((/* implicit */int) var_9);
        }
        arr_4 [(unsigned short)2] [i_0] = (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)3]))) : (1788622574U))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */signed char) ((int) (unsigned char)249));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2506344749U)) ? (1704973613U) : (1788622547U)))));
                            var_14 = ((/* implicit */unsigned int) arr_10 [i_4] [i_0] [i_3] [i_4]);
                            var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_0]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_16 = ((_Bool) var_6);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4])) | (((/* implicit */int) arr_12 [i_6]))));
                            arr_16 [i_0] [i_0] = ((var_8) ? (var_3) : (((unsigned int) arr_2 [i_0] [i_0])));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) var_1);
                        arr_28 [i_8] [(short)4] |= ((/* implicit */short) ((unsigned int) (-(2506344713U))));
                        var_19 = ((/* implicit */_Bool) ((short) arr_5 [i_9] [i_9]));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_7] [i_7])) + (((/* implicit */int) var_4))))))) ? (var_5) : ((-(((/* implicit */int) var_1))))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) 1788622547U)) ? (arr_31 [i_7] [i_12] [i_12] [i_12]) : (arr_31 [i_7] [9] [i_12] [i_12])))));
                        arr_38 [i_12] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)4] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3)))) | (arr_24 [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1])))) ? (arr_25 [i_7] [i_11]) : (arr_27 [i_12] [i_11] [(_Bool)1])));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
    {
        arr_42 [i_14] = ((/* implicit */unsigned char) var_9);
        var_22 |= ((/* implicit */long long int) (+(((int) arr_40 [i_14]))));
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 3) 
    {
        arr_46 [i_15] = ((/* implicit */unsigned long long int) var_6);
        var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) < (arr_44 [i_15]));
        arr_47 [i_15] = ((/* implicit */signed char) max((5013485294491068733ULL), (((/* implicit */unsigned long long int) 2509067827U))));
        var_24 *= ((/* implicit */short) min((((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_9)) ? (1788622551U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        arr_48 [i_15] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)23267)), (1788622545U)));
    }
    for (signed char i_16 = 3; i_16 < 12; i_16 += 3) 
    {
        arr_51 [(signed char)8] [i_16] = ((/* implicit */signed char) var_0);
        arr_52 [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
        arr_53 [i_16] [i_16] = ((/* implicit */_Bool) 1246290055);
        /* LoopSeq 1 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_25 = ((((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)14452))))))) > ((-(((((/* implicit */unsigned int) var_6)) * (var_0))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_26 = ((/* implicit */short) ((unsigned int) min((arr_10 [i_16 + 3] [i_16 + 3] [i_16] [i_16]), (((/* implicit */unsigned short) max((var_9), (((/* implicit */short) var_4))))))));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    for (short i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        {
                            arr_66 [i_16] [i_16] [i_16] [i_19] [i_17] [i_18] = ((/* implicit */short) (+(var_6)));
                            arr_67 [i_16] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((arr_41 [i_16 + 1]), (arr_61 [i_16 + 2] [i_17 - 1] [i_17 - 1] [i_19 + 1])))), (((((/* implicit */_Bool) arr_12 [i_17])) ? (max((var_2), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((arr_54 [i_18] [i_16] [i_20]) ? (((/* implicit */int) arr_40 [i_20])) : (((/* implicit */int) (short)5552)))))))));
                            var_27 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)0)), (arr_41 [i_16])));
                            var_28 = ((/* implicit */unsigned char) ((int) (-(var_3))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) ((max((arr_62 [i_16 + 3] [i_16 + 3] [i_16 + 2] [i_17 - 1] [12U] [i_17 - 1]), (arr_62 [i_16] [i_16] [i_16 + 2] [i_16] [i_17] [i_17 - 1]))) + (((((/* implicit */_Bool) arr_62 [5U] [(_Bool)1] [i_16 + 2] [(_Bool)1] [i_16 + 2] [i_17 - 1])) ? (arr_62 [i_16] [i_16] [i_16 + 2] [(short)3] [i_16] [i_17 - 1]) : (var_0)))));
            }
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_13 [i_17] [i_17] [i_17] [i_16 + 2] [i_16 + 2] [i_16 + 2]))), (((/* implicit */long long int) ((unsigned char) arr_60 [i_16] [i_17 - 1] [(unsigned short)2] [i_16])))))) ? (((unsigned int) max((((/* implicit */short) (unsigned char)0)), (var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18)))));
            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_13 [i_16] [i_17] [i_17 - 1] [i_17] [i_17] [i_16 + 1]) > (arr_13 [i_16] [i_17] [i_17 - 1] [i_17] [i_16 - 2] [i_16 + 1]))))));
        }
    }
}
