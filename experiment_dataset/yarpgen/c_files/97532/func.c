/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97532
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((8567100977196005116ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) ((signed char) (unsigned char)160)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)107)) >= (((/* implicit */int) var_4)))))))))));
                    var_11 *= ((/* implicit */long long int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned int i_5 = 4; i_5 < 22; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (unsigned char)96);
                                var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) : (var_1)))));
                                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_15 [i_3] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))))))));
                            }
                        } 
                    } 
                    var_15 = arr_21 [i_3] [i_4] [i_5 + 1] [i_4] [i_5];
                }
            } 
        } 
        arr_22 [(_Bool)1] = ((/* implicit */unsigned int) (+((~(var_0)))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_4)))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_5)))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned long long int) ((((var_1) & (((/* implicit */long long int) var_7)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (2455303319U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        var_18 = ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
            arr_32 [i_3] = ((/* implicit */unsigned long long int) (+((~(arr_11 [11])))));
            arr_33 [i_3] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
            var_19 = ((/* implicit */unsigned long long int) (((+(2455303326U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)46606)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) || (((/* implicit */_Bool) 1839663977U)))))));
        }
    }
    for (unsigned char i_11 = 3; i_11 < 22; i_11 += 4) /* same iter space */
    {
        arr_36 [i_11] = ((/* implicit */int) (((-(max((((/* implicit */unsigned int) (_Bool)1)), (var_9))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_13 [i_11 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119)))))))));
        arr_37 [i_11] = (-(arr_14 [i_11] [i_11] [13]));
        arr_38 [i_11] = ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned long long int) 481346743)) + (arr_13 [i_11]))), (((/* implicit */unsigned long long int) arr_19 [(unsigned char)21] [(_Bool)1] [i_11] [2ULL] [i_11 - 3])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 3; i_12 < 22; i_12 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((2692305836U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))))) % (((10LL) - (((/* implicit */long long int) 2455303319U))))));
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 3) 
                {
                    {
                        arr_49 [i_12 - 3] [i_15] [i_12 - 2] [(signed char)2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) ((((/* implicit */int) arr_43 [i_12] [i_13])) != (((/* implicit */int) arr_45 [(unsigned short)2] [i_15])))))));
                        arr_50 [i_12 - 2] [i_12 - 3] [i_15] [i_15] [i_14] = ((/* implicit */short) arr_48 [i_12] [i_13] [i_14] [i_15]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1602661460U)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (short)-18096)))))));
        var_23 = ((/* implicit */int) var_8);
    }
    var_24 = var_9;
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-115))));
}
