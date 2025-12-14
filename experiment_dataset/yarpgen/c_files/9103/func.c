/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9103
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_11)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (1U) : (4294967294U))) : (((((/* implicit */_Bool) var_5)) ? (1U) : (var_5))))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (var_1)))), (arr_1 [i_0]))) - (1919186216U))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) 2U)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) arr_0 [(unsigned char)20]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [(_Bool)0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(958021264)))) ? (((((/* implicit */_Bool) 2U)) ? (524287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (4122852515U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */long long int) 4294967295U))))) : ((+(((/* implicit */int) var_3)))))))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_0 - 1])) : (arr_0 [i_0 - 2]))) | (((/* implicit */int) ((signed char) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_4 [i_0 - 2] [i_3]))));
                    }
                } 
            } 
            arr_11 [i_0] [i_0] = (unsigned char)6;
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (((long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_9 [10] [i_1])) : (((/* implicit */int) (_Bool)0))))))))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((long long int) 18U)))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned char)185))));
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)-93)))))) == ((~(arr_15 [i_5])))));
        var_25 = var_5;
        arr_18 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4122852508U)) || (((/* implicit */_Bool) arr_17 [i_5] [24ULL])))) ? ((+(14U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5])))))));
        var_26 += ((/* implicit */unsigned char) var_16);
    }
    for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
    {
        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [(unsigned short)0] [(unsigned short)0]))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_13))));
    }
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), ((+(((((/* implicit */_Bool) ((int) arr_8 [i_7] [9LL] [i_9]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-745736103) >= (((/* implicit */int) var_9)))))) : (4294967294U)))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_30 = max((max((-1LL), (((/* implicit */long long int) (unsigned short)9032)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_11] [i_10] [i_9] [i_8]))))));
                                arr_35 [i_7] [i_7] [i_7] [16LL] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_28 [i_7] [i_8] [i_8] [i_9])) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    var_32 += ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) >> (((((unsigned long long int) 745736095)) - (745736077ULL)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 1) 
    {
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(3357863516230672703LL))))));
        var_34 -= ((/* implicit */int) arr_4 [i_12 + 1] [i_12 - 2]);
        var_35 ^= ((/* implicit */signed char) var_16);
    }
    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_30 [i_13] [i_13] [i_13] [i_13]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))))) ? (max((arr_22 [i_13]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_16))))))) : (((/* implicit */unsigned long long int) arr_41 [i_13]))));
        arr_42 [(unsigned char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)101)) >> (((var_7) - (3234337926U))))), (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_31 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)155)), (arr_21 [i_13]))))));
        var_37 = ((/* implicit */int) (~(((arr_30 [i_13] [i_13] [i_13] [(unsigned short)20]) / (arr_30 [i_13] [i_13] [i_13] [i_13])))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 1; i_14 < 15; i_14 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (+(4294967282U))))));
        var_39 ^= ((/* implicit */signed char) ((arr_6 [i_14 + 2] [i_14 - 1]) ? (((/* implicit */int) arr_6 [i_14 + 1] [i_14 + 3])) : (((/* implicit */int) arr_6 [i_14 + 2] [i_14 + 3]))));
    }
}
