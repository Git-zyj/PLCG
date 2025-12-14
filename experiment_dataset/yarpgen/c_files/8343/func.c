/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8343
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (short)0);
        var_19 = ((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]);
        var_20 = ((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) var_3);
                            var_22 = ((/* implicit */unsigned char) (unsigned short)9572);
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */int) arr_3 [i_0]))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))));
                            var_25 = ((/* implicit */int) ((short) (-(arr_13 [i_0] [2] [i_2 + 4] [i_3] [2] [i_5] [i_0]))));
                        }
                        var_26 &= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_3]))));
                        var_27 = ((/* implicit */unsigned short) (((~(var_6))) % (((/* implicit */int) (unsigned short)45256))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 4) 
    {
        var_28 = ((/* implicit */long long int) arr_5 [i_6] [i_6]);
        var_29 = ((/* implicit */unsigned int) ((int) arr_0 [i_6 - 2] [(_Bool)1]));
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [1])) ? (var_15) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_4)))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        var_31 = ((/* implicit */signed char) (unsigned short)9572);
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7 - 1]))));
        var_33 = (-(((/* implicit */int) arr_6 [i_7 + 1] [(unsigned char)3] [i_7 + 1])));
    }
    var_34 = ((/* implicit */signed char) ((short) var_8));
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        for (int i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 22; i_11 += 2) 
                    {
                        for (signed char i_12 = 3; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_8 + 1] [i_11 + 3])) ? (((/* implicit */int) (unsigned short)9569)) : (((/* implicit */int) var_14))))));
                                var_36 = ((/* implicit */signed char) ((short) arr_28 [i_8 + 1] [i_11 + 3]));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_10 + 2] [i_8 + 1] [i_9 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1])) + (110)))))) ? ((+(((((/* implicit */_Bool) (short)24471)) ? (arr_22 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        for (int i_14 = 3; i_14 < 23; i_14 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9572)) - (((/* implicit */int) (unsigned short)0)))))))) ? (-1802745726) : ((+(((/* implicit */int) var_16))))));
                                var_39 = ((/* implicit */long long int) arr_6 [i_8] [i_8] [16]);
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_9 + 1]))))) : ((+(((/* implicit */int) var_1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        var_41 = max((((/* implicit */int) arr_28 [i_15] [i_15])), ((~(((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) var_1)) + (53))))))));
        var_42 |= ((/* implicit */short) max((((((/* implicit */int) arr_30 [i_15] [i_15] [i_15] [i_15])) & (((/* implicit */int) arr_28 [i_15] [i_15])))), (((((/* implicit */_Bool) arr_28 [i_15] [i_15])) ? (((/* implicit */int) arr_30 [(short)16] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_16))))));
        var_43 ^= ((/* implicit */int) ((((((unsigned int) (_Bool)1)) - (((((/* implicit */_Bool) (unsigned short)9572)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [10] [20]))) : (var_4))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    }
    for (unsigned int i_16 = 1; i_16 < 21; i_16 += 2) 
    {
        var_44 = ((/* implicit */int) var_9);
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            for (signed char i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                {
                    var_45 = ((/* implicit */long long int) (+(4294967295U)));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)60454)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (max((arr_22 [i_16 + 3]), (((/* implicit */unsigned int) arr_13 [i_18] [(signed char)18] [i_16] [i_16 + 1] [(signed char)18] [i_16] [i_18]))))));
                    var_47 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(1802745725))) + (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (_Bool)1)))))))) ? (((int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)0))))))));
                }
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned int) ((unsigned char) -3953300477421103588LL));
}
