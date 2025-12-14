/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74548
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
    var_15 = ((/* implicit */unsigned char) var_7);
    var_16 *= ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned short) var_13);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (max((799054278U), (var_3)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_5))))))));
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) -2366931378585845024LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_16 [i_5] [i_2] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned int) var_12)))));
                        }
                    } 
                } 
                arr_17 [i_3] [i_1] = ((/* implicit */unsigned char) var_9);
                arr_18 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [10LL] [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_14))));
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7 - 1] [i_2] [(unsigned short)4])) ? (var_11) : (var_3))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127)))))));
                            arr_27 [i_1] [i_2] [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_25 [i_1] [i_1] [i_2]) : (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        }
        var_23 |= ((/* implicit */short) min((15636963215925157624ULL), (((/* implicit */unsigned long long int) 56))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_4)))) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_1] [(_Bool)1] [i_1])))))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), ((+(867225823520339740ULL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) var_2);
            var_27 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1]))));
            var_28 = ((/* implicit */unsigned char) var_3);
            var_29 |= ((/* implicit */int) var_13);
        }
    }
    for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
    {
        var_30 &= ((/* implicit */unsigned long long int) var_0);
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (unsigned short)15318))));
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            {
                arr_36 [i_12] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_11]))))) ? (((((/* implicit */int) arr_33 [i_11])) / (((/* implicit */int) arr_33 [i_12])))) : (((((/* implicit */int) arr_32 [i_11])) % (((/* implicit */int) (_Bool)1))))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) arr_32 [i_11]))))))));
            }
        } 
    } 
}
