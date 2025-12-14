/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94088
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_20 = ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */_Bool) (unsigned char)203)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35360))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((var_19), (((/* implicit */unsigned short) var_14)))), (((/* implicit */unsigned short) var_0)))))));
                    arr_8 [14ULL] [(unsigned short)1] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])) & ((+(((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_13);
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)185)))), (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)10836))))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_1 [15ULL] [15ULL])))) : (((((/* implicit */_Bool) 453502894U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62457))) : (36028797018963967ULL)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) + (min((((/* implicit */unsigned long long int) var_14)), (var_15)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 9469952739092133322ULL)) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_3] [i_0])) : (var_15))))) : (((/* implicit */int) max(((unsigned char)39), (arr_11 [1U] [i_0] [(unsigned short)15] [(unsigned short)15]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)2639)))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_19))));
                        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) var_6)))) + (((/* implicit */int) arr_11 [i_3] [i_3] [i_1] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_10))));
                            var_26 = ((unsigned short) ((signed char) (unsigned short)43679));
                            var_27 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_10)))) & (((arr_14 [i_0] [i_4] [6ULL] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_19))))));
                            var_28 = ((/* implicit */signed char) arr_11 [i_0] [i_3] [i_4] [i_5]);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (_Bool)1))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_30 *= ((/* implicit */signed char) (_Bool)1);
                            arr_24 [i_0] [i_1] [i_3] [i_4] [(unsigned short)8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
                            arr_25 [i_6] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                            var_31 |= ((/* implicit */unsigned long long int) arr_16 [6ULL] [i_4] [i_3] [i_0]);
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_32 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (((-(var_16))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35353)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)30175))))))))));
                        var_33 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0]))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) max(((+(((/* implicit */int) max((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))))), ((+(((/* implicit */int) (short)32767))))));
                        var_35 *= ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_3] [i_0])), (var_15)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) min((arr_15 [i_0] [i_1] [i_9]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)52))))))))));
                        var_37 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)30164));
                        var_38 = ((/* implicit */_Bool) min((var_38), ((_Bool)1)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        arr_34 [(short)2] [(short)2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) & ((~(((/* implicit */int) arr_28 [i_3] [i_3] [i_1] [i_0]))))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (unsigned short)46645))))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 4) 
                {
                    var_40 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_0] [i_1] [i_11 + 3] [(unsigned char)14]))));
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_11] [i_0]))) && (((/* implicit */_Bool) arr_12 [i_0]))));
                }
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_1] [i_0])), (var_6))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != ((((_Bool)0) ? (3075209510U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39665)))))))))))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned char) 7463549651338343210ULL);
}
