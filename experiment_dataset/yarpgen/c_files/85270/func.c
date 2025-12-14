/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85270
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_1 - 1]))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3735683396U)))))))));
                            arr_13 [i_0] [i_1] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)56)) & (((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned char)56)) - (54))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 - 2] [i_4] [i_5 + 1] [i_1] [i_4]))));
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (arr_12 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 2])));
                        var_17 = ((/* implicit */unsigned char) (((-(var_7))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_7 [i_0]))))))));
                    }
                    arr_22 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (~(var_7)));
                }
                for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1668831427968924829LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)56)), (9223372036854775788LL)));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_4))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? ((+(arr_6 [i_1 - 2] [i_1]))) : (arr_6 [i_1 + 2] [i_1 + 2])));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        arr_34 [i_1] [i_1] [i_1] [i_7] [i_7 + 1] [i_10] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_7] [i_10]);
                        var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_26 [i_1] [i_7] [i_1] [i_1]))))) ? (-9223372036854775807LL) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_3))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    var_23 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)10543)))))));
                    arr_38 [i_0] [i_0] [i_1 + 1] [(unsigned short)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [(unsigned short)18] [i_1 - 2] [i_11 + 4] [i_11 + 1])) ? (arr_16 [(unsigned short)2] [i_1 - 2] [i_11 + 4] [i_11 + 1]) : (arr_16 [(signed char)12] [i_1 - 2] [i_11 + 4] [i_11 + 1])));
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_41 [i_0] [i_0] [i_1] [i_1] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_0] [i_1])) / (((/* implicit */int) arr_37 [i_0] [i_1]))));
                        arr_42 [i_0] [i_1] [i_11 + 2] [i_1] = ((/* implicit */long long int) (!(((_Bool) var_5))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_11 + 1] [i_1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_12 [i_13] [i_11 - 1] [i_13] [i_13])));
                        var_25 = var_12;
                    }
                    for (unsigned short i_14 = 1; i_14 < 18; i_14 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 70368744177536LL)) && (((/* implicit */_Bool) -9223372036854775802LL))));
                        var_27 = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_14]);
                    }
                }
                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) / (9223372036854775805LL))), (((/* implicit */long long int) ((unsigned char) var_5))))) : (-7372769648738805898LL)));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        for (long long int i_16 = 1; i_16 < 19; i_16 += 3) 
        {
            {
                var_30 = ((/* implicit */signed char) arr_51 [i_15] [i_16]);
                var_31 = ((/* implicit */long long int) arr_48 [i_15]);
                arr_53 [i_15] [i_15] [i_16] = ((/* implicit */unsigned char) arr_52 [i_16]);
                var_32 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) (unsigned char)60))))))));
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_16 + 1] [i_16 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) (unsigned short)18810)) : (((/* implicit */int) ((unsigned short) var_1)))))) : (var_11))))));
            }
        } 
    } 
}
