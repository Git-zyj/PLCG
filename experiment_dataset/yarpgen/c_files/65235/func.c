/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65235
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
    var_14 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) + (var_6))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (max((((/* implicit */unsigned long long int) 5997770049719692571LL)), (16988974468149476802ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((max((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1 + 1]) : (arr_2 [2] [i_1 + 1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [16ULL] = ((/* implicit */int) var_4);
                    arr_9 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((-1LL) ^ (var_1)))) : (((arr_2 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) << ((((~((~(arr_7 [i_1] [i_1 + 1]))))) + (619357467)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((-1LL) ^ (var_1)))) : (((arr_2 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) << ((((((~((~(arr_7 [i_1] [i_1 + 1]))))) + (619357467))) + (578617121))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_3);
    var_17 = var_0;
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */int) (((((~(var_8))) & (var_13))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23510)) & (((/* implicit */int) var_0)))))));
                            arr_18 [i_3] [i_4] [7] [i_4] = ((/* implicit */signed char) arr_12 [i_5]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))) == (arr_11 [i_4]))))));
                var_20 = ((/* implicit */unsigned short) ((var_8) | (((/* implicit */unsigned long long int) -179331070))));
                var_21 ^= ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
