/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71193
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_14 [i_2] [12ULL] [12ULL] [i_4] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [2U] [i_0] [i_3])) == (((/* implicit */int) var_4)))))))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)14))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_11 [i_4] [i_3] [i_1] [i_1] [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))));
                            arr_15 [i_0] [i_4] [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((127U) % ((~(127U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) != (((/* implicit */long long int) var_0)))))) : (min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (2528430473U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-47)))))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned int) max((var_16), (min(((+(((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [(unsigned short)12])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 988856701)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)19522)))), (((/* implicit */int) ((short) (_Bool)1))))))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            arr_18 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_5] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21281))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)48872)) : (((/* implicit */int) (unsigned short)61137))))) * ((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_9))))))), (arr_4 [i_0] [i_0])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            arr_21 [17LL] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) / (((/* implicit */int) arr_7 [i_0] [i_6 - 1])))) * (((/* implicit */int) (unsigned short)4414))));
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_6 - 1] [i_6 + 1]) / (((/* implicit */unsigned int) var_14))));
        }
        arr_23 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
        var_18 ^= ((/* implicit */signed char) var_6);
    }
    for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 2) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_7 + 2] [i_7 + 2])), ((((_Bool)1) ? (arr_25 [(unsigned short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) min((-402293326), (((/* implicit */int) (unsigned char)197))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)62))) < (arr_26 [i_7] [i_7]))))) : (((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (arr_26 [9LL] [i_7 + 2]) : (arr_24 [i_7] [i_7])))))));
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 3) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) arr_35 [i_7] [i_7] [(short)5] [(short)6]);
                            var_21 = ((7347454351512412887LL) / (((/* implicit */long long int) ((/* implicit */int) (short)21281))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned int) 1516336251);
        }
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_7] [i_12] [i_7 - 2] [i_7] [i_12])) ? (((((/* implicit */_Bool) 208969476U)) ? (((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_40 [i_7])))) : (((/* implicit */int) var_12))))) ^ (((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7] [i_7] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_28 [i_7])), (var_9))))) : (((((/* implicit */_Bool) arr_31 [i_7] [i_7] [(_Bool)1])) ? (arr_38 [i_7] [i_7 - 2] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
            arr_41 [i_7] [(signed char)21] [i_7] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) arr_27 [i_7] [i_12])) > (((((/* implicit */_Bool) arr_37 [i_7] [i_12] [i_7] [i_7] [i_12])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (unsigned char i_14 = 3; i_14 < 21; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            arr_49 [i_7 + 2] [i_7] [i_13] [i_14] [i_15] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)63821)) && (var_11)))))));
                            var_24 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                            var_25 = ((/* implicit */long long int) arr_30 [i_15] [i_14] [i_14 - 2] [i_7 - 2]);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (2494427666U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26653)))));
                        }
                    } 
                } 
            } 
        }
        var_27 = -6876300227847953930LL;
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) == (-988856677)))) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (signed char)-92)) + (98)))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) / (((arr_26 [i_16] [i_16]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) | (((/* implicit */long long int) ((arr_17 [i_16] [i_16] [i_16]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
        var_30 += ((/* implicit */unsigned int) (unsigned short)48976);
        var_31 = ((/* implicit */short) var_7);
    }
    var_32 = (unsigned short)6441;
}
