/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58907
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) (short)32765);
        var_13 = ((/* implicit */int) ((((var_6) % (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)3)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) arr_4 [i_2 - 1]);
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_2))));
                        var_16 = ((/* implicit */long long int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228)))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned short) ((((30U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_3 [i_1] [i_2])))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >= (((/* implicit */int) arr_20 [i_1] [16] [i_5] [i_7]))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_6] [16ULL])) ? (arr_18 [i_1] [9] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))));
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_7] [i_5 + 1] [i_7]))))) ? (((/* implicit */int) arr_19 [i_1] [i_5 + 1] [i_6])) : (((/* implicit */int) arr_19 [i_7] [i_5 + 1] [i_5]))));
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5 + 1])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((unsigned int) var_7));
                            var_23 = ((/* implicit */unsigned int) (~(arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])));
                            var_24 = ((/* implicit */unsigned char) arr_21 [i_5] [i_5] [i_8] [i_5] [i_5] [i_5]);
                            var_25 = ((/* implicit */unsigned int) var_0);
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_1] [i_5 + 1] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)3)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 30U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)69))) : (-6694080632976169227LL)))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((var_7) ? (arr_18 [i_1] [i_11] [i_11]) : (arr_18 [i_1] [i_11] [i_11])))));
            var_28 -= ((/* implicit */short) var_7);
        }
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) (((+((~(arr_22 [i_12] [i_12] [i_12] [i_1]))))) >= (((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) var_2)), (arr_1 [i_1] [i_12]))), (((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_12]))))))));
            var_30 ^= ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_8))));
        var_32 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((arr_29 [i_1] [2LL] [i_1]), (((/* implicit */short) (signed char)-39))))))) | (var_10)));
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_11))));
    var_34 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_5)), ((+(var_3))))) - (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
