/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96209
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_1 + 2])))) : (((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
                var_11 ^= ((/* implicit */long long int) arr_0 [i_0]);
                var_12 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0] [12ULL] [i_0])), (arr_0 [i_0]))))));
                var_13 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 32768U)) ? (((/* implicit */int) (unsigned short)23715)) : (((/* implicit */int) (unsigned short)0)))) + (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(2276109452633714623ULL)))) ? (((418900788252884483ULL) & (((/* implicit */unsigned long long int) 3216596941U)))) : (((((/* implicit */_Bool) (unsigned char)168)) ? (arr_6 [(unsigned short)12]) : (arr_6 [i_2])))))));
                                arr_17 [i_4] [i_3] [(unsigned short)20] &= ((/* implicit */unsigned short) var_4);
                                arr_18 [i_2] [i_2] [i_4] [i_5] [i_2] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16170634621075836992ULL)) ? (arr_14 [i_3]) : (arr_14 [i_2])))) ? (min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_10 [i_4] [i_5 - 3] [i_5] [i_5 - 2])))) : ((+(((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_25 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                                var_15 ^= ((/* implicit */unsigned short) arr_24 [i_4] [i_4]);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (4611681620380876800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13273)))));
                                var_17 = ((/* implicit */int) arr_24 [i_2] [i_2]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(16170634621075836969ULL)))) ? (((/* implicit */int) (unsigned short)7)) : ((~(((/* implicit */int) (signed char)71))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (2276109452633714649ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2276109452633714620ULL)) ? (12844322819069168454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (12844322819069168454ULL) : (17837966268961182086ULL)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> (((((/* implicit */int) var_8)) - (196))))) : ((~(((/* implicit */int) var_0))))));
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5602421254640383182ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) : (((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))))) >= (((/* implicit */unsigned long long int) (((!(var_7))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (unsigned char)0)))))))));
}
