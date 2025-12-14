/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92314
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4LL] [i_0])))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)254))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_4 [i_0])))) | (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1])) | (((/* implicit */int) arr_4 [i_0 + 1])))))))))))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((arr_1 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_0 [i_0 + 1] [i_1])))))))) >> (((min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0 - 1])))) + (59250)))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [17] [(unsigned short)9]))) : (arr_6 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_2] [i_0]))))) : (((arr_6 [(signed char)17] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))) : (((((/* implicit */_Bool) ((long long int) var_5))) ? (((arr_1 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_2 [i_2] [i_0])))))))));
            var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_3 + 1] [i_4] = ((/* implicit */long long int) (~((~(((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) (signed char)114))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_18 += ((/* implicit */int) ((((/* implicit */_Bool) 11665210962265581562ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((~(3491716824501317945ULL)))));
                            var_19 = ((/* implicit */long long int) (((+(((((/* implicit */int) (signed char)114)) % (((/* implicit */int) arr_14 [i_5] [i_4] [i_3] [i_2])))))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3] [i_5])) > (((/* implicit */int) ((unsigned short) var_7))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((long long int) var_6)) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_5]))) : (var_8))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            var_21 = arr_3 [1];
                            var_22 |= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_4] [i_6]))))));
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_3 [10ULL])) : (((/* implicit */int) arr_15 [i_0])))) << (((/* implicit */int) (!(var_6))))));
                            var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_1 [(unsigned short)1])) ? (((/* implicit */long long int) arr_9 [i_0] [i_2] [i_3] [i_6])) : (arr_16 [i_0] [i_2] [i_3] [i_4] [i_6]))) + (9223372036854775807LL))) >> ((((+(var_10))) - (1580651316)))));
                        }
                        arr_18 [i_2] = ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (-478726558781133892LL));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    {
                        arr_28 [i_0] [6] [6] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_12 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (signed char)124)))) && (((((/* implicit */_Bool) -5051255435839701908LL)) || (((/* implicit */_Bool) 5051255435839701911LL)))))))) : (arr_16 [i_0] [17ULL] [i_0 + 1] [7ULL] [i_0])));
                        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)96)))))) ? (-2147483644) : ((~(((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_7] [i_8] [(unsigned short)12])) : (((/* implicit */int) var_0))))))));
                        arr_29 [i_0] [i_0] [i_8] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)16)))) | (((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_7] [i_0 + 1] [(unsigned short)15]))))))) < (((((/* implicit */long long int) ((unsigned int) var_11))) / ((+(7LL)))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 952156761245195825LL)) ? (((/* implicit */int) (signed char)122)) : (((1187040738) + (((/* implicit */int) (_Bool)1))))))) * (((long long int) 0))));
        }
        arr_30 [(signed char)6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-126)) | (((/* implicit */int) (signed char)95))))));
    }
    var_26 = ((/* implicit */int) var_4);
}
