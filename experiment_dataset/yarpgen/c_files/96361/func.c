/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96361
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
    for (long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~((~((~(((/* implicit */int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */_Bool) (-((+(-5374590190671053978LL)))));
        var_17 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((var_8), (arr_1 [(unsigned char)8]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = (+((~(((/* implicit */int) arr_4 [i_1 - 1])))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                {
                    var_19 *= (-(max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (var_7))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_14 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)27113))));
                            arr_15 [i_1] [i_1] [i_1] [i_4] [i_4] [i_5] = (-(((/* implicit */int) (signed char)-121)));
                        }
                        var_20 = (-(max(((~(((/* implicit */int) var_5)))), ((-(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) (~(var_15)));
                            var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [(signed char)18] [i_3 + 2] [i_7 - 1]))));
                            var_23 ^= ((/* implicit */unsigned short) (~(var_0)));
                        }
                        var_24 = ((/* implicit */unsigned short) (~((~(var_11)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            var_25 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)37828))));
                            var_26 = ((/* implicit */_Bool) (~(var_3)));
                        }
                        for (short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned short)3893), ((unsigned short)28670))))));
                            var_28 -= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [i_2 + 2]))))));
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_2 + 3] [1] [i_2 + 3] [i_2])), (-6088670115321652573LL))))));
                            var_30 ^= ((/* implicit */_Bool) (+((~(-6088670115321652597LL)))));
                        }
                        var_31 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((~(var_11))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 3] [i_2 + 1])))))));
                    }
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (signed char i_12 = 2; i_12 < 13; i_12 += 4) 
            {
                {
                    arr_36 [i_10] [i_11] [i_12] [i_10] = ((/* implicit */short) (-((~(((/* implicit */int) var_13))))));
                    arr_37 [i_10] [13LL] [(_Bool)1] [i_10] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)98))))));
                    arr_38 [i_10] [i_11] [i_12] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)120)), (arr_29 [i_12 + 3] [i_12 + 3]))))));
                    var_32 -= ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_13)))), ((~(((/* implicit */int) (unsigned char)0))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_13 = 3; i_13 < 15; i_13 += 4) 
        {
            var_33 *= ((/* implicit */signed char) (~((~(var_2)))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 2; i_14 < 16; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_17 [i_13 - 1] [i_13] [i_13 - 2] [i_13 + 2] [i_14 - 1]), ((unsigned short)31975))))));
                        var_35 = (~(min((((/* implicit */long long int) arr_44 [i_14] [i_14 - 1] [(unsigned char)5] [i_14] [i_15])), (var_3))));
                        arr_46 [(_Bool)0] [i_13] [i_14] [i_15] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)1))))));
                        var_36 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (signed char)-98)))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                var_37 = ((/* implicit */signed char) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61643))))), (max((((/* implicit */int) arr_41 [4LL] [i_13 - 2] [i_16 + 1] [(_Bool)1])), (2147483647)))))));
                var_38 -= (-((~(((/* implicit */int) var_5)))));
                var_39 = ((/* implicit */_Bool) (+((-(5374590190671053982LL)))));
            }
            for (signed char i_17 = 4; i_17 < 13; i_17 += 4) 
            {
                var_40 = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_22 [i_13 - 1] [i_13 - 1] [i_13 - 3] [i_17 - 1]), (((/* implicit */unsigned short) var_4))))), ((-(((/* implicit */int) var_10))))));
                var_41 ^= ((/* implicit */long long int) max(((+(((/* implicit */int) arr_39 [i_13 + 1] [i_17 + 1])))), ((-(((/* implicit */int) (signed char)105))))));
                var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_22 [i_13] [i_17 - 4] [(_Bool)1] [i_17 + 2]), (((/* implicit */unsigned short) (signed char)-1)))))));
            }
            for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                var_43 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20432))));
                var_44 = ((/* implicit */short) (~((+(((/* implicit */int) arr_27 [i_18] [i_13] [(unsigned char)15] [i_13 + 1] [i_10]))))));
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_19 = 2; i_19 < 14; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 17; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    {
                        arr_62 [i_19] [i_19] = ((/* implicit */signed char) max((-23LL), (((/* implicit */long long int) (unsigned short)42804))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
                        {
                            var_45 -= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)71))));
                            var_46 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_53 [i_19] [(_Bool)1] [i_19 + 3] [i_21]))));
                            var_47 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_22] [i_21] [i_21] [i_21] [i_19 - 2]))));
                            arr_65 [i_19] [i_19] [(_Bool)1] [i_21] [(_Bool)1] = ((/* implicit */short) (-(var_2)));
                            var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        }
                        var_49 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_12 [i_19 + 2] [i_19 + 1] [i_19 + 1]))))));
                        var_50 *= ((/* implicit */unsigned char) max(((-(var_15))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)12212)))))));
                    }
                } 
            } 
        } 
    }
    var_51 = ((/* implicit */unsigned char) max(((+(var_14))), ((+((~(-9223372036854775806LL)))))));
    var_52 -= ((/* implicit */_Bool) (+((~(max((var_15), (((/* implicit */long long int) var_4))))))));
}
