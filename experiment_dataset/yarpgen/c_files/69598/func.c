/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69598
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_15 = ((((((/* implicit */_Bool) arr_6 [(signed char)1] [11ULL] [i_1] [i_2] [4] [i_3])) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [2LL]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 2] [i_2] [i_2] [i_3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) >= (4294967295U))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_9 [i_0])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_3] [i_1] [(short)21]))) : (((unsigned long long int) ((unsigned int) var_8)))));
                            arr_10 [i_0] [11ULL] [i_2] [i_2] [16LL] [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) var_3))));
                            arr_11 [i_0] [15U] [i_2] [i_2] [15ULL] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) (-(arr_0 [i_0])))) : (var_11))));
                        }
                    } 
                } 
                arr_12 [(signed char)17] [(signed char)8] = ((((((/* implicit */_Bool) ((unsigned long long int) 10U))) && (arr_5 [i_1] [i_0 - 2] [i_0 - 2]))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)3] [i_0 - 1] [i_1])) ? (arr_3 [i_0] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0])))))) && (((arr_5 [i_0 + 1] [i_1] [i_1]) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_0 - 1])))))));
                arr_13 [i_0] = ((/* implicit */short) ((((unsigned int) ((((/* implicit */int) (short)32753)) >= (((/* implicit */int) var_6))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0 - 1] [i_0])))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [13ULL] [13ULL] [i_1])) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(signed char)5] [i_0] [i_0] [i_0 - 1] [i_1])))));
                var_19 -= ((/* implicit */unsigned long long int) (unsigned char)247);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_24 [i_4] [i_4] [4ULL] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) >= (((unsigned int) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_6 [(unsigned char)1] [i_5] [(unsigned short)20] [i_5] [i_5] [18U]))) >= (((/* implicit */int) arr_14 [i_4])))))) : (var_13)));
                    arr_25 [6] [i_5] [i_5] [(short)4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) >= (arr_19 [i_5] [i_6])))))));
                }
                arr_26 [i_4] [i_5] = ((/* implicit */unsigned short) ((((((24U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_4]))))))) | (((/* implicit */unsigned int) (((~(((/* implicit */int) var_4)))) & (((/* implicit */int) ((_Bool) var_11))))))));
                var_20 = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_4])))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4]))) >= (var_5)))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */short) arr_2 [(unsigned char)11]);
                            arr_32 [i_4] [i_5] [i_7] [i_8] = ((/* implicit */unsigned short) ((((int) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_5] [1] [i_8 + 1])))))) >= (((/* implicit */int) ((((/* implicit */int) arr_22 [i_4] [i_5] [i_7] [i_8])) >= (((/* implicit */int) var_0)))))));
                            arr_33 [i_4] [1LL] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) 13U);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((long long int) (-(arr_2 [i_4]))))));
            }
        } 
    } 
}
