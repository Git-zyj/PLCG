/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72408
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) max(((short)-18265), ((short)-10449)));
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 267386880U)) ? (((unsigned long long int) ((arr_0 [6LL] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */unsigned long long int) ((max((arr_0 [i_1] [i_1]), (((/* implicit */long long int) var_16)))) + (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                var_19 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1]) >> (((((/* implicit */int) var_6)) - (7947)))))), (((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_21 = var_1;
                            arr_19 [i_4] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((unsigned short) arr_17 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2]));
                    var_23 = ((/* implicit */unsigned char) ((long long int) arr_1 [i_6 + 2]));
                }
                var_24 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_18 [i_2] [2LL])) | (((/* implicit */int) arr_18 [i_2] [(signed char)0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) || (((/* implicit */_Bool) arr_16 [(unsigned short)10] [i_3] [i_3] [i_3] [4ULL])))))));
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3])))))));
            }
        } 
    } 
}
