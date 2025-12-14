/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81056
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
    var_12 = ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) | (2950901693738620318ULL))), (((/* implicit */unsigned long long int) (unsigned short)21910)))) : (max((((/* implicit */unsigned long long int) var_1)), (var_6))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_13 = min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16844))))), (max((arr_9 [i_1] [i_3]), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31)) >> (((15495842379970931297ULL) - (15495842379970931287ULL)))))));
                        var_14 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_4])))))));
                        var_16 &= ((/* implicit */short) (+(((/* implicit */int) var_5))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)47449)) ^ (((/* implicit */int) arr_0 [i_0 - 2]))));
                        arr_17 [i_5] [i_5] [i_1] [12ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [(unsigned short)6] [3] [i_0])) || (((/* implicit */_Bool) arr_4 [i_5])))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_6] [i_1] [i_2] [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_20 [i_0] [i_6 + 1] [(unsigned char)12] [11ULL] [i_2] [i_6])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)5910))))) : (arr_9 [i_0 - 4] [i_6])));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((unsigned long long int) ((((/* implicit */int) arr_7 [i_6 - 1] [(unsigned char)4] [i_1])) >> (((var_4) + (8511885055644059027LL))))))));
                        arr_23 [(unsigned short)7] [(unsigned short)7] [i_2] [i_6] [(unsigned short)7] [i_6] = ((/* implicit */unsigned char) arr_16 [i_6] [i_6] [i_6] [i_0]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_19 ^= var_11;
                        arr_26 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [12ULL] [12ULL] [i_0 - 2])) : (((/* implicit */int) var_8))))));
                        var_20 = ((/* implicit */unsigned long long int) min((max(((-(((/* implicit */int) arr_1 [i_7])))), (((/* implicit */int) arr_24 [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_2])))), ((+(((/* implicit */int) arr_14 [i_0] [i_0 - 2] [i_2]))))));
                        var_21 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_0 [i_0 - 3]))))));
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_30 [(unsigned short)2] [14] [i_8] [i_8] = ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)48684)) != (((/* implicit */int) (unsigned char)255))))));
                        var_22 = max((((arr_9 [i_0] [i_8]) % (((/* implicit */unsigned long long int) var_11)))), (((unsigned long long int) var_1)));
                    }
                    var_23 = var_2;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_9);
}
