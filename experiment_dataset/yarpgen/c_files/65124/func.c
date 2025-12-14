/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65124
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
    var_11 = ((/* implicit */unsigned long long int) ((var_10) + (((unsigned int) ((signed char) var_6)))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_6)))))) >= (((((/* implicit */int) var_6)) ^ (((((/* implicit */int) var_4)) & (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 768297164U)) || (((/* implicit */_Bool) arr_1 [i_0])))))) >= (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((arr_11 [i_1 - 1] [i_0] [i_1] [i_1]) << (((((/* implicit */int) (signed char)121)) - (118))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 768297155U)) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) < (768297159U)))))))))) : (((/* implicit */short) ((((((arr_11 [i_1 - 1] [i_0] [i_1] [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)121)) - (118))) - (3))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 768297155U)) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) < (768297159U))))))))));
                            arr_13 [i_0] [3LL] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (768297164U)))) >= (((((/* implicit */int) var_6)) * (0)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_6])) << (((arr_9 [i_6] [i_1]) - (13861270910761127429ULL)))))))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((3526670133U) + (((/* implicit */unsigned int) 0))))) : (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */long long int) arr_16 [i_6] [i_5 - 2] [i_4] [i_1 + 1] [i_0] [i_0])) : (2251799746576384LL)))))));
                                arr_21 [i_6] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (arr_12 [i_0] [i_1 - 1] [i_0] [i_4] [i_0] [i_6])))) >> (((((long long int) (short)-19694)) + (19697LL)))))) || (((/* implicit */_Bool) ((unsigned int) var_10)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((short) 1301607648563641186ULL)))) & (((arr_17 [i_0]) ? ((-2147483647 - 1)) : (((/* implicit */int) var_8))))));
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 2)) ? (3961641771706638471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned long long int) ((int) ((12888741877897775466ULL) <= (((/* implicit */unsigned long long int) arr_11 [12] [i_0] [i_7] [i_7]))))))));
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_18 [(signed char)4] [i_7] [i_1] [(signed char)4]))) ? (((/* implicit */int) ((arr_28 [i_0] [i_0] [i_7] [6ULL] [i_9]) != (((/* implicit */unsigned long long int) arr_11 [i_1] [(unsigned char)10] [i_8] [i_8]))))) : (((/* implicit */int) arr_4 [6U])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_40 [(signed char)10] [i_0] [i_1] [i_0] [i_10] [i_0] [i_0] = ((signed char) ((_Bool) -1060314377));
                                arr_41 [i_0] [i_1] [i_0] [i_7] [i_0] [(signed char)7] = ((/* implicit */int) ((((/* implicit */long long int) ((((unsigned int) 3214215939U)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)103)) << (((((-1060314392) + (1060314417))) - (15)))))) : (arr_11 [i_0] [i_0] [i_7] [i_10])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
