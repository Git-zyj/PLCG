/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5710
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((arr_6 [i_0]) >> (((var_4) - (3025570722U))))))) ? (((/* implicit */unsigned long long int) ((long long int) 666653811U))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_1]))) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) == (9097638840003491842LL))));
                                arr_12 [i_1] [i_2] [i_2] [i_1] [(signed char)11] = ((/* implicit */int) ((-3490729069099790624LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
                                var_13 = ((/* implicit */unsigned char) ((signed char) ((short) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_0))))));
                                arr_13 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [(signed char)14] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_11 [i_0] [i_2] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_2] [i_2] [i_3] [i_3])))) : (((unsigned int) (unsigned char)239))))) : (((unsigned long long int) (unsigned char)229))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((int) ((unsigned char) var_5)));
                        arr_18 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)5)) ? (6397589750699728446LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))));
                        arr_19 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)103))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [i_5])) && (((/* implicit */_Bool) (signed char)1)))) || (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) 3103259597863167816LL))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_10 [12] [i_5]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_23 [i_2] [(unsigned char)11] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_3 [i_2]));
                            arr_24 [i_0] [(signed char)0] [i_0] [(signed char)0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))) < (arr_6 [i_6])));
                            arr_25 [i_2] [i_2] [(_Bool)1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [10U] [i_0])) ? (-5028464005222058813LL) : (arr_22 [i_6] [i_5] [i_2] [i_1] [i_0])));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (short)31895)) << (((((((/* implicit */int) arr_3 [i_0])) + (74))) - (22))))));
                        arr_30 [i_0] [i_1] [i_1] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)252)))) == (((unsigned long long int) (_Bool)1))));
                        arr_31 [(unsigned short)16] [i_2] [i_2] [i_2] [i_2] [i_0] = ((((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7])))) ? (((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_1] [i_2]))) : (((int) 2979922856U)));
                        var_15 = ((/* implicit */long long int) ((((((/* implicit */long long int) 29)) / (((arr_5 [i_2] [3]) ? (arr_1 [7ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) == (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) - (-7LL))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_41 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((3211615561U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) >= (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) != (var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) != (arr_38 [i_9] [i_10] [i_10]))))) : (((arr_38 [i_8] [(unsigned char)3] [i_10]) >> (((2883193147U) - (2883193143U)))))))));
                            arr_42 [(signed char)7] [i_10] [i_10 + 3] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_39 [(signed char)8] [i_8] [i_10] [i_10] [i_10 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_37 [i_8] [i_9] [10] [i_9]) : (var_4)))) : (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) arr_37 [i_9] [i_10] [i_10] [i_10])) : (var_2)))));
                        }
                    } 
                } 
                arr_43 [(_Bool)1] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned char)197)) : (-2147483636))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_34 [i_8])))) <= (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_37 [i_8] [i_8] [i_9] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((unsigned char) var_2));
    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1073741823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_1))))) : (var_10)))) ? (((((_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))) ? (((/* implicit */long long int) var_6)) : (((long long int) var_1))))));
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)31895))) ? (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (signed char)-120)))) : (((/* implicit */int) var_0))))) ? (((((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2704085102861835988LL)) ? (((/* implicit */int) arr_21 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_45 [2U]))))))) : (((/* implicit */unsigned long long int) ((long long int) var_0)))));
        var_19 = ((int) (((_Bool)1) ? (arr_22 [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_22 [i_12] [i_12] [i_12] [i_12] [(unsigned char)1])));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (signed char)-106)) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) arr_38 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (arr_38 [i_12] [i_12] [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-39))))));
    }
}
