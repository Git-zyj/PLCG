/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67288
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */short) ((min((((long long int) var_0)), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) * (((/* implicit */long long int) ((arr_0 [i_0]) % (arr_0 [i_0]))))));
        var_14 *= ((/* implicit */unsigned short) min((3027750556460118955LL), (((/* implicit */long long int) 1312205546))));
        var_15 *= ((min((var_7), (((/* implicit */long long int) arr_1 [(short)9] [i_0])))) / (max((-8624759812203714916LL), (((/* implicit */long long int) 2147483647)))));
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                var_16 -= ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */short) var_1)), (arr_7 [i_1 - 1] [i_1 - 2])))), (((((/* implicit */_Bool) -1312205546)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-82))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    var_17 &= ((/* implicit */_Bool) ((9223372036854775807LL) ^ (5050694243865719877LL)));
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_1 - 2] [i_5 + 1] [i_3 - 1] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [11]))))))));
                        var_19 -= ((/* implicit */signed char) (~(arr_14 [i_1 - 1] [12U] [i_1] [i_1 - 1])));
                        var_20 = arr_14 [i_1] [i_2] [i_3] [7U];
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_5 + 1])) % (((/* implicit */int) arr_4 [i_5 - 1]))));
                        var_22 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                    }
                }
                for (short i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_23 |= ((/* implicit */unsigned long long int) var_0);
                    var_24 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_6])) % (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) arr_2 [i_1] [i_2])))) : (((/* implicit */int) arr_1 [i_1] [i_2]))))), (((unsigned int) var_0))));
                }
                for (short i_7 = 2; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) min((281474976645120ULL), (min((281474976645120ULL), (13157442442114530519ULL)))));
                    var_26 = ((/* implicit */unsigned short) ((6854391629807548094LL) % (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2412)))))));
                }
            }
            for (unsigned char i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_1] [i_8])))) % (((/* implicit */int) ((signed char) var_10))))))));
                var_28 = min((((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1]))))), (min((((/* implicit */long long int) arr_2 [i_2 - 1] [i_2 - 1])), (arr_23 [(unsigned char)1] [(unsigned char)1] [i_8 + 2]))));
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)54)) ^ (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_1 [i_1 - 3] [i_2 + 1]))), (min((min((((/* implicit */long long int) var_1)), (var_7))), (((/* implicit */long long int) min((var_12), (arr_29 [i_2] [i_9] [i_10] [i_9]))))))));
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((+(arr_14 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) arr_29 [i_1] [i_2] [i_10 - 1] [i_9])))))));
                            var_32 = ((/* implicit */int) ((arr_28 [i_11] [i_2] [(_Bool)1]) == (((/* implicit */unsigned long long int) max((var_0), (arr_17 [i_10] [i_10] [i_9] [i_10] [i_11] [(_Bool)1]))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */int) min((min((var_10), (-6854391629807548095LL))), (((/* implicit */long long int) 2809438508U))));
            }
            var_34 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1])), (max((((/* implicit */unsigned long long int) var_11)), (max((arr_6 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_1]))))))));
        }
        /* LoopSeq 3 */
        for (signed char i_12 = 1; i_12 < 11; i_12 += 1) 
        {
            var_35 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */short) min((var_5), (var_2)))), (min((arr_33 [i_1] [i_12]), (((/* implicit */short) var_6))))))), (((arr_11 [(short)13] [i_12 + 2] [i_12] [5U]) / (((/* implicit */unsigned long long int) ((arr_37 [i_12]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_12]))))))))));
            var_36 = ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), (arr_7 [i_1] [i_1]))))) * (min((((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_1))))))));
            var_37 = ((/* implicit */_Bool) max((((int) min((arr_22 [i_1] [1LL] [i_12]), (((/* implicit */unsigned long long int) var_8))))), (((((/* implicit */int) arr_8 [i_1] [i_12] [i_1] [i_12])) * (((((/* implicit */int) arr_19 [i_1] [i_12] [i_1] [i_1] [i_1] [i_12])) * (((/* implicit */int) var_2))))))));
        }
        for (unsigned char i_13 = 4; i_13 < 13; i_13 += 3) 
        {
            var_38 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_29 [(short)10] [i_13] [i_13] [(unsigned char)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [6]))) : (var_7))), (max((arr_12 [i_1] [i_13] [i_13] [i_1] [i_1] [(unsigned char)2]), (((/* implicit */long long int) var_6)))))) % (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_12)))), ((+(((/* implicit */int) (_Bool)1)))))))));
            var_39 = (~(((/* implicit */int) arr_21 [i_1] [i_13] [8] [(unsigned char)8])));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                var_40 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2080374784)) ? (8624759812203714915LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55288)))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 12; i_15 += 2) 
                {
                    for (short i_16 = 2; i_16 < 10; i_16 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */short) arr_23 [i_1] [i_13] [5ULL]);
                            var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            var_43 = ((/* implicit */_Bool) ((unsigned char) max((arr_13 [i_1 - 3] [i_1] [(unsigned char)8] [i_1]), (var_2))));
            var_44 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) min((var_4), (var_1)))) % (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))));
        }
        for (unsigned long long int i_17 = 3; i_17 < 11; i_17 += 1) 
        {
            var_45 |= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_7)))) * (min((arr_28 [i_1] [i_17] [i_1]), (((/* implicit */unsigned long long int) arr_48 [i_1] [i_1] [(short)10] [i_17] [i_17] [i_17])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_4)))))) : (arr_17 [i_1] [i_1] [i_17] [i_1] [i_17] [i_17]))))));
            var_46 = ((/* implicit */short) ((_Bool) (((+(((/* implicit */int) var_2)))) ^ (((((/* implicit */int) arr_24 [i_1] [i_17] [i_17])) % (((/* implicit */int) var_11)))))));
        }
    }
    var_47 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))))) / ((~(var_7))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_0)))))))));
    var_48 = ((/* implicit */int) var_9);
}
