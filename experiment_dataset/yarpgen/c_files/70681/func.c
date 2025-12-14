/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70681
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
    var_20 = ((/* implicit */short) min(((-(min((((/* implicit */long long int) var_2)), (var_11))))), (((/* implicit */long long int) ((int) ((long long int) var_9))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min(((~(((arr_0 [i_0]) ^ (arr_1 [i_0]))))), (((((arr_1 [i_0]) & (arr_0 [i_0]))) << (((max((arr_1 [i_0]), (arr_0 [i_0]))) - (6344867580339106835LL))))))))));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) min((arr_2 [i_1]), (min((2000967158), (((/* implicit */int) (short)(-32767 - 1)))))));
        var_24 = ((/* implicit */long long int) min((var_24), (arr_3 [i_1])));
        var_25 = ((/* implicit */int) arr_3 [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((arr_4 [i_2]), (arr_5 [i_2])))))) >= (min((((/* implicit */long long int) arr_6 [i_2])), (arr_5 [i_2])))));
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_27 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_10 [i_2] [i_3 + 2] [i_3]))))), ((-(arr_10 [i_2] [i_3] [i_2]))));
            var_28 = ((/* implicit */long long int) arr_6 [i_2]);
            var_29 = ((/* implicit */short) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) -2000967170))))), (arr_7 [i_2] [i_2] [i_3 + 2]))), ((-(-4022164703822425516LL)))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_30 = ((/* implicit */signed char) ((((-2000967182) | (2000967150))) != (((((/* implicit */int) (_Bool)1)) & (-2000967166)))));
                var_31 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (3507851581U))));
                var_32 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3 + 1] [i_3 + 2]))) & (arr_10 [i_2] [i_3 + 2] [i_3 + 2]))), (((((7U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? ((+(arr_10 [i_2] [i_3] [i_4]))) : (arr_7 [i_3 - 1] [i_2] [i_3])))));
                var_33 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3 - 2] [i_4] [i_4])) & (((/* implicit */int) ((_Bool) arr_7 [i_2] [i_2] [i_2])))))) - (((min((arr_9 [i_2]), (((/* implicit */long long int) arr_11 [i_2] [i_3] [i_4])))) & (arr_7 [i_3 - 2] [i_2] [i_3 + 2])))));
            }
        }
        for (long long int i_5 = 2; i_5 < 15; i_5 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((((min((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_2] [i_2] [i_5]))))), (max((((/* implicit */long long int) arr_6 [i_2])), (arr_10 [i_2] [i_5] [i_5]))))) + (9223372036854775807LL))) << (((((((/* implicit */int) max((arr_14 [i_5 + 1]), (arr_14 [i_5 - 2])))) + (23642))) - (40)))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (int i_7 = 4; i_7 < 15; i_7 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_35 = ((/* implicit */short) arr_17 [i_7 - 1] [i_5] [i_6] [i_2]);
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_7 [i_8] [i_8] [i_8]))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_7 [i_2] [i_2] [i_6]);
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8] [i_2] [i_2])) ? (((/* implicit */long long int) min((arr_15 [i_7 + 1] [i_5] [i_5 + 1] [i_7]), (arr_15 [i_7 + 1] [i_5] [i_5 - 2] [i_7])))) : (arr_9 [i_2])));
                        }
                        for (short i_9 = 3; i_9 < 16; i_9 += 2) 
                        {
                            arr_25 [i_2] [i_5] [i_2] [i_2] [i_9] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_16 [i_9] [i_9 - 2] [i_9] [i_9 + 1]), (arr_16 [i_9] [i_9 + 1] [i_9] [i_9 - 1]))))));
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_8 [i_2] [i_2]))));
                            var_39 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_5 - 2] [i_7 - 3])) && (((/* implicit */_Bool) ((int) arr_14 [i_2])))))), (max((-1432642970483374715LL), (((/* implicit */long long int) -1336216691))))));
                            var_40 = ((/* implicit */signed char) arr_10 [i_2] [i_5] [i_7]);
                            arr_26 [i_2] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) ((((((arr_4 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_6]))))) / (arr_13 [i_2] [i_7 - 1] [i_7 + 2]))) != (((/* implicit */long long int) ((/* implicit */int) ((short) ((((((/* implicit */int) arr_14 [i_9])) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_2])) + (23603))))))))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 13; i_10 += 4) 
                        {
                            arr_29 [i_2] [i_5] [i_2] [i_2] = (~(((((arr_7 [i_2] [i_2] [i_10]) | (((/* implicit */long long int) arr_24 [i_2] [i_5] [i_6] [i_7] [i_6] [i_10] [i_2])))) / (((/* implicit */long long int) min((arr_28 [i_2] [i_5] [i_6] [i_7] [i_10]), (((/* implicit */unsigned int) arr_20 [i_2]))))))));
                            var_41 = ((/* implicit */long long int) arr_12 [i_2] [i_6] [i_7]);
                        }
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_6] [i_7])) && (((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_7])))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_5])) <= (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5]))))) : (((1336216691) * (((/* implicit */int) (short)0))))));
                        var_43 = ((/* implicit */_Bool) ((int) max((((/* implicit */int) arr_27 [i_2] [i_5 - 2] [i_7 - 4])), (arr_15 [i_5 - 2] [i_5] [i_6] [i_7]))));
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2] [i_5] [i_5]))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_5] [i_5] [i_5]))) & (arr_7 [i_2] [i_2] [i_5])))))));
            arr_30 [i_2] [i_2] = arr_13 [i_2] [i_2] [i_5];
        }
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((arr_15 [i_2] [i_2] [i_2] [i_2]) * (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) == (arr_20 [i_2])))))) | (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
        var_46 = ((((min((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_6 [i_2])))) + (2147483647))) << ((((((~(((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2] [i_2])) == (arr_10 [i_2] [i_2] [i_2])))))) + (25))) - (24))));
        var_47 = ((/* implicit */int) max((var_47), (min((((/* implicit */int) arr_27 [10LL] [i_2] [i_2])), (max((((/* implicit */int) min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned short) arr_6 [(short)8]))))), ((~(((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))))))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            for (int i_13 = 3; i_13 < 15; i_13 += 4) 
            {
                {
                    var_48 ^= ((/* implicit */int) arr_32 [i_11]);
                    var_49 = ((/* implicit */unsigned short) arr_9 [i_12]);
                }
            } 
        } 
        arr_41 [i_11] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [0] [i_11] [i_11]))));
    }
    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) var_3))));
    var_51 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_4)) : (min((((/* implicit */long long int) (unsigned short)1023)), (-5305056034961575575LL))));
}
