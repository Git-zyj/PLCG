/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75275
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((long long int) var_8)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67)))))) == (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [0U] [i_0])) ? (var_2) : (((/* implicit */unsigned int) var_0))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))) : (min((((/* implicit */int) (short)31168)), (661430419)))))));
            arr_7 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-30168)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3448441653U)))) : (((/* implicit */int) ((_Bool) (unsigned char)142)))))), (((((/* implicit */_Bool) ((arr_5 [i_1 - 1] [(unsigned char)1] [i_2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned int) arr_3 [(_Bool)1])), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)130), (((/* implicit */unsigned char) arr_4 [i_1 + 1] [(short)21]))))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-30157)) <= (((/* implicit */int) (unsigned char)2)))))));
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_18 [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-26684)) ? (((/* implicit */int) arr_9 [i_1] [i_4] [i_6])) : (((/* implicit */int) (short)30168)))));
                            var_15 = ((((/* implicit */_Bool) ((int) arr_11 [i_1]))) ? (((((/* implicit */_Bool) arr_6 [i_1] [12LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (arr_13 [i_4 + 2] [i_3]))) : (((arr_17 [i_1] [i_5]) ? (523088509U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 1] [i_4] [i_4] [i_5] [i_1 - 1] [i_6]))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (2894049095U) : (((/* implicit */unsigned int) var_1))))) ? (((arr_16 [(unsigned char)4] [i_4 + 1] [i_5] [i_6]) >> (((arr_15 [i_1] [6U] [i_1] [i_1]) + (877180505))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((1318685056U) - (1318685027U))))))))));
                            var_17 = ((/* implicit */unsigned char) ((signed char) arr_6 [i_1 - 1] [i_4 - 1]));
                            arr_19 [(signed char)14] [i_4] &= ((/* implicit */unsigned int) arr_8 [i_3]);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */_Bool) (short)4676);
        }
        for (signed char i_7 = 3; i_7 < 23; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (unsigned char i_9 = 1; i_9 < 21; i_9 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [(short)2])) && (((/* implicit */_Bool) arr_10 [i_8])))))))));
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26652)) ? ((~(((/* implicit */int) min(((short)-30157), (((/* implicit */short) (unsigned char)114))))))) : (((/* implicit */int) (unsigned char)48))));
                    }
                } 
            } 
            var_21 = ((min((((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_1 - 1])) ? (1089139941U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (arr_14 [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 1] [(short)9])))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)19] [(signed char)19]))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((long long int) ((((/* implicit */int) (short)-30151)) - (((/* implicit */int) (unsigned char)239))))), (((/* implicit */long long int) max(((short)30179), ((short)-26648)))))))));
            arr_27 [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((1418276763), (((/* implicit */int) (signed char)0))));
        }
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            var_23 ^= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_10] [i_10] [i_11] [i_10] [i_10] [i_1]))) : (arr_10 [i_11])))) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) arr_15 [(_Bool)1] [i_11] [i_11] [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)184)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)30157), (((/* implicit */short) arr_4 [i_1] [i_10]))))) ? ((+(((/* implicit */int) arr_24 [i_10])))) : ((+(((/* implicit */int) (signed char)-4))))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_32 [(unsigned char)11] [i_11] [10] [i_12])) > (((/* implicit */int) (short)32767)))) ? (min((var_2), (((/* implicit */unsigned int) arr_11 [i_11])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_1] [i_1] [i_1])), (arr_14 [i_1] [i_10] [i_1] [i_12] [i_13] [i_12])))))))) ^ (((((((/* implicit */long long int) arr_13 [0U] [i_1 + 1])) + (var_6))) - (min((var_6), (((/* implicit */long long int) var_2))))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_29 [i_1] [i_1 - 1] [i_1])))) & (((/* implicit */int) arr_9 [(unsigned short)6] [i_1 + 1] [i_1 - 1])))))));
                            var_26 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)46974)) ? (((/* implicit */int) arr_33 [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_13])) : (((/* implicit */int) (unsigned char)215)))) / (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1 - 1])))))) & (((/* implicit */int) ((((/* implicit */int) (short)30156)) >= (((/* implicit */int) arr_14 [(_Bool)0] [i_1 - 1] [i_10] [6ULL] [i_12] [i_13])))))));
                        }
                        var_27 = ((/* implicit */int) arr_25 [i_1] [i_10] [12] [i_1]);
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) max((308788875U), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (823223107U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_31 [i_1]) <= (var_6))) ? (((/* implicit */int) arr_20 [i_1] [i_1] [(short)15])) : (((/* implicit */int) min(((unsigned char)40), (((/* implicit */unsigned char) var_3)))))))) ? (((((/* implicit */_Bool) min(((signed char)-58), ((signed char)-114)))) ? (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_10] [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)2] [i_10] [i_10] [(unsigned char)14] [(unsigned char)14] [(unsigned char)14]))) : (arr_31 [(unsigned char)1]))) : (((/* implicit */long long int) (-(var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_35 [i_1] [i_10] [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_10])), (arr_13 [i_1] [(_Bool)1])))) ? (((/* implicit */int) arr_29 [(short)23] [i_10] [16])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1753604406756581337LL))))))))));
            arr_37 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (((+(var_6))) >> (((((/* implicit */int) min(((unsigned char)223), (((/* implicit */unsigned char) arr_29 [i_1] [i_1] [i_10]))))) - (59))))));
        }
    }
}
