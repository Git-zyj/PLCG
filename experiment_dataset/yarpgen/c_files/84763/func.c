/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84763
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */long long int) (_Bool)1);
                    var_18 &= ((/* implicit */short) (!((!((_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_10 [i_3]))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) && (((/* implicit */_Bool) arr_0 [i_3 + 1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_21 += ((/* implicit */_Bool) var_4);
                var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) arr_0 [(short)5]))))));
                var_23 = ((/* implicit */_Bool) min((var_23), ((_Bool)1)));
            }
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_24 -= ((/* implicit */short) arr_9 [i_3 + 1] [i_6]);
                var_25 += ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
            }
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(9146891742971904146ULL))))));
                var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32754)) ? (((((/* implicit */_Bool) (unsigned short)58736)) ? (((/* implicit */int) (unsigned short)6821)) : (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) arr_2 [i_3 + 1] [i_3 + 1] [i_7]))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_28 *= ((/* implicit */unsigned short) ((arr_3 [i_3 + 1]) || (arr_3 [i_3 + 1])));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8] [5LL]))))))));
            }
            arr_24 [i_3] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3 + 1])) >> (((((/* implicit */int) (short)32752)) - (32751)))));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (unsigned short)65529))));
        }
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32741)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_1 [i_9]) : (((/* implicit */int) arr_28 [i_9]))))) ? (((/* implicit */unsigned long long int) -27)) : (var_5)))));
        arr_29 [i_9] &= ((((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)32753)))) >= ((+(((/* implicit */int) arr_25 [i_9])))));
    }
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 4; i_13 < 18; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_10] [i_11] [i_11 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58732)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_3 [i_10]), (arr_4 [i_10])))))) : ((-(((/* implicit */int) (unsigned char)214))))));
                        var_34 = ((/* implicit */int) min((var_34), (max((((((/* implicit */_Bool) arr_37 [i_10] [i_11] [i_13 + 1] [i_13] [i_10] [i_13 + 1])) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_37 [(_Bool)1] [i_11] [(_Bool)1] [(unsigned char)0] [i_13 - 2] [i_13 - 1]))))));
                        arr_40 [6] [i_11] [i_12] [i_13] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)63067)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((long long int) (short)63)))), (((/* implicit */long long int) var_15))));
                    }
                    var_35 |= arr_4 [i_11];
                }
            } 
        } 
    } 
    var_36 -= ((/* implicit */unsigned int) var_16);
}
