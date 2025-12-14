/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84578
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_10 [11ULL] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (1048575U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_3] [i_2 - 1] [i_1 - 1] [i_0]))))) : (var_10)));
                            var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((1048589U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)483))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)2004))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))) <= (6386123392922089451ULL))))));
                            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11581913007306316182ULL)) || (((/* implicit */_Bool) 1574047698U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_1 - 1] [i_1 - 2] [i_1 + 2]))) : (var_5)))), (((unsigned long long int) var_5))));
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) 12060620680787462171ULL));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        for (short i_7 = 3; i_7 < 16; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) 4293918696U);
                                var_17 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4964779585918787383ULL))))) > (((/* implicit */int) ((((/* implicit */int) arr_30 [i_9] [i_7 + 1] [i_8] [i_8] [i_8])) < (((/* implicit */int) var_12)))))))), (((((/* implicit */unsigned long long int) arr_15 [i_6] [i_6 + 1] [i_9] [i_6 - 2])) % (var_6)))));
                                var_18 = ((/* implicit */short) (+(((((18446744073709551615ULL) | (15921428233432952585ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        for (short i_12 = 4; i_12 < 17; i_12 += 1) 
                        {
                            {
                                arr_36 [i_12 - 3] [i_12 - 1] [i_12] [i_12] [i_12 - 4] [i_6] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_4), (max(((short)2055), ((short)-1)))))) > (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 - 2] [i_7 - 1] [i_8] [i_11 + 3] [i_12 - 2]))))))));
                                var_19 = ((/* implicit */unsigned int) min((((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) % (5519691217277586038ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_12 + 1] [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) 1048575U)))))));
                                arr_37 [(short)3] [i_11 + 3] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_7] [i_7 - 3])) / (((/* implicit */int) (short)22104))))) ? (((((/* implicit */_Bool) (-(6416376958338266135ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (short)-22102)))))) : (max((18446744073709551615ULL), (12355985065784030191ULL))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)-22113))) : (((12927052856431965578ULL) >> (((((/* implicit */int) (short)1408)) - (1345)))))))));
                                arr_38 [i_6] [i_7] [i_8] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */int) (short)-22102)) + (((/* implicit */int) (short)22131))));
                                arr_39 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)-22113)) ? (((/* implicit */int) arr_14 [i_6] [i_7 + 1] [i_11 - 1] [i_12 + 1])) : (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 4) 
    {
        for (unsigned int i_14 = 1; i_14 < 15; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned int i_16 = 2; i_16 < 16; i_16 += 4) 
                    {
                        {
                            arr_50 [(short)10] [(short)10] [i_15] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22112))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22143))) % (18014398509481983ULL)))));
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1))));
                            arr_51 [i_14] [i_16 - 1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-13713)) : (((/* implicit */int) var_4)))));
                            arr_52 [i_14] [i_13] [16ULL] [i_14] [i_15] [i_14 + 4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-25618), (var_9))))) == (min((((/* implicit */unsigned long long int) var_12)), (var_3)))))), ((~(1382489743U)))));
                            arr_53 [i_13] [i_13] [i_14 + 2] [i_15] [i_13] = ((/* implicit */short) max((((arr_5 [i_13 - 1] [i_14 + 2] [i_16] [i_16 - 2]) << (((((/* implicit */int) var_0)) - (9946))))), (((unsigned long long int) (short)-22113))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        {
                            arr_60 [(short)12] [i_14] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_44 [i_14 + 4] [i_13 + 2] [i_13 + 1])) + (2147483647))) << (((min((114313324U), (((/* implicit */unsigned int) (short)28971)))) - (28971U)))));
                            arr_61 [i_13] [i_13] [i_17] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-20265)) : (((/* implicit */int) (short)-13706))))))) ? (var_10) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-27205)) + (2147483647))) >> (((arr_1 [i_18] [i_17]) - (8940651454282890210ULL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 1; i_19 < 18; i_19 += 4) 
                {
                    for (unsigned int i_20 = 3; i_20 < 16; i_20 += 1) 
                    {
                        {
                            arr_69 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_64 [i_19] [i_14]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_66 [i_13] [16U] [i_19 + 1] [i_19])))) ? (3008445093867662649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_14])) > (((/* implicit */int) (short)2630)))))))))));
                            arr_70 [i_13 - 1] [i_19] [(short)6] [i_20 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 8311744672120991461ULL))))), (((((/* implicit */int) var_11)) + (((/* implicit */int) (short)-2613))))))) == (((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) 2996783809U)) ? (arr_46 [i_20 + 3] [i_13] [i_13]) : (5462095265284565840ULL)))))));
                            arr_71 [(short)10] [i_13] [i_19 + 1] [i_14] &= ((/* implicit */short) ((min((((((/* implicit */_Bool) var_14)) ? (arr_40 [i_14]) : (var_14))), (((/* implicit */unsigned int) arr_54 [8U] [i_20 - 1] [i_14 + 1])))) <= (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
