/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74197
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
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (3936910649U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((15498038821554197932ULL) >> (((((/* implicit */int) var_14)) - (150))))) >> (((((((/* implicit */int) var_11)) >> (((/* implicit */int) arr_1 [i_0] [i_0])))) - (36795)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_1))))))));
        var_19 ^= ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((unsigned int) ((short) var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))));
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_13)), ((((((_Bool)0) ? (6498983217507527577LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (358056653U))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */short) arr_3 [i_1] [i_4]);
                        var_23 = ((min((((((/* implicit */int) arr_5 [i_1] [i_1])) % (((/* implicit */int) (short)-8237)))), (((/* implicit */int) min((arr_10 [i_0] [i_1] [i_1] [i_4]), (((/* implicit */short) arr_1 [i_0] [i_1 - 2]))))))) + (min((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (_Bool)0)))));
                        var_24 ^= ((/* implicit */unsigned short) var_4);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_5] [(unsigned short)3] [(short)17] [(short)17] [i_0] = ((/* implicit */unsigned long long int) max((((long long int) (-(((/* implicit */int) arr_10 [(short)6] [i_0] [i_0] [4ULL]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 381579631U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(signed char)19] [i_2] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) var_6)))))) : (((14U) / (((/* implicit */unsigned int) 560918742)))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_5] [i_2] [i_1 - 2] [i_0])) + (((((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_2] [i_5])) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))))));
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_26 = (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                        var_27 = ((/* implicit */long long int) (-(max((arr_12 [i_0] [i_1] [i_2] [i_2]), (1995975141739748016ULL)))));
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) (!(((_Bool) (_Bool)0)))))));
                        arr_20 [i_6] [i_6] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (((/* implicit */int) var_5))));
                    }
                    arr_21 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_1])) : (((/* implicit */int) arr_16 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) (unsigned char)189);
}
