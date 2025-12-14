/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8274
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(var_10)))) ? (1809351303714789952ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (1809351303714789961ULL)))) ? (((/* implicit */long long int) (+(arr_3 [i_2 + 1] [i_1] [i_2 - 2])))) : (min((max((-1LL), (arr_6 [i_0]))), (((/* implicit */long long int) max((arr_3 [i_0] [i_1] [i_0]), (31571402))))))));
                            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(13499427823331736402ULL))))))));
                            var_16 -= ((/* implicit */unsigned short) arr_6 [i_0]);
                            arr_9 [i_3] [i_1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [21ULL] [14] [i_2] [i_3])) ? (var_5) : (((/* implicit */int) (unsigned char)57)))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_2 + 2])) - (53304))))))));
                            var_17 = ((/* implicit */long long int) (((-((+(1809351303714789961ULL))))) ^ (min((((/* implicit */unsigned long long int) var_12)), (min((1809351303714789965ULL), (16637392769994761660ULL)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((arr_2 [(_Bool)1]) % (31571400)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 1) 
    {
        var_19 = ((arr_5 [i_4 - 1] [5ULL] [5ULL] [i_4 + 1]) + (((/* implicit */long long int) arr_3 [i_4 - 2] [i_4 - 3] [2LL])));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4 - 2] [i_4 - 3])) / (arr_1 [i_4 - 3])));
            var_21 = ((((/* implicit */_Bool) 16637392769994761662ULL)) ? (((((/* implicit */unsigned long long int) 1332482661)) ^ (16637392769994761663ULL))) : (((/* implicit */unsigned long long int) (+(arr_6 [i_5])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) ((arr_11 [i_4 - 1]) <= (((/* implicit */int) arr_15 [i_4] [i_4 - 3] [i_4 - 3]))));
                arr_16 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_12 [i_4] [i_4 - 1] [i_4])))));
            }
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) arr_14 [i_4] [i_5] [i_7]);
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_5] [i_8] [i_9]))))) ? (((int) arr_7 [i_4 - 1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (arr_2 [5])))));
                            var_25 = (-(var_10));
                            var_26 = ((((/* implicit */_Bool) (-(var_4)))) ? (((((/* implicit */_Bool) arr_19 [i_7])) ? (var_9) : (-622513178))) : (arr_21 [i_4 - 3] [i_5] [i_7] [i_8 + 1] [i_8 + 1] [i_9]));
                            var_27 = ((/* implicit */short) ((arr_3 [i_4 - 2] [i_4 - 1] [i_4 - 3]) ^ (var_7)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_10 = 3; i_10 < 16; i_10 += 2) 
                {
                    var_28 = ((((((/* implicit */_Bool) 31571402)) ? (((/* implicit */long long int) var_8)) : (arr_14 [i_4 - 3] [i_4 - 3] [i_7]))) - (((((/* implicit */long long int) 359159969)) - (arr_8 [i_4] [i_4] [i_5] [i_4] [20U] [i_10 + 1]))));
                    var_29 = ((/* implicit */int) 1884913095U);
                    var_30 = arr_23 [i_7] [i_10];
                }
            }
        }
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_7 [i_4 + 1]))));
        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 3; i_12 < 20; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                {
                    arr_37 [i_11] [i_12] [(short)1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) (short)-18321)) : (var_2)))) ? (((((/* implicit */_Bool) -2147483642)) ? (12534690481421621115ULL) : (((/* implicit */unsigned long long int) arr_8 [i_13] [4LL] [i_13] [2U] [i_11] [i_12])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12534690481421621115ULL)) || (((/* implicit */_Bool) var_7))))))));
                    arr_38 [i_11] [i_12] [i_13] [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1634272443)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_13]))))));
                    arr_39 [(unsigned short)17] [i_12] [i_12] [(unsigned short)17] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_11] [i_12] [i_11])) ? (arr_31 [14ULL] [i_12] [i_13]) : (((/* implicit */unsigned long long int) var_3)))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_11] [i_11])) ? (((/* implicit */long long int) 63897418)) : (((((/* implicit */_Bool) 7U)) ? (var_12) : (((/* implicit */long long int) var_4))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (unsigned char i_15 = 4; i_15 < 20; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    {
                        var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_14] [i_15] [i_16]))) : (var_12))) & (((/* implicit */long long int) arr_30 [i_14]))));
                        arr_47 [i_11] [i_14] [i_15] [i_16] [i_16] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_11] [i_15 + 3] [i_11] [i_16])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (66060288) : (((/* implicit */int) arr_44 [i_11] [i_14] [i_15]))))) : (arr_31 [i_15 - 1] [i_15 - 1] [i_15 - 2])));
                        var_35 = ((/* implicit */unsigned short) arr_35 [i_15 + 1] [i_14]);
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_11] [i_15 + 2] [(unsigned short)8])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_42 [i_11] [i_15 - 4] [i_15])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
        {
            arr_50 [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (13306460878494813462ULL) : (arr_42 [i_11] [i_17] [i_17]))))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                for (long long int i_19 = 2; i_19 < 19; i_19 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                        {
                            var_37 = ((/* implicit */long long int) (~(((/* implicit */int) (short)32738))));
                            var_38 = ((/* implicit */int) 18446744073709551611ULL);
                            var_39 = ((/* implicit */unsigned long long int) (+(((var_3) / (arr_48 [i_18] [i_18])))));
                            var_40 = ((/* implicit */long long int) 31571377);
                        }
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) arr_7 [19ULL])))))));
                    }
                } 
            } 
        }
    }
    var_42 = ((((/* implicit */_Bool) ((min((var_3), (var_8))) & (((/* implicit */int) var_1))))) ? ((~(((var_8) - (var_3))))) : (((((/* implicit */_Bool) min((var_8), (var_10)))) ? (var_2) : (var_8))));
    var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
}
