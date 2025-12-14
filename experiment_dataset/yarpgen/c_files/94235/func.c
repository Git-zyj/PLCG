/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94235
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
    var_17 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_6 [i_0 - 1] [i_2 - 1] [i_2] [(unsigned char)15]), (arr_6 [i_0 + 1] [i_2 + 3] [i_2 + 3] [i_1])))), ((~(((/* implicit */int) arr_6 [i_0 + 1] [i_2 + 3] [i_2 + 3] [i_1]))))));
                            arr_9 [i_2] [i_2] [i_0] [i_1] [i_0 - 2] [i_2] = ((/* implicit */unsigned int) min((arr_0 [i_3] [3LL]), (min((max((arr_0 [i_1] [(signed char)1]), (arr_0 [i_2] [i_3]))), (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((((/* implicit */unsigned long long int) max((arr_3 [i_3]), (((/* implicit */unsigned short) arr_4 [i_2 + 3] [i_1]))))), (min((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (var_4)))))));
                            var_20 = ((/* implicit */int) (unsigned short)3448);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                            {
                                arr_18 [i_5] [i_1] [(signed char)0] [i_5] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0)));
                                arr_19 [i_0] [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((short) arr_12 [i_0] [18LL] [i_4]));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((_Bool) (~(((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_2))))))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3448))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2]))) == (arr_8 [i_1] [i_1] [i_7] [i_5] [i_7])))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 15))) < (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) >= (((/* implicit */int) arr_14 [i_0])))))))))))));
                                arr_23 [i_1] [i_1] [i_5] = (!(((/* implicit */_Bool) var_13)));
                                var_23 = ((/* implicit */short) arr_0 [i_0] [i_0]);
                            }
                            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                            {
                                arr_26 [i_5] [i_1] [i_5] = ((/* implicit */unsigned int) var_16);
                                var_24 = ((/* implicit */long long int) ((int) ((unsigned int) -8905558780155495762LL)));
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((arr_5 [i_1] [i_5]), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_4] [(unsigned short)23] [i_8])))), (((/* implicit */long long int) var_7)))))));
                                arr_27 [i_5] [i_5] [i_1] [i_4] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                            }
                            arr_28 [i_0] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_24 [i_5] [i_0] [i_4] [i_1] [i_0])))));
                            arr_29 [i_0 + 2] [i_5] [i_4] [(signed char)5] = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_33 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */short) var_2);
                    arr_34 [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((long long int) ((signed char) var_2))));
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */int) min((((short) arr_11 [i_0] [i_0] [(short)11] [4LL])), (((/* implicit */short) max((var_7), (((/* implicit */unsigned char) arr_20 [i_0] [i_1] [i_1] [i_9] [(short)2])))))))), (((arr_11 [i_0] [i_0 - 2] [i_0 + 2] [i_1]) & (((/* implicit */int) var_14))))));
                    var_27 = ((/* implicit */int) (~(var_6)));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    arr_37 [(signed char)16] [(signed char)16] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_28 = ((/* implicit */unsigned char) arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 2]);
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 1])) + (((unsigned int) 11632016458876151840ULL))));
                }
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((_Bool) var_8))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_10))))))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_12]);
                                var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                                var_33 = ((int) ((int) arr_13 [i_0 - 2] [i_13] [i_13]));
                                arr_45 [13U] [i_1] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) max(((short)-6709), (((/* implicit */short) (!(((/* implicit */_Bool) 11632016458876151841ULL)))))));
                            }
                        } 
                    } 
                    arr_46 [i_0] [i_1] [i_11] = ((/* implicit */unsigned int) min((((arr_1 [i_11]) ^ (((/* implicit */int) arr_36 [i_0 - 1] [i_1] [i_11])))), (((/* implicit */int) var_15))));
                    var_34 = ((/* implicit */int) ((unsigned int) 11632016458876151825ULL));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((unsigned long long int) arr_44 [(short)6] [i_1] [i_1] [i_11] [i_11])) << (((/* implicit */int) var_13)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        for (short i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            {
                var_36 = ((/* implicit */unsigned long long int) (+(max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) arr_17 [i_14] [i_14] [i_14] [i_15] [i_15] [i_15]))))));
                var_37 = ((/* implicit */int) min((var_37), ((+(((/* implicit */int) ((((/* implicit */int) arr_20 [i_14] [i_14] [i_14] [i_14] [i_14])) <= (((/* implicit */int) arr_20 [i_14] [i_14] [i_15] [i_15] [i_15])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 3) 
        {
            {
                var_38 = ((/* implicit */signed char) (((-(arr_48 [i_16]))) + (arr_48 [i_16])));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (+(-1032949586))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (long long int i_19 = 2; i_19 < 17; i_19 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_40 -= ((/* implicit */signed char) max((((/* implicit */int) min((((short) 71082552)), (((/* implicit */short) (!(var_11))))))), (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6814727614833399775ULL))))) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_16))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_15)))) / ((+(((/* implicit */int) min((var_14), (arr_3 [i_18]))))))));
                        var_42 += ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((((/* implicit */_Bool) arr_15 [i_18] [i_18] [i_19] [i_20] [i_19] [3LL])) ? (arr_8 [i_18] [i_18] [i_20] [i_21] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))))), (arr_38 [8] [8] [i_20] [i_21])));
                    }
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) max((((int) (!(var_16)))), (((/* implicit */int) ((((/* implicit */int) arr_66 [i_22 + 1] [i_19 - 2])) < (((/* implicit */int) arr_66 [i_22 + 1] [i_19 + 1]))))))))));
                        arr_68 [i_20] [i_19] [i_18] [(_Bool)1] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(6814727614833399776ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_1)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)62073)) ? (((/* implicit */int) arr_60 [i_19] [i_22])) : (((/* implicit */int) arr_6 [i_18] [i_18] [i_18] [i_18])))), ((~(((/* implicit */int) (short)6709))))))) : (((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) | (((/* implicit */long long int) min((arr_16 [i_19 + 1] [i_20] [i_22 + 1]), (((/* implicit */int) (short)-18181)))))))));
                    }
                    arr_69 [i_18] [i_18] [i_18] = ((/* implicit */short) max((max(((~(((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [19U] [i_19] [i_19] [i_20]))))))), (((int) 6814727614833399748ULL))));
                }
                for (long long int i_23 = 0; i_23 < 18; i_23 += 3) 
                {
                    arr_72 [i_18] [i_19] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_18] [11LL] [i_23] [i_18] [i_23])))))), (max((arr_31 [i_19 - 1] [i_19 - 1]), (((/* implicit */unsigned long long int) var_13))))))) ? ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [(_Bool)1] [i_19] [i_19] [i_19] [i_19 - 2] [i_19])) : (((/* implicit */int) arr_62 [i_23] [10U] [i_18] [i_18])))))) : (((/* implicit */int) var_9))));
                    arr_73 [i_18] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_43 [i_18] [i_19 - 2] [i_23] [i_23] [i_23]) + (arr_12 [i_23] [i_19 - 2] [i_18])))) ? ((~(arr_12 [i_23] [i_18] [i_18]))) : (((((/* implicit */_Bool) arr_43 [i_18] [i_18] [i_19 - 1] [4LL] [i_23])) ? (arr_43 [i_18] [i_19 - 1] [i_19 - 1] [9ULL] [i_19]) : (arr_43 [i_18] [i_19] [i_19] [i_19 + 1] [i_23])))));
                }
                arr_74 [i_18] = min((min((((/* implicit */signed char) arr_21 [12] [i_19] [i_19] [i_19 + 1])), (arr_42 [i_19 + 1] [i_19] [i_19 - 2] [i_19]))), (((/* implicit */signed char) (!(var_9)))));
            }
        } 
    } 
}
