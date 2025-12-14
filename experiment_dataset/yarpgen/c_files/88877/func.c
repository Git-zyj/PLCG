/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88877
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-111))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) -2100452648)) | (-6172192169552885051LL))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (max((6366309767023962020LL), (((/* implicit */long long int) 845896083)))) : (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) << (((var_5) - (1745953846U)))))))) - (6366309767023962001LL)))));
                            arr_16 [i_0] [i_0] [9ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_1)) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (8163662504844504112ULL)))));
                            var_14 = ((/* implicit */unsigned char) ((3644890578U) << (max((min((0U), (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) ((var_9) != (var_9))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            arr_20 [i_3] [i_5] = ((/* implicit */unsigned short) ((3332612896U) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) >= (var_6)))))));
                            arr_21 [i_0] [i_5] [(unsigned short)4] [i_2] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 7994387611186849805ULL)) ? (var_1) : (2150033806U)))) % (var_7)));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)111))) + (3654128184879264563LL)));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (var_11)))))))));
                            arr_22 [i_0] [i_1] [i_5] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
                        }
                        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((3654128184879264563LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) 7994387611186849813ULL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))))))));
                    }
                    arr_23 [i_1] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)54357)), (10452356462522701802ULL))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)22138)) : (((/* implicit */int) (_Bool)1)))) - (22125)))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((14349484520013375395ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (min((min((((/* implicit */unsigned long long int) (signed char)33)), (var_11))), (((/* implicit */unsigned long long int) var_4))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) < (((var_5) % (((/* implicit */unsigned int) 1417256438)))))))) != (4083937794524881743LL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((2758059105U) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (short)-13424)), ((unsigned short)45618))), (((/* implicit */unsigned short) var_8))))))));
}
