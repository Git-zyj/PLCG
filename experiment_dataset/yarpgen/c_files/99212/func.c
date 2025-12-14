/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99212
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
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) arr_3 [(signed char)6] [i_0]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [11LL]))) == (arr_2 [i_0] [i_1]))))) & (var_6)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_1]) < (arr_4 [i_2]))))) > (4294967295U)));
                        arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22939))) : (8378606345363204050LL)))) % (var_6)))));
                    }
                    var_20 = ((/* implicit */signed char) (((-(arr_0 [i_0]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1] [i_1] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8815)) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) arr_7 [i_0] [i_1] [10ULL])) ^ (arr_9 [i_0] [i_0] [i_0] [i_1] [i_2]))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_3))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((4714912164799487731ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))) | (((((/* implicit */unsigned long long int) 8336737437704466879LL)) + (4714912164799487731ULL))))) : (((/* implicit */unsigned long long int) 1145729101U))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8336737437704466879LL)) ? (((/* implicit */long long int) (+(arr_13 [i_0] [i_1] [i_4])))) : (((arr_0 [i_5]) << (((((/* implicit */int) (unsigned char)240)) - (240)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */short) -416236125);
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (unsigned char)23))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [(unsigned char)6] [i_1] [(unsigned char)6])) * (((/* implicit */int) arr_7 [i_1] [i_4] [i_5]))))) - (((((/* implicit */_Bool) ((-1LL) | (arr_20 [i_0] [(short)14])))) ? (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_17 [i_5]))));
                    }
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_5 [i_0]))));
                }
            }
        } 
    } 
}
