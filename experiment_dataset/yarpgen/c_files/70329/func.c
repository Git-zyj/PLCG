/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70329
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
    var_14 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((-2147483647 - 1)) | (-2147483635))))));
        arr_2 [1ULL] = ((/* implicit */int) arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0 + 1] [i_0 + 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (-2147483635))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned long long int) -151874958)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5))))))));
            var_16 = ((/* implicit */unsigned char) arr_4 [i_2]);
        }
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-151874975) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (var_6) : (var_10)))))) || (((/* implicit */_Bool) ((unsigned int) 10424124657297581535ULL))))))));
        var_18 *= ((/* implicit */unsigned int) var_10);
        arr_11 [(_Bool)1] = ((/* implicit */unsigned short) var_8);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        var_19 *= ((/* implicit */unsigned short) ((_Bool) var_10));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_21 [i_4] [i_4 - 1] [(short)3] = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) arr_19 [i_3] [i_3] [i_4] [i_5])));
                    arr_22 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4 + 4] [i_5 - 1])) ? (((/* implicit */int) arr_14 [i_4] [(unsigned short)2] [i_4])) : (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */signed char) (-(1962197230)));
                                arr_28 [i_4] [4ULL] [i_5] [4ULL] [i_4] = ((/* implicit */unsigned int) ((arr_19 [(_Bool)1] [i_3 + 1] [i_4 + 1] [i_6 + 1]) ^ (((/* implicit */unsigned long long int) arr_23 [i_3 + 2]))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [14ULL] [i_5 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((unsigned short) var_7)))));
                }
            } 
        } 
    }
}
