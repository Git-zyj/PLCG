/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76590
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((18048713144544163902ULL), (398030929165387713ULL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 4; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                var_18 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_2] [2ULL])))) / (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (signed char)-118))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 + 4] [i_3 - 1])) ? (((long long int) arr_1 [i_1] [i_2 - 3])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1] [i_2 - 3])))));
            }
            /* LoopNest 3 */
            for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_2] [i_4] [i_5 - 1] [i_4] [i_6]))));
                            var_21 *= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_1])))));
                            var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [10U] [i_6 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20953)) || (((/* implicit */_Bool) 65535LL))))) : (((/* implicit */int) ((signed char) arr_4 [i_1])))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) arr_12 [4U] [4U])) ^ (((/* implicit */int) arr_15 [i_2 - 1] [i_4 + 4] [i_5 + 2] [i_6 + 1] [i_6] [i_6] [i_6 - 1])))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_9 [i_1]))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_7 - 2] [i_1] [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) == (((/* implicit */int) arr_3 [i_7]))))))));
            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) arr_3 [i_7 - 2])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_7] [i_1]))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (arr_18 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 - 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7 + 2])))))));
        }
        for (int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_27 = ((/* implicit */signed char) arr_14 [i_1] [i_1] [(_Bool)1] [(_Bool)1]);
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [14ULL] [i_8]))))) : (((((/* implicit */_Bool) 18048713144544163913ULL)) ? (((/* implicit */unsigned long long int) 8337566949215849548LL)) : (4390959901674852835ULL))))))));
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_25 [i_1] [i_8]))));
                var_30 = ((/* implicit */unsigned short) ((signed char) arr_22 [i_1]));
            }
            for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_23 [i_10] [i_8] [i_8] [i_1]))));
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (+(12619943599144002748ULL))))));
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23003))) % (4390959901674852861ULL)))) ? (((arr_2 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(short)2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_10])))))))));
                var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_8]))));
            }
            for (long long int i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_11] [i_11 + 1])) ? (arr_23 [i_11] [i_11] [i_11 + 1] [i_11 - 1]) : (arr_23 [i_11] [i_11] [i_11 - 2] [i_11 - 1]))))));
                var_36 = (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_20 [i_1] [i_8] [i_11 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)14] [(unsigned short)14] [i_11 - 1] [6ULL] [i_11] [i_11] [i_11]))))));
            }
            /* LoopNest 2 */
            for (signed char i_12 = 1; i_12 < 16; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    {
                        var_37 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_20 [(unsigned short)16] [16] [i_12])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13] [i_1] [i_8] [i_1])))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [7] [i_8] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [(_Bool)1] [i_8] [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_12] [i_12])) ? (arr_5 [i_1]) : (((/* implicit */long long int) arr_2 [i_1])))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_1] [0LL] [8LL])))))));
                    }
                } 
            } 
            var_39 = (~((~(arr_34 [11U] [15] [i_1] [i_1] [17ULL] [i_1]))));
        }
        var_40 = ((/* implicit */int) min((var_40), (((((/* implicit */int) arr_0 [i_1] [i_1])) << (((((((/* implicit */_Bool) (signed char)-59)) ? (4390959901674852835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))))) - (4390959901674852835ULL)))))));
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            for (unsigned int i_15 = 3; i_15 < 17; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            var_41 &= ((/* implicit */unsigned char) ((unsigned int) ((short) arr_14 [i_1] [i_1] [i_1] [i_1])));
                            var_42 = ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_43 [i_1] [i_14] [i_1] [i_1] [i_17]))));
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (18048713144544163902ULL)));
                            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_15 - 3] [i_15] [i_15 + 1] [(unsigned char)12] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_15 + 1] [i_15] [i_15 - 1] [i_16] [i_16]))) : (arr_2 [i_15 - 1]))))));
                        }
                        for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            var_45 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)170)))) ? (((((/* implicit */_Bool) arr_17 [i_18] [i_18])) ? (((/* implicit */int) arr_36 [i_16])) : (((/* implicit */int) arr_29 [i_1] [i_14] [i_16] [i_18])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [9])))))));
                            var_46 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) ((_Bool) 14055784172034698745ULL)))));
                            var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [i_15 + 1] [i_15] [i_14]))));
                            var_48 = ((/* implicit */unsigned int) arr_46 [i_1] [i_1] [i_15] [i_16] [i_18]);
                        }
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 398030929165387703ULL)) ? (((/* implicit */unsigned long long int) 1909475413)) : (arr_28 [i_1] [i_14] [i_14] [i_14])));
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [8ULL])) ? (((/* implicit */long long int) arr_45 [i_16] [i_15] [i_15] [(unsigned char)10] [i_1])) : (arr_20 [i_15] [i_14] [i_15])))) ? ((~(arr_47 [8LL] [i_14] [(unsigned short)12] [(unsigned short)12] [8LL]))) : (((/* implicit */int) arr_32 [i_15 - 3] [i_15] [i_15 - 1]))));
                        var_51 |= ((/* implicit */unsigned short) ((int) ((arr_5 [i_14]) / (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_1] [i_16] [i_15] [i_16] [i_16]))))));
                    }
                } 
            } 
        } 
        var_52 = ((((/* implicit */_Bool) ((arr_22 [0]) >> (((arr_14 [i_1] [i_1] [i_1] [i_1]) - (366318628U)))))) ? ((~(((/* implicit */int) arr_39 [(signed char)10] [(signed char)10] [i_1] [i_1])))) : (((/* implicit */int) ((unsigned short) 1113796291))));
        var_53 = ((signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) : (arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (unsigned char i_19 = 2; i_19 < 23; i_19 += 1) 
    {
        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_19 + 1] [i_19 - 2])) ? ((-(((/* implicit */int) arr_51 [i_19])))) : (((/* implicit */int) arr_51 [i_19]))))) ? ((+(arr_2 [i_19]))) : (max((((((/* implicit */_Bool) arr_52 [i_19 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_19] [i_19]))) : (arr_2 [i_19]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [13] [(short)7])) ? (((/* implicit */int) arr_3 [i_19])) : (((/* implicit */int) arr_0 [i_19] [i_19])))))))));
        var_55 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_19 - 1])) ? (((/* implicit */int) arr_3 [i_19 - 2])) : (((/* implicit */int) arr_3 [i_19 - 2]))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_19 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_19 - 2])) ? (((/* implicit */int) arr_3 [i_19 - 2])) : (((/* implicit */int) arr_3 [i_19 + 1]))))));
    }
    var_56 = ((/* implicit */long long int) ((unsigned char) ((unsigned short) ((signed char) var_14))));
    var_57 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (var_4)))) ? (min((var_5), (((/* implicit */unsigned long long int) var_13)))) : (min((((/* implicit */unsigned long long int) (short)-14)), (4390959901674852841ULL))))), (((/* implicit */unsigned long long int) var_8))));
}
