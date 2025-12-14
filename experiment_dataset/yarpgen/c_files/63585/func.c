/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63585
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
    var_16 = (unsigned char)252;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) var_8);
                var_18 = ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)91))))) ^ (max((((/* implicit */unsigned long long int) (short)-10332)), (arr_0 [i_0]))))) | ((((~(arr_0 [17U]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0ULL] [i_0]))) : (var_10)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))) & (min((var_5), (((/* implicit */unsigned int) (signed char)27))))))) ? (min((9319236097016472348ULL), (((/* implicit */unsigned long long int) ((signed char) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)49152)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                    {
                        var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */_Bool) arr_12 [(signed char)8] [23U] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) var_10))))))) ? (((arr_0 [(short)11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) != (var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33)))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_3] [i_1] [(signed char)17])) ? (((/* implicit */int) arr_1 [i_2] [i_3])) : (((/* implicit */int) var_6))))))) ? (72057594037665792ULL) : (((/* implicit */unsigned long long int) (~((~(var_10))))))));
                        arr_13 [i_3] [i_1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned short)0)) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(unsigned char)5] [i_0])), (3103017406641161105ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(arr_5 [i_0] [i_1] [i_2] [i_3])))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)30303)), (var_10))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3])))))) ? (((max((((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [i_3])), (2078312623U))) - (2078312623U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)103)) ? (((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)12])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1])))) : ((~(((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [(unsigned char)21] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_0]))) : (((((/* implicit */_Bool) arr_0 [(signed char)6])) ? (var_10) : (arr_7 [i_1] [4U] [i_1])))))));
                        arr_17 [i_1] [i_4] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)21] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(_Bool)0] [(_Bool)0] [4ULL] [i_4])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12791)))))), (((4940284550531271533ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2563135289U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))))));
                        arr_18 [i_1] [i_2] [i_4] &= ((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_0] [6ULL] [i_0] [i_0] [(unsigned short)16])), ((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4] [i_4]))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_23 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)115))));
                        arr_24 [i_0] [1ULL] [i_1] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (signed char)112)))), (((/* implicit */int) (unsigned char)179)))), (((/* implicit */int) min(((unsigned char)196), (((/* implicit */unsigned char) (signed char)112)))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53739)))))) : (max((max((11271786902914762729ULL), (((/* implicit */unsigned long long int) (signed char)19)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_15)))))))));
                        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_10 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */short) var_4))))) % (((/* implicit */int) min((((/* implicit */short) var_12)), (arr_9 [i_0] [i_2]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)21)) ^ (((((/* implicit */_Bool) 11841979U)) ? (((/* implicit */int) arr_9 [i_0] [i_2])) : (((/* implicit */int) arr_21 [(_Bool)1] [i_1]))))))) : ((~(max((((/* implicit */unsigned int) (short)-29330)), (3155381699U)))))));
                    }
                    var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_15 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)36))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1]))))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((4290772992U) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)29))))))))));
                }
                var_25 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [4ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60190))) : (arr_5 [(unsigned short)21] [(signed char)2] [5ULL] [(unsigned char)11])))) ? (((/* implicit */int) (signed char)40)) : ((~(((/* implicit */int) (unsigned short)25254)))))), (((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(1940926788U)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned short)20535)))), (((/* implicit */int) arr_12 [i_1] [i_0] [24ULL]))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_29 [i_6] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_6] [i_6])) + (2147483647))) << (((((((/* implicit */int) var_14)) << (((((/* implicit */int) arr_12 [i_6] [i_6] [i_6])) - (38831))))) - (6848)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((((/* implicit */_Bool) var_13)) ? (arr_28 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (arr_28 [i_6])))));
        arr_30 [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_6] [(unsigned char)15] [i_6])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((arr_26 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6]))) : (arr_15 [i_6] [i_6] [i_6] [i_6])))));
        var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((min((arr_20 [(short)8]), (arr_19 [i_6] [i_6] [(_Bool)1] [i_6]))) % (((((/* implicit */_Bool) arr_21 [(_Bool)1] [(_Bool)1])) ? (2370344859U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    }
}
