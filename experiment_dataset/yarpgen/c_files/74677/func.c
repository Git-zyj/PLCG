/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74677
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
    var_16 = ((/* implicit */short) min((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned char)241)) & (((/* implicit */int) (unsigned char)235))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43878))) < ((+(min((var_3), (((/* implicit */long long int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)232)), (4294967295U)));
        var_18 *= ((/* implicit */unsigned int) (-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))) == (max((((((/* implicit */int) (short)1341)) / (((/* implicit */int) (unsigned char)84)))), (((((/* implicit */int) arr_1 [i_0] [(unsigned short)16])) & (((/* implicit */int) var_14)))))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) 4294967276U);
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [(unsigned char)8] [i_3] = ((/* implicit */unsigned short) ((6909636356175109396ULL) + (((/* implicit */unsigned long long int) -1013629959))));
                        var_21 = ((/* implicit */unsigned long long int) ((((arr_4 [i_0 - 1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >> (((((arr_7 [(unsigned char)15] [i_0 + 1] [i_2 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))) - (4085627223U)))));
                    }
                } 
            } 
            arr_14 [i_0] [15ULL] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (4177752638U)))) ? (((/* implicit */int) var_0)) : (max((((/* implicit */int) (short)-19671)), (arr_3 [i_0 + 1] [18])))))) == (min((min((6961063539958839037ULL), (arr_11 [i_0 - 1] [i_0] [i_1]))), (min((((/* implicit */unsigned long long int) (signed char)-50)), (18446744073709551591ULL))))));
        }
        for (short i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_0] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_18 [i_4] [i_4 + 1] [i_4 + 2])), (arr_15 [i_0] [i_4 - 1])))), (min((arr_16 [i_4 + 1]), (arr_16 [i_4 + 3])))));
                var_22 = ((/* implicit */_Bool) var_13);
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [(unsigned short)2])) ? (((/* implicit */unsigned long long int) arr_23 [i_0 - 1] [(short)0])) : (10868173142546018233ULL)));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 471494672U)) ? (-1013629959) : (((/* implicit */int) (unsigned short)16320))));
                    var_25 = (!(((/* implicit */_Bool) 7816616567493803288ULL)));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17566)) == (((/* implicit */int) var_12)))))));
                    var_27 = ((/* implicit */short) ((var_15) >= (arr_12 [i_0 - 1] [(unsigned char)4] [i_0 + 1] [i_6])));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = (~(arr_23 [i_0 + 1] [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        arr_31 [i_9] [i_0] [16ULL] [17ULL] [i_0] [i_0] = ((/* implicit */int) (~(3669080231117524317ULL)));
                        var_29 = ((/* implicit */signed char) (((-(var_2))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-4744)))))));
                        arr_32 [i_0] [i_4 + 1] [(unsigned short)2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3961347780291044856ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_0 + 1] [i_4 + 2]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        arr_35 [18LL] [i_4] [i_6] [i_8] [i_10] &= ((/* implicit */unsigned long long int) var_13);
                        arr_36 [(_Bool)0] [(_Bool)0] [i_6] [i_8] [i_0] [2] = ((/* implicit */signed char) arr_7 [i_0] [(_Bool)1] [i_6]);
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 + 3] [i_0 - 1]))) / (var_13)));
                    var_31 = ((/* implicit */int) (((_Bool)1) ? ((+(14333336875111668499ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))));
                }
                for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    arr_40 [i_6] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    arr_41 [15ULL] [i_4 + 1] [i_6] [i_0] [i_11] [i_6] = ((/* implicit */unsigned int) ((arr_3 [i_0 - 1] [i_4 + 3]) - (arr_3 [i_0 + 1] [i_4 + 2])));
                    var_32 = ((/* implicit */unsigned int) ((long long int) var_2));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_4 + 2] [i_4])) + (((/* implicit */int) (unsigned char)3))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [20U] [i_4] [i_6] [i_12] [i_12] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_23 [i_4 + 3] [10LL])) >= ((-9223372036854775807LL - 1LL))));
                    var_34 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)109))));
                    var_35 = 38ULL;
                    arr_45 [i_0] [i_6] [i_0] [(short)12] [i_6] = ((/* implicit */unsigned long long int) ((-3159530617919285956LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))));
                }
                arr_46 [i_0 + 1] [(signed char)18] [i_0] [18LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (-2128640991963999531LL))) : (((/* implicit */long long int) (+(2096640U))))));
                var_36 = ((/* implicit */_Bool) (unsigned char)125);
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_57 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_42 [i_0 - 1])), (14333336875111668499ULL))) < (min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_14])), (6636595219613775024ULL)))));
                            var_37 = min((((/* implicit */long long int) arr_37 [5LL] [i_4 + 2] [1ULL])), (-2128640991963999540LL));
                        }
                    } 
                } 
            } 
        }
    }
}
