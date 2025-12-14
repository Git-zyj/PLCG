/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96021
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
    var_20 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [(signed char)3]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [13ULL] [13ULL] [i_2] [i_3] [13ULL] = ((((/* implicit */int) arr_2 [i_0])) + (arr_9 [i_2] [i_1] [i_1] [i_1] [2ULL] [(_Bool)1]));
                        arr_14 [i_0] [i_1] [(signed char)10] [4ULL] = ((unsigned long long int) (~(1568719770U)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_23 [i_6] [i_0] [i_0] = ((/* implicit */short) ((arr_19 [i_6] [i_5 + 1] [i_4]) ? (((unsigned long long int) 422431028U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))));
                        arr_24 [i_6] = ((/* implicit */unsigned char) arr_2 [i_6]);
                        var_22 ^= ((/* implicit */unsigned long long int) var_9);
                        arr_25 [(signed char)9] [2LL] [i_4] [i_4] [(signed char)9] = ((/* implicit */unsigned long long int) (short)-22234);
                    }
                } 
            } 
            arr_26 [(short)12] [(short)12] [(short)12] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_4]))));
            var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_29 [i_0] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_10 [i_7] [i_0] [(_Bool)0] [i_0])) : ((+(((/* implicit */int) (signed char)-19))))))) ? (((((/* implicit */_Bool) (unsigned short)23824)) ? (((/* implicit */int) (unsigned short)23824)) : (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_7])) : (((/* implicit */int) var_9)))))) : (min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_17 [i_0] [(signed char)16] [(signed char)18])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_7])))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)41716))))))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 16; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_8 - 1] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) 7728067694457718238ULL)))));
                        arr_35 [(signed char)19] [(signed char)19] [i_8] [i_8 - 2] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23828)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) >= (-4949238606742036071LL))))))) ? (((((/* implicit */_Bool) 4968491867166417403ULL)) ? ((-(((/* implicit */int) var_4)))) : (((int) (_Bool)1)))) : (((/* implicit */int) arr_17 [i_8 + 3] [i_8 + 1] [i_8 + 2]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_31 [(signed char)15]))))));
                            arr_45 [0] [i_11] [i_10] [i_10] [(unsigned char)10] = ((/* implicit */short) 9092914788524330273ULL);
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned short)30720))))));
    }
}
