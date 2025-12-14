/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60416
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))), (((/* implicit */unsigned int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-32747), ((short)-1))))) & (min((var_0), (((/* implicit */long long int) (short)-32739)))))))));
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [9ULL] = ((/* implicit */unsigned short) var_13);
        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65525))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1318203067U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32747))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)32754)))) & (((/* implicit */int) ((_Bool) 1318203056U)))));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned long long int) ((short) arr_2 [i_0] [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2873488264441345548ULL)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) : ((~(((unsigned int) 1318203088U))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 4; i_3 < 9; i_3 += 3) 
            {
                {
                    arr_15 [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 1]))) : (var_3))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (short)-32767)))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3 - 2] [i_3 - 4] [i_3 - 3]))) : (var_10))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_25 [i_6] = ((/* implicit */unsigned short) (((+(var_3))) < (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_1] [i_2] [i_3 - 2]))))), (((((/* implicit */_Bool) 2976764235U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (2976764240U)))))));
                            arr_26 [i_6] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_27 [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */signed char) (short)-32764);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32754))))), (14716226463565864044ULL)));
                            var_24 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_11 [i_3 + 1] [i_4 + 2])), (arr_22 [i_1] [i_2] [i_7] [i_3 - 1] [i_4 + 2] [i_4])))));
                        }
                        arr_30 [(unsigned short)8] [i_4 + 2] [(unsigned short)8] [i_4 + 2] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) * (arr_6 [i_1] [i_2]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) 2976764240U)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)-13408)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)32764)) && (((/* implicit */_Bool) (unsigned short)65414)))))))));
                        arr_34 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) 14282957742578194640ULL);
                    }
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)65535))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 268435455ULL))))) & (((((/* implicit */int) min((arr_5 [i_3 - 4]), (((/* implicit */short) var_14))))) & (((((/* implicit */int) (unsigned char)254)) - (((/* implicit */int) var_14)))))))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_15), (((/* implicit */signed char) (_Bool)1))))), (1318203061U)))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) arr_8 [(short)5])) : (((/* implicit */int) (short)-32764))))) / (arr_32 [i_3 - 2] [i_3 - 4] [i_3] [i_3] [i_3 - 3] [i_3 + 1]))))))));
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_29 = (((-(((/* implicit */int) arr_28 [i_1] [i_10] [i_10] [i_9] [i_10])))) < (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_39 [i_2] [i_9] [i_10])), (arr_12 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-32767))));
                            var_31 ^= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 2976764233U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_32 [i_1] [i_2] [i_3] [i_3] [i_2] [i_10]))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) var_0)));
                            arr_42 [i_1] [i_1] [i_1] [i_1] [7ULL] = ((/* implicit */unsigned short) ((long long int) ((min((2976764219U), (((/* implicit */unsigned int) (unsigned short)65532)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-32751)))))));
                        }
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            arr_46 [i_11] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_3 - 1] [i_11]))) > (((((/* implicit */_Bool) (short)-522)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1318203077U))))))) & (((arr_21 [i_1] [i_3 - 4] [8LL] [i_9] [i_11]) ? (min((var_3), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_1]))) >= (var_0))))))));
                            var_32 = ((/* implicit */_Bool) var_15);
                            var_33 = ((/* implicit */unsigned char) min((var_33), (min((arr_39 [i_2] [i_2] [(unsigned char)3]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_3) << (((/* implicit */int) arr_38 [i_1] [i_2] [i_3] [i_9] [i_11]))))))))))));
                        }
                        arr_47 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1318203046U)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned short)65515))))));
                    }
                }
            } 
        } 
    }
}
