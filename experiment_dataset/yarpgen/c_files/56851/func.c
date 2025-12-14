/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56851
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0 - 4])))) || (((/* implicit */_Bool) (short)-20988))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) var_10);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)166)) ? (137438691328LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_12 [i_2] [i_3] [i_2] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)111)), (137438691328LL)))) ? ((+(((/* implicit */int) (short)5378)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) min((((/* implicit */short) var_5)), (arr_5 [i_2] [i_4])))))));
                    var_17 = ((/* implicit */int) max((3217886622501118337LL), (((/* implicit */long long int) (short)-22267))));
                    arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_4 [i_4]), (((/* implicit */short) arr_9 [i_2] [i_3] [i_3] [i_4])))))))) ? (arr_10 [i_2] [(short)1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_2] [i_3] [i_3 + 1] [i_3 - 1]), (arr_9 [i_2] [i_2] [i_3 - 1] [i_3 - 1])))))));
                    arr_14 [(_Bool)1] |= ((/* implicit */unsigned short) max(((-(((long long int) arr_9 [6] [i_3 + 1] [i_4] [(short)12])))), (((/* implicit */long long int) arr_4 [i_4]))));
                    var_18 = ((/* implicit */short) ((((long long int) min((((/* implicit */int) (short)-15008)), (2006977066)))) < (arr_10 [i_2] [i_3] [(short)5])));
                }
            } 
        } 
        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))), (((((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2])) << (((((/* implicit */int) (short)-31556)) + (31570)))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned int) ((((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14670))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3217886622501118347LL))))) < (((/* implicit */long long int) -2147483638))));
                        var_21 ^= ((/* implicit */_Bool) arr_18 [i_5]);
                        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6 - 1])) ? (((/* implicit */int) arr_4 [i_6 - 1])) : (((/* implicit */int) arr_4 [i_6 - 2]))))) ? (((((/* implicit */_Bool) ((arr_18 [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_2] [i_5] [i_5] [(unsigned short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7 + 3])))))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 1008184835))))));
                    }
                } 
            } 
            arr_22 [i_2] [i_2] [i_5] = ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((short) arr_17 [i_2] [i_2 + 1] [i_2] [i_5])))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                {
                    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((((/* implicit */long long int) ((int) (unsigned short)14670))) > (137438691328LL))))));
                    arr_29 [i_2] [i_8] [i_2] = ((short) var_11);
                }
            } 
        } 
    }
    var_24 ^= ((/* implicit */unsigned short) var_11);
    var_25 ^= ((/* implicit */short) 1182251844);
}
