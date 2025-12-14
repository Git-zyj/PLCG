/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6196
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
    var_12 = ((unsigned char) max((((/* implicit */int) (signed char)75)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */int) 4294967292U);
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_14 |= ((/* implicit */unsigned short) ((unsigned int) min((max((((/* implicit */int) (short)-8192)), (1345963639))), (((/* implicit */int) arr_4 [i_2] [i_2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_13 [i_1] [i_1 - 4] [i_1] [i_1] [i_2 + 1])))));
                                var_16 = ((/* implicit */_Bool) max((((int) (~(((/* implicit */int) var_9))))), (((/* implicit */int) (((-(((/* implicit */int) (short)-27165)))) < (((/* implicit */int) ((unsigned char) var_11))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) var_3);
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_18 ^= ((((((/* implicit */_Bool) ((arr_8 [i_7] [(unsigned char)16] [i_0]) ? (((/* implicit */int) (unsigned short)29140)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)50372)) ? (15508588283490686021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                                var_19 = ((/* implicit */short) arr_6 [i_1] [i_1] [i_1 + 4]);
                                arr_25 [5] [(unsigned char)12] [i_5] [i_6] [2] [2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1903228451687469736LL)) ? (((/* implicit */int) (unsigned short)21054)) : (((/* implicit */int) (signed char)119))))));
                                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) | (((/* implicit */int) (unsigned short)21069))));
                                arr_26 [i_0] [7LL] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_5] [i_1] [i_8] [14] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(arr_20 [i_1] [18U] [(short)1] [18U] [(short)1] [i_8 + 2])))), ((-(arr_5 [i_0] [i_1 - 1] [i_0] [i_0])))));
                                var_21 = ((unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_5 - 1]))))) ? (var_2) : ((+(((/* implicit */int) ((short) arr_12 [i_5])))))));
                    var_23 ^= ((/* implicit */short) ((min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) 4294967284U)), (-1903228451687469737LL))) | ((~(-1685097004877517835LL))))))));
                }
                arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_32 [i_1] [i_1] [14] [(short)18] [(short)18])) : (((/* implicit */int) max((((/* implicit */short) arr_27 [16] [i_0] [3U] [i_0])), (var_8)))))) - (8987)))));
            }
        } 
    } 
}
