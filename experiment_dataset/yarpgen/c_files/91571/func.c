/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91571
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_2] [i_1] [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])))))) ? (min((min((((/* implicit */unsigned long long int) (short)-27433)), (arr_5 [i_1] [i_1] [i_2]))), ((((_Bool)0) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21528))))))) : (arr_6 [i_0] [i_1] [i_2])));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */signed char) ((short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_1]))))), (((((/* implicit */_Bool) 11666706590497171977ULL)) ? (-8745394161770261321LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [(short)19]))))))));
                        var_11 &= ((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_0]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(signed char)23] [i_1] [i_2] [i_1] [i_2] [i_4])) ? (-8768195907303514253LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3 + 1] [(_Bool)1] [i_0] [i_1] [i_0]))))))));
                            var_13 = ((/* implicit */_Bool) min((var_7), (arr_5 [i_1] [i_1] [i_1])));
                        }
                        var_14 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]);
                    }
                    var_15 = ((/* implicit */unsigned long long int) var_9);
                }
                for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                {
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_5] [i_0])) ? (arr_14 [(_Bool)1] [20] [i_0]) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-20676))))))) ? ((+(((unsigned long long int) 306500002U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 &= ((/* implicit */short) 952052869U);
                                var_18 *= ((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_7]);
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5])) ? (arr_12 [i_0] [i_0] [i_0]) : (arr_12 [i_5] [i_5] [i_5]))), ((~(arr_12 [i_0] [i_1] [i_5])))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1] [i_1] [i_5]))) ? (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1] [i_5]))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) var_5)) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 344740401U))))) : (((/* implicit */int) ((_Bool) arr_8 [20U] [i_1] [i_5] [i_8] [i_9] [i_9])))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (2568299003U))))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned short)21])) ? (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((long long int) var_7)))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) (unsigned char)61))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4330))) : (arr_5 [i_1] [i_1] [12ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) (+(((arr_3 [i_0]) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned char)175)))))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */short) min((max((((((/* implicit */_Bool) 6052043351131129551ULL)) ? (((/* implicit */int) (short)-12091)) : (((/* implicit */int) (short)26946)))), (min((((/* implicit */int) var_3)), (var_5))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (_Bool)0))))))));
}
