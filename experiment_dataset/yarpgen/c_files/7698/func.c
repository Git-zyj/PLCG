/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7698
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
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) != (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_7)))))))) <= (((((/* implicit */_Bool) var_12)) ? (min((var_12), (((/* implicit */long long int) var_15)))) : (var_1)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_19 |= ((/* implicit */int) arr_1 [i_0]);
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                var_20 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(arr_6 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((arr_6 [11ULL] [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(signed char)5] [4]))) : (arr_0 [i_0])))) ? (arr_2 [i_1] [i_2 + 2] [i_2 + 2]) : (arr_1 [i_1 - 1])))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 4; i_3 < 16; i_3 += 1) 
                {
                    var_21 ^= ((int) ((((/* implicit */_Bool) ((var_10) | (4096U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_8 [i_1] [i_2 + 3] [i_3]))))) : (var_9)));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_6 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_6 [i_0] [9LL] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [2ULL]))))), (524287U))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_23 &= ((/* implicit */long long int) var_2);
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2] [i_1 - 1]))) & (arr_2 [i_2 + 1] [i_2 + 1] [(signed char)5]))) - (min((arr_2 [i_2 + 2] [i_1] [(short)8]), (((/* implicit */long long int) arr_3 [i_2 - 1] [i_2 - 1] [i_1 - 1]))))));
                    arr_12 [i_2 + 3] [0U] [i_2] = ((/* implicit */short) var_2);
                }
                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >> (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_5))))))) != ((+(arr_11 [i_1 - 1] [(unsigned short)12] [i_1 - 1] [i_1 - 1])))));
            }
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) (~((+(arr_0 [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) (((+(var_0))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7])))));
                            arr_20 [i_0] [i_1 - 1] [i_5] [i_0] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((arr_18 [i_0] [i_1 - 1] [i_5] [i_7] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_7] [i_0])))), (arr_14 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                arr_21 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)7] [3ULL]);
            }
        }
        var_28 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)19])))), (((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-32763)), (arr_19 [i_0] [i_0] [i_0] [i_0])))))))));
        var_29 = ((/* implicit */long long int) ((max((((7U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) * (((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (var_8))))));
    }
    var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_15)))), ((_Bool)1)));
}
