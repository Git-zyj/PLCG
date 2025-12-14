/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81921
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0]))))), (arr_2 [i_0])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_15 ^= ((/* implicit */_Bool) ((signed char) var_2));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) ((unsigned long long int) ((arr_8 [i_0] [i_1] [i_2] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3]);
                    var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_18 += ((/* implicit */_Bool) 14566110910904728178ULL);
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_2] [i_4] [i_4]);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_6)))) != ((+(((/* implicit */int) var_5))))))));
                        arr_20 [i_4] [i_4] [i_2] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_18 [i_4]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-124))))));
                    }
                    var_21 *= (signed char)91;
                    var_22 = ((/* implicit */_Bool) (signed char)-103);
                }
                arr_21 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 3) 
            {
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) | (arr_9 [i_1] [i_1] [i_6] [i_6 - 1])));
                var_24 = ((/* implicit */signed char) var_0);
                var_25 = var_0;
            }
            arr_25 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (signed char)-8)))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (signed char)-32))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_28 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((_Bool) (signed char)126)) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))))) >= (((/* implicit */int) arr_19 [i_0] [i_7] [i_7] [i_7] [i_0] [i_7]))));
            arr_29 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)102), ((signed char)112))))));
        }
        for (unsigned long long int i_8 = 4; i_8 < 23; i_8 += 3) 
        {
            var_29 = arr_23 [i_0] [i_8] [i_8 + 2];
            arr_33 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-91)) | (((/* implicit */int) ((signed char) arr_10 [i_0] [(signed char)2] [i_0])))));
            arr_34 [i_0] [i_8] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) min(((signed char)-112), ((signed char)15)))) ^ ((~(((/* implicit */int) (signed char)-3)))))) & (((((/* implicit */int) arr_30 [i_8 - 1] [i_8 + 2])) - ((+(((/* implicit */int) (signed char)-92))))))));
            var_30 *= ((/* implicit */unsigned long long int) ((signed char) max((arr_30 [i_0] [i_8]), (arr_14 [i_0] [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))));
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 24; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_8] [i_10])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_5))))))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_8] [i_10])) : (((/* implicit */int) arr_0 [i_8] [i_9])))))))) ? (((/* implicit */int) ((_Bool) (signed char)-95))) : (((/* implicit */int) var_11)))))));
                        arr_40 [i_0] [i_0] [i_10] [i_9 + 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_0))) / (((13881836692376014118ULL) ^ (var_3)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_23 [i_10] [i_8] [i_0]))));
                        var_33 = ((((((/* implicit */int) ((((/* implicit */int) arr_12 [i_8 + 1] [i_8] [i_8 - 4] [i_8 + 1])) <= (((/* implicit */int) var_10))))) != (((/* implicit */int) var_10)))) ? (max((8734614246552742314ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_31 [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_34 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((signed char) var_2))))), (max((((/* implicit */int) ((_Bool) arr_26 [i_0]))), ((~(((/* implicit */int) (signed char)119))))))));
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) ((unsigned long long int) ((arr_5 [i_11] [i_11] [i_11]) ? (((/* implicit */int) arr_27 [i_11])) : (((/* implicit */int) var_5)))));
        arr_44 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_11] [i_11] [i_11])) << (((((/* implicit */int) (signed char)-126)) + (137)))));
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_37 [i_11] [i_11]))));
    }
    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (!(var_7))))));
}
