/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99104
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
    var_10 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) max((max((5240326758905302991ULL), (5240326758905302982ULL))), (((((unsigned long long int) var_2)) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_6 [i_0] [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [18] = var_4;
                                var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((1), (((/* implicit */int) var_0)))), ((-(-2147483639)))))) ? (31664924U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_4] [i_4] [i_3] [i_0] [(_Bool)1] [i_0]))) ? (((/* implicit */int) min((((/* implicit */short) arr_11 [i_1])), (arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [(unsigned char)16] [i_0])))) : (((/* implicit */int) arr_3 [i_3])))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [(signed char)9] [i_1 + 1] [i_2 + 2])))) > (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2 - 1])) ? (arr_6 [i_1 + 2] [i_1 - 2] [i_2 + 1]) : (arr_6 [i_0] [i_1 - 1] [i_2 + 1]))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_13 = ((/* implicit */unsigned long long int) max(((~(max((var_8), (((/* implicit */long long int) 3131849408U)))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_3)))), (((((/* implicit */int) var_7)) / (var_5))))))));
            var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(var_6)))), (arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_5] [i_0])) : ((~(((/* implicit */int) (unsigned char)80))))))) : (min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_0)), (arr_17 [i_5])))))));
            arr_18 [i_5] = ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_0] [i_5]))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_5])) ? (arr_1 [(signed char)19]) : (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) arr_12 [17] [i_5] [i_5] [i_5] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned char)241)) : (-403459138))));
        }
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (((-(max((var_2), (((/* implicit */long long int) var_9)))))) & (((/* implicit */long long int) ((/* implicit */int) max(((short)-14823), (((/* implicit */short) var_6))))))));
    }
    for (short i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        var_15 = ((/* implicit */int) 1163117887U);
        var_16 = ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)-1)));
        var_17 -= ((/* implicit */short) var_4);
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    var_18 = ((/* implicit */signed char) var_2);
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) ((var_5) != (((/* implicit */int) (signed char)-4))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7 + 1])) ? (((/* implicit */int) arr_0 [i_7 + 1])) : (((/* implicit */int) arr_0 [i_7 + 1])))))));
                    }
                }
                for (unsigned short i_11 = 1; i_11 < 14; i_11 += 3) 
                {
                    arr_36 [(short)2] [(short)2] [12U] |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_7 + 1] [i_7 + 1])) >= (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_7] [i_7 + 1]), (arr_16 [i_7 + 1] [i_7 + 1]))))) : (((((/* implicit */_Bool) arr_16 [i_7] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7 + 1] [i_7 + 1]))) : (11076466574178365638ULL)))));
                    arr_37 [8] &= ((int) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_7] [i_7 + 1])) ? (7829532560814679561LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 + 1] [i_8] [i_11 - 1]))))));
                    var_21 -= ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) arr_25 [i_7 + 1])), ((~(5390168237766058021LL))))));
                    arr_38 [i_7] [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)-12))) > (min((-745582074), (((/* implicit */int) (_Bool)1))))));
                }
                /* LoopSeq 4 */
                for (short i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_46 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_8] [i_12] [i_13] [i_14])) ? (((((/* implicit */_Bool) 3851186889U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_43 [i_12])))) : ((~(arr_39 [i_7 + 1] [i_7 + 1] [i_7] [i_7]))))) : (((/* implicit */int) var_4))));
                                arr_47 [i_7] [i_7] [i_12] [i_13] [(_Bool)1] [i_14] [i_14] = ((((((/* implicit */int) ((short) arr_45 [i_7] [11U] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7])) || (((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))))) - (1))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? ((-(((/* implicit */int) arr_5 [i_7 + 1] [i_7 + 1] [i_7])))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_9 [i_7 + 1])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_43 [i_8])) : (((/* implicit */int) arr_21 [i_7] [i_8]))))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3131849411U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)15800))) >= (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1])))))));
                }
                /* vectorizable */
                for (short i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    arr_52 [i_15] [i_7] [i_15] = ((/* implicit */unsigned char) ((long long int) arr_25 [i_7 + 1]));
                    arr_53 [i_7] [i_7] [i_15] = ((/* implicit */int) arr_29 [(short)9] [i_8] [(short)9]);
                }
                for (short i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
                {
                    var_23 ^= ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_3)), (var_2))))) | (((/* implicit */int) ((unsigned char) var_4))));
                    arr_57 [i_7] [(unsigned char)12] [i_8] [i_16] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -2073968237)) ? (((/* implicit */int) (short)-3270)) : (((/* implicit */int) (signed char)120))))), (((((/* implicit */_Bool) arr_5 [i_7] [i_8] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))))));
                    var_24 += ((/* implicit */unsigned char) (-(min((arr_6 [i_7 + 1] [i_7] [i_7 + 1]), (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                    var_25 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7 + 1] [i_8] [i_7]))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_8] [i_8] [i_16] [i_8]))) : (arr_56 [i_7] [i_8] [i_8] [3]))))));
                }
                for (int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    var_26 = ((/* implicit */unsigned char) min((max((max((((/* implicit */long long int) arr_1 [i_7 + 1])), (var_2))), (arr_17 [i_7 + 1]))), (max(((~(6401303454190205134LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))));
                    var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) min((arr_12 [i_7] [i_7 + 1] [i_8] [(unsigned char)14] [i_17] [i_17] [i_17]), (((/* implicit */short) (signed char)68)))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) var_9);
}
