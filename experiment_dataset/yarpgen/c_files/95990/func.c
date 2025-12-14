/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95990
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
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_10)) + (arr_2 [i_0]))), (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)65535)) - (65531)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 |= ((/* implicit */unsigned char) min((max((((/* implicit */signed char) var_7)), (arr_3 [i_1]))), (((signed char) (signed char)78))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((signed char)16), (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1016754335U)) == (4611686018427387904LL))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))) : (15775386830338399488ULL))))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_4 + 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)117))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2)))))))) || (((/* implicit */_Bool) 3049166328U))));
                            arr_15 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)83)) ? (3779852429971654241ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_3 [i_1])))))))));
                            arr_16 [2] [2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])) ? (arr_11 [i_0] [i_0] [(_Bool)1] [i_2]) : (arr_11 [(unsigned char)11] [(unsigned char)6] [i_3] [i_2])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned char) ((signed char) arr_2 [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-2)), (max((((/* implicit */unsigned short) (unsigned char)18)), ((unsigned short)31)))))), (((arr_7 [i_0] [i_1] [i_3]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) min((arr_17 [i_0] [(_Bool)1] [i_2]), (arr_17 [i_0] [i_0] [i_0]))))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((unsigned char) var_8))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            arr_23 [i_6] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((min((arr_18 [i_6 + 2] [i_2] [i_6 - 2] [i_6 + 2] [i_6 - 1] [i_6 - 2]), (((/* implicit */long long int) (unsigned char)234)))) + (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) arr_20 [i_0] [i_6 + 1] [i_2] [i_3] [i_2] [i_1] [i_2])) * (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 - 1] [i_6])))))));
                            arr_24 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2] [i_6 - 1] = ((/* implicit */signed char) ((int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 72057559678189568ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2])))))));
                        }
                        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_1] [(unsigned char)18] [i_3]), (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)8192))))) : (1150669704793161728LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_1])))))))));
                        arr_25 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_1] [i_2] [i_3]))))), ((+(arr_5 [i_3] [i_1] [i_2])))));
                        arr_26 [i_2] = ((/* implicit */signed char) ((((arr_17 [i_0] [i_0] [(signed char)2]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (((((/* implicit */_Bool) var_9)) ? (-8216364081592976145LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28287))))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))));
                    }
                } 
            } 
            var_21 = ((((/* implicit */_Bool) ((((var_0) / (var_0))) - (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [(unsigned char)8] [i_1] [i_1])) % (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18993))) * (18446744073709551615ULL))));
            var_22 = ((/* implicit */signed char) (-((-(((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [0LL])), (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_23 *= ((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_1] [i_7])));
                arr_30 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_7] [i_1] [i_0]))))) ? (((arr_5 [i_7] [i_1] [i_0]) + (arr_8 [i_0] [i_1] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
        }
    }
    var_24 ^= max(((-(5889758266254427713ULL))), (((/* implicit */unsigned long long int) (unsigned char)51)));
    var_25 |= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((signed char) (_Bool)1)))))));
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_8))));
}
