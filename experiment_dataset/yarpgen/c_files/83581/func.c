/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83581
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) 0U)) : (8831624727055456919ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)15)), (var_2)))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((long long int) min((4294967295U), (var_10))))) : (arr_1 [i_0])));
        arr_2 [(signed char)8] [(signed char)8] = ((/* implicit */unsigned int) var_8);
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_13 ^= ((/* implicit */long long int) ((((((long long int) 287359437U)) <= (((/* implicit */long long int) arr_13 [(short)1] [(short)1] [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) 1413122311)))))))) : ((+(((/* implicit */int) (unsigned short)24882))))));
                        var_14 = ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8]))) ^ (287359437U)));
                            var_16 = ((/* implicit */long long int) min((var_16), (var_11)));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0U)) ^ (arr_5 [i_5])));
            }
            arr_26 [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)40676)) & (((/* implicit */int) arr_11 [i_1] [i_5] [i_5] [i_5] [i_5]))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    arr_37 [17U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_11] [i_10] [i_10])) % (var_2)))) ? (((((/* implicit */_Bool) 3908557808U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23320))) : (var_3))) : (((((/* implicit */_Bool) 9615119346654094696ULL)) ? (((/* implicit */long long int) var_5)) : (var_3)))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(var_3))))));
                }
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_19 *= ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [4U] [10U]);
                    var_20 = ((/* implicit */long long int) ((int) arr_31 [i_1] [i_1] [(_Bool)1] [i_12]));
                }
                for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40636)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_10] [i_13] [i_10])) : (((/* implicit */int) ((8810351086980256284LL) > (((/* implicit */long long int) 3829409656U)))))));
                    var_23 |= arr_13 [11LL] [i_9] [i_1];
                    arr_44 [i_1] [i_1] [i_1] [6ULL] = ((/* implicit */unsigned short) arr_17 [i_9] [i_10]);
                }
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 134217728U))));
            }
            for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    arr_49 [i_1] [i_14] [i_14] = ((/* implicit */signed char) var_8);
                    var_26 = ((/* implicit */long long int) 8831624727055456947ULL);
                }
            }
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) 18446744073709551601ULL))));
        }
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
        {
            arr_54 [i_1] [i_1] [i_16] = ((/* implicit */signed char) arr_30 [i_1] [i_1] [i_16]);
            var_28 |= ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_16] [i_1] [i_16] [(short)6]))) : (arr_38 [i_1] [i_16] [i_16] [i_1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 3829409656U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_16])))))))) * (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_1] [i_1] [3U]))));
        }
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            var_29 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)51844)) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_17])) : (((/* implicit */int) ((unsigned char) 8831624727055456919ULL)))))));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_9)) | (max((((/* implicit */long long int) (unsigned short)40653)), (var_1)))));
        }
    }
    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
    {
        var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_18] [i_18] [i_18] [i_18])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_18] [i_18] [i_18]))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (4294967295U)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_18] [14U])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_7 [i_18]))))), (var_9)))));
        arr_59 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_56 [i_18] [i_18] [i_18])) * (var_4)))) ? (((((/* implicit */_Bool) arr_56 [i_18] [i_18] [i_18])) ? (var_8) : (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_56 [i_18] [i_18] [i_18]) : (arr_56 [i_18] [i_18] [i_18]))))));
        arr_60 [i_18] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_18] [i_18] [i_18]) : ((-(465557639U)))))));
    }
    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (-(var_8))))));
}
