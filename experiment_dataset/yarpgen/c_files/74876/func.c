/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74876
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
    var_11 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)26))))) : (min((((/* implicit */unsigned long long int) var_4)), (var_5)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) ((((int) min((arr_1 [i_0]), (arr_1 [i_0])))) > (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) arr_4 [i_0] [i_1 - 1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)110))));
                        var_13 = ((/* implicit */unsigned char) ((signed char) var_10));
                        arr_15 [i_3] [i_2] [(short)4] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))) * (-8105856157265390909LL)));
                    }
                    arr_16 [(signed char)17] [i_1] [i_2] = ((arr_9 [i_0]) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) | (arr_7 [i_0] [i_0] [i_0])))));
                    arr_17 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) (unsigned char)251)));
                    var_14 = ((/* implicit */unsigned long long int) ((short) arr_11 [i_0] [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 1] [17U] [i_1]);
                        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)7] [i_0] [(signed char)7])) ? (arr_21 [i_1] [i_1] [i_2] [11U] [i_0]) : (var_2)));
                    }
                }
            }
        } 
    } 
}
