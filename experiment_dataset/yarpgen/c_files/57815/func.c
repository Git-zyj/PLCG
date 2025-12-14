/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57815
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) % (((/* implicit */int) var_9)))) % (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) var_4)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_6))))) - (((/* implicit */int) var_9)));
                    var_16 = var_0;
                    arr_10 [5ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    arr_11 [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                }
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_17 = ((max((max((((/* implicit */unsigned long long int) (signed char)-92)), (95794175930737345ULL))), (((/* implicit */unsigned long long int) var_11)))) + (3168528532721651331ULL));
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) | (var_5)))) || (((/* implicit */_Bool) min((var_12), (((/* implicit */short) var_11)))))))), (((min((var_13), (((/* implicit */unsigned long long int) var_7)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                }
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    arr_18 [i_1] [i_1] = ((min((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_3))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) max((var_11), (var_6)))), (max((((/* implicit */unsigned short) var_12)), (var_10))))))));
                    arr_19 [i_0] [i_1] [i_4] = ((/* implicit */short) var_14);
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5] = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_6))))), (min((var_8), (((/* implicit */unsigned short) var_14))))))), (var_13));
                        arr_24 [i_1] &= ((max((min((var_5), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_14))))))) | (((min((((/* implicit */unsigned long long int) var_11)), (var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_3))))))));
                        arr_25 [i_1] [i_4] [i_5] |= ((/* implicit */int) var_10);
                        var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) var_3)))))) % (min((var_3), (var_3))))), (((/* implicit */unsigned int) var_12))));
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_1] = ((/* implicit */int) ((((max((var_13), (((/* implicit */unsigned long long int) var_11)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_1))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_10)))))))));
                        var_20 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((var_4) * (var_4))) >> (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_0)) - (103)))))))), (max((min((3168528532721651331ULL), (((/* implicit */unsigned long long int) 1500357211)))), (((/* implicit */unsigned long long int) max(((signed char)96), ((signed char)-40))))))));
                    }
                    for (int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_7))))), (min((var_9), (var_9))))))) >= (min((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) max(((short)-16211), (((/* implicit */short) (unsigned char)15)))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((var_1) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_14)) + (113))))) * (((/* implicit */int) var_7)))))))));
                        arr_31 [i_7] [i_7] [i_1] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (var_4)))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) var_8))))))))) ^ (((min((var_5), (((/* implicit */unsigned long long int) var_9)))) + (max((((/* implicit */unsigned long long int) var_2)), (var_5)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_23 += ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_4)))), (max((var_5), (((/* implicit */unsigned long long int) var_2)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_6)))))) ^ (((var_5) * (var_1)))))));
                                arr_36 [(unsigned char)6] [i_1] [i_4] [i_8] [i_9] = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) var_15)), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_6))))))) ^ (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_10)) - (25652)))))))))));
                                var_24 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_3)))), (var_1))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_3))))))));
                                var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((max((var_14), (var_7))), (((/* implicit */signed char) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))), (max((((/* implicit */unsigned int) var_0)), (var_4)))));
                                var_26 = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    arr_39 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))) && (((var_11) && (((/* implicit */_Bool) var_3))))));
                    arr_40 [i_1] = ((/* implicit */int) var_15);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_13))))) * (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) % (((((/* implicit */int) var_12)) + (((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                    arr_45 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_14)))))) * (((var_4) << (((((/* implicit */int) var_14)) + (106)))))));
                }
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((min((min((var_1), (((/* implicit */unsigned long long int) var_4)))), (var_13))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) var_11)))) >> (((((((/* implicit */int) var_14)) | (((/* implicit */int) var_0)))) + (12)))))))))));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((min((var_5), (((/* implicit */unsigned long long int) var_9)))) == (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                            {
                                arr_53 [i_15] [i_13] [i_13] [i_0] = ((/* implicit */unsigned char) var_0);
                                arr_54 [i_13] [14U] [i_13] = ((/* implicit */int) var_13);
                                arr_55 [i_0] [i_1] [i_13] [i_14] [(signed char)13] [i_14] [i_15] = ((/* implicit */unsigned short) var_1);
                                arr_56 [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) var_7);
                                arr_57 [i_0] [i_1] [i_13] [18ULL] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            }
                            /* vectorizable */
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                            {
                                arr_61 [i_16] [i_13] [i_0] [i_13] [i_0] = ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_10))))) - (((/* implicit */int) var_2)));
                                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) * (((/* implicit */int) var_0)))) | (((((/* implicit */int) (unsigned char)143)) | (-2147483636)))));
                            }
                            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                            {
                                arr_64 [i_0] [i_1] [i_1] [i_1] [i_1] [i_17] [i_17] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((var_4) - (3117477037U)))))) | (max((((/* implicit */unsigned int) var_14)), (var_15)))))), (((var_5) >> (((min((((/* implicit */unsigned int) var_8)), (var_4))) - (44789U)))))));
                                arr_65 [i_17] [i_14] [i_13] [10U] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) var_11)), (var_10))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1))))))))) == (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_5))) & (min((var_13), (var_1)))))));
                                var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */int) max((min((var_8), (((/* implicit */unsigned short) var_9)))), (min((((/* implicit */unsigned short) var_7)), (var_10)))))) - (((/* implicit */int) var_9))))));
                            }
                            arr_66 [i_0] [i_1] [12U] [i_13] = ((/* implicit */signed char) var_10);
                            var_33 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((max((var_6), (var_11))) || (((/* implicit */_Bool) min((var_7), (var_7))))))), (min((((/* implicit */unsigned int) min((var_0), (var_14)))), (min((((/* implicit */unsigned int) var_2)), (var_15)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = max((((/* implicit */int) var_6)), (((((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_9)))) + (((((/* implicit */int) var_2)) - (((/* implicit */int) var_14)))))));
}
