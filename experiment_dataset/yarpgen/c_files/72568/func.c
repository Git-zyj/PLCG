/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72568
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) var_3);
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_0 [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (arr_0 [i_2 - 1]) : (((/* implicit */unsigned long long int) var_13))));
                var_23 &= ((/* implicit */unsigned char) var_1);
            }
        }
        for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((arr_6 [i_0] [i_3 + 3] [i_3 + 1]), (((/* implicit */unsigned short) var_18))))) : (((/* implicit */int) max((((/* implicit */short) arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1])), (max((var_15), (var_2)))))))))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_4 [i_3 - 1] [i_3 - 1] [i_5]))) & (((/* implicit */int) (short)15737))));
                            var_26 += ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)86))));
                            var_27 *= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) arr_5 [i_3 + 2] [i_3] [i_3])), (var_9)))));
                            var_28 = ((/* implicit */short) 1479969116U);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) max((max((arr_1 [i_3 + 2] [i_3 + 1]), (((/* implicit */unsigned short) var_4)))), (arr_1 [i_3 - 2] [i_3 + 2]))))));
            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) max(((short)-25052), (((/* implicit */short) (unsigned char)108)))))));
            var_31 = ((max((arr_13 [i_0]), (arr_13 [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3] [i_3 - 2]))))) : (((arr_11 [i_0] [i_3] [(signed char)11] [i_0]) ^ (((/* implicit */int) (_Bool)1)))));
        }
        var_32 &= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_2)) <= (var_6))))));
        var_33 = ((/* implicit */unsigned short) min((((unsigned int) arr_12 [i_0] [i_0] [(unsigned char)6] [i_0])), (((/* implicit */unsigned int) ((_Bool) arr_9 [i_0] [i_0] [i_0])))));
    }
    for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        arr_21 [i_7] = ((/* implicit */short) (~(((((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 1])) - ((~(((/* implicit */int) var_3))))))));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    arr_28 [i_7] [i_8 - 1] [i_9] [i_9] = ((/* implicit */short) (-(min((max((-1827092465), (((/* implicit */int) (signed char)0)))), (((/* implicit */int) (unsigned char)170))))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7] [i_8] [10ULL] [i_9])) ? (max((arr_23 [i_7 + 1]), (((/* implicit */int) var_16)))) : ((~(((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (signed char)0)))));
                                var_36 += (!(((/* implicit */_Bool) 2147483647)));
                                var_37 = ((/* implicit */unsigned char) var_17);
                                var_38 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_27 [i_10 - 1] [i_11 - 1] [i_11 + 3]))))) ? (((/* implicit */int) arr_34 [i_7 + 1] [i_8 - 1] [i_8 - 1] [i_10 - 2] [i_11])) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((((/* implicit */_Bool) 6100413868456231856ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)25051)))))))));
                                var_39 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_26 [i_7 + 1] [i_9] [i_10] [4U])))) == (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_30 [i_7 - 1] [i_8 + 1] [i_9] [i_11])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 13; i_13 += 1) 
                        {
                            {
                                arr_39 [i_8 + 1] [i_12 + 2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_20 [(short)1])) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_19)))) : (((/* implicit */int) var_7))))));
                                var_40 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)0))))) % (max((((/* implicit */unsigned int) var_11)), (3979589788U))))));
                                var_41 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) (unsigned char)0)))));
                                var_42 = ((/* implicit */int) min((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [i_7])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_11)))) : (315377508U)))) ? (((((/* implicit */_Bool) max((arr_29 [i_7] [13ULL] [i_13 - 1]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) arr_20 [(unsigned short)7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_9] [i_12 + 2] [i_13]))))))) : (((/* implicit */int) min((arr_20 [i_12 - 1]), (arr_20 [i_12 - 1]))))))));
                            }
                        } 
                    } 
                    var_43 += ((/* implicit */signed char) min((((max((((/* implicit */int) var_10)), (arr_23 [i_8 + 1]))) % (((/* implicit */int) arr_19 [i_8] [i_8 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_44 += (+((~(arr_40 [(signed char)0]))));
        arr_42 [i_14] = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) / (arr_41 [i_14] [i_14]))));
        var_45 = ((((/* implicit */_Bool) arr_41 [i_14] [i_14])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (((unsigned int) 4294967295U)) : (arr_41 [i_14] [i_14])))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */signed char) 2463879945U);
        arr_46 [i_15] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */_Bool) (~(((((((/* implicit */int) ((short) var_5))) + (2147483647))) << (((max((((/* implicit */unsigned int) var_2)), (arr_44 [i_15]))) - (248636438U)))))))) : (((/* implicit */_Bool) (~(((((((/* implicit */int) ((short) var_5))) + (2147483647))) << (((((max((((/* implicit */unsigned int) var_2)), (arr_44 [i_15]))) - (248636438U))) - (750275641U))))))));
        var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_0))))))));
    }
    var_48 = ((/* implicit */unsigned int) var_11);
}
