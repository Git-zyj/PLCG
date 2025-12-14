/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64294
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
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((unsigned char) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) 262016)));
        var_18 = ((/* implicit */signed char) ((unsigned short) ((long long int) (_Bool)0)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)9] [i_0]))) : (var_14)))) ? (((((/* implicit */_Bool) -262016)) ? (992U) : (((/* implicit */unsigned int) -262012)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) 7ULL)));
                                arr_12 [(short)7] [i_3] [(short)8] [(short)16] [i_1 - 1] [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) 15ULL)));
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (arr_3 [i_4] [i_1 - 1] [i_0])))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_4] [i_0]))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_4))) : (((arr_3 [18ULL] [(unsigned short)2] [i_4]) - (var_10)))));
                            }
                        } 
                    } 
                    arr_13 [17ULL] [i_1 + 1] = ((/* implicit */unsigned short) ((short) ((long long int) var_3)));
                    arr_14 [i_0] [i_0] [i_1 - 1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [7LL] [(_Bool)1] [i_1 - 1] [i_0])) : (((/* implicit */int) var_13))))) % (((long long int) var_11))));
                    arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_2]))))));
                }
            } 
        } 
        arr_16 [15ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36011204832919552ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((790964264894083353LL) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)3] [(unsigned char)2] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (2409510314U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(short)18] [(unsigned short)14] [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_4 [i_0] [(unsigned char)12]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)13248)))))) & (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 - 2] [i_0]))) : (arr_3 [(unsigned char)3] [i_5] [i_0])))));
                    arr_25 [12ULL] [(short)16] [10ULL] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)20)) >= (((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_30 [i_7] [11U] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))));
                                arr_31 [(unsigned short)17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)20))) ? (((/* implicit */int) ((unsigned short) arr_29 [i_0] [i_5] [i_7]))) : (((/* implicit */int) ((short) (unsigned short)48475)))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4611686018427322368ULL)))) : (((((/* implicit */_Bool) arr_21 [(_Bool)1] [9U] [i_0] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6]))) : (var_3)))));
                                var_25 -= ((/* implicit */unsigned short) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) arr_2 [19U] [(unsigned char)10])) : (((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) (_Bool)0))))) | (((((/* implicit */unsigned long long int) ((long long int) 17315588794025625570ULL))) % (((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (unsigned short i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            {
                var_27 = ((/* implicit */short) ((unsigned char) 14072698933209055390ULL));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 2; i_12 < 21; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            {
                                var_28 = ((_Bool) ((((/* implicit */int) (short)-32190)) | (((/* implicit */int) (_Bool)1))));
                                var_29 |= ((/* implicit */short) ((_Bool) ((signed char) arr_40 [i_9] [15LL] [i_11] [(unsigned char)15])));
                            }
                        } 
                    } 
                    arr_45 [i_11] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2428))) : (17611572796522521896ULL))));
                }
                /* vectorizable */
                for (short i_14 = 2; i_14 < 22; i_14 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9] [i_10 + 1] [i_14]))) & (var_5)))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) ((unsigned int) ((long long int) arr_47 [i_14] [(short)15] [0LL])));
                                var_32 = ((((arr_40 [i_9] [i_10] [i_14] [18ULL]) > (var_3))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) ((unsigned char) (unsigned char)36))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
