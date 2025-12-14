/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70922
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
    var_13 = ((((/* implicit */unsigned long long int) 32256U)) % ((~(((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) var_1)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min(((short)-2985), (((/* implicit */short) max((var_3), (((/* implicit */unsigned char) var_8))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min(((short)2984), (((/* implicit */short) var_9))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (signed char)126))))))));
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 288230376134934528LL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) var_12))));
                        }
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_6)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) <= (var_5)))));
                        var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)252)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), ((unsigned short)65535)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-2984)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 2]))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_2 + 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_3] [(_Bool)1]))))))) : (var_7)))));
                            arr_20 [(unsigned short)19] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_2 - 2] [i_1] [i_3] [i_5] [i_2 + 2]))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [(_Bool)1] [i_2] [i_1] [i_0])) != (((/* implicit */int) (unsigned char)237))))))))));
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (_Bool)1))))), (((((unsigned long long int) 1125899906842623ULL)) ^ ((+(18446744073709551615ULL)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_1);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), ((+(arr_10 [i_6] [i_1] [i_1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (3466677733828854750LL) : (((/* implicit */long long int) 4294967295U))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [14LL] [i_0] = (_Bool)1;
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((signed char) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65527)) ^ (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)33))))))) : (arr_11 [i_0])));
            arr_25 [i_1] [i_0] [i_0] = (((_Bool)1) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8147))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (arr_15 [0LL] [(_Bool)1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7]))))) - ((+(arr_15 [i_8 - 1] [i_1] [i_7])))));
                            var_25 = ((/* implicit */unsigned char) arr_28 [i_0]);
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_26 = ((/* implicit */_Bool) max((17U), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_10] [i_0])) * (((/* implicit */int) arr_17 [i_0] [(_Bool)1])))) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65535)))))))));
            var_27 = ((/* implicit */unsigned long long int) var_1);
        }
        var_28 = ((/* implicit */unsigned int) 14ULL);
        arr_35 [3] = ((/* implicit */_Bool) (unsigned char)255);
    }
}
