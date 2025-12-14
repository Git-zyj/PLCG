/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9090
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
    var_16 = ((/* implicit */_Bool) var_13);
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max(((+(max((-4473856007684590581LL), (((/* implicit */long long int) var_14)))))), (((/* implicit */long long int) (unsigned short)3454))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [14ULL] [i_1 - 1] [i_3]))))))))));
                        arr_12 [(unsigned char)23] [(unsigned char)14] [i_1] [i_3] = ((/* implicit */unsigned int) max((((var_14) ? (var_9) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_24 [i_4] [(unsigned short)5] [i_6] |= ((/* implicit */unsigned long long int) -1892288863);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [i_4] [7ULL] [i_6] [i_7] [(unsigned short)9] [i_8] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])))))));
                                arr_30 [i_8] [i_7] [i_5] [i_5] [i_7] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -385624988))))) >> (((((unsigned long long int) (unsigned short)28979)) - (28951ULL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_10))) : (max((((arr_20 [i_6] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_23 [i_5] [11LL] [10ULL] [i_5]))))));
                                var_20 ^= ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_2)))), ((~(-389963573)))));
                                arr_31 [i_4] [i_4] [i_4] [i_7] [i_6] = ((/* implicit */int) ((unsigned long long int) var_10));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned char) arr_9 [i_5] [i_4] [i_5 - 1] [i_5]);
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        arr_34 [i_9] [(unsigned char)11] [i_6] [i_5] [i_4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (min((1816293422296919352LL), (((/* implicit */long long int) var_4)))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (1325489865U))) ? (((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) var_12)))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_4] [i_9])) : (((/* implicit */int) arr_21 [i_9]))))), (var_5)))) ? (((/* implicit */long long int) 1892288863)) : (max((((/* implicit */long long int) var_11)), (arr_11 [i_4] [i_4] [16ULL] [i_5 + 2] [i_6]))))))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_4);
                            arr_41 [i_6] [i_5 + 2] = ((/* implicit */unsigned long long int) ((arr_27 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_6]) / (arr_27 [i_10 - 1] [i_10 - 1] [i_10] [i_10 + 1] [i_6])));
                        }
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            arr_45 [(unsigned char)11] [i_5 + 2] [i_6] [10LL] [i_5 + 2] = ((/* implicit */long long int) min(((-(((unsigned long long int) var_9)))), (min((9858601964250248454ULL), (2876283189198743308ULL)))));
                            arr_46 [i_4] [i_4] [i_4] [21ULL] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_3))))))) | (max((((/* implicit */unsigned long long int) arr_9 [i_10 + 1] [i_4] [i_4] [i_5 + 2])), ((+(16270832549733842265ULL))))));
                        }
                        arr_47 [14LL] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */_Bool) arr_37 [i_10] [i_5 - 1] [i_4]);
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) min((var_24), ((-((+(min((((/* implicit */long long int) arr_44 [i_4] [10ULL] [(_Bool)1])), (arr_25 [16] [16])))))))));
        arr_48 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2146435072ULL)) || (((/* implicit */_Bool) arr_44 [i_4] [i_4] [i_4]))))) / (((/* implicit */int) ((1328794099199181452ULL) <= (arr_18 [i_4] [i_4] [i_4]))))));
    }
    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) var_1))))))));
        arr_51 [11ULL] = ((/* implicit */int) var_8);
        arr_52 [i_13] = ((/* implicit */unsigned char) var_6);
    }
}
