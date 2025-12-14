/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66304
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65527)) * (((/* implicit */int) (signed char)13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967040U)))))));
        arr_2 [2U] = ((/* implicit */long long int) arr_0 [i_0 - 3]);
        arr_3 [i_0 + 2] = ((/* implicit */int) var_0);
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(1085121868730078057LL))))));
                    arr_12 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_2] [i_2])) & (8505411823581894290LL)))) & (70368744177663ULL)))));
                    var_17 = ((/* implicit */short) max((arr_9 [i_1 + 2] [i_1 + 1] [i_2 + 1]), (arr_9 [i_1] [i_1 - 1] [i_2 + 1])));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_1 [(short)14] [i_2]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 6; i_6 += 3) 
                {
                    {
                        arr_20 [i_1] [i_4 + 2] [i_4 + 2] [i_6] [i_6 + 4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_0))));
                        var_19 = ((/* implicit */signed char) max((arr_0 [i_1 + 2]), (((arr_11 [i_5] [i_5]) % (arr_11 [i_5] [i_5])))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1] [4ULL] [i_5] [i_6 + 3]))) - (arr_0 [i_1]))))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) var_6);
    }
    for (long long int i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        arr_23 [(unsigned char)1] [13ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))))))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((((/* implicit */_Bool) arr_22 [i_7] [(unsigned char)7])) ? (arr_0 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0ULL] [i_7 - 1]))))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)179)) * (((/* implicit */int) (short)21650))))))) >> ((((+(((/* implicit */int) (unsigned short)5266)))) - (5246))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            for (unsigned char i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_1 [(short)2] [(short)2]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) > (((/* implicit */int) arr_32 [i_7] [i_7]))));
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7]))));
                    }
                    var_27 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_30 [i_9 - 3] [i_8 - 1] [i_9])), (arr_29 [i_9 - 3] [i_8 - 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7 + 1] [i_7 - 1] [(unsigned char)2])))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_22 [i_7] [i_7]), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */int) (unsigned short)23392)) : (((/* implicit */int) var_1)))) | (((/* implicit */int) var_8)))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_9))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)3)), ((+(((/* implicit */int) max((var_12), ((short)-25561))))))));
}
