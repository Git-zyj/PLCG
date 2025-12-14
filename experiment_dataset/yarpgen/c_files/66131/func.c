/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66131
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((var_8) ^ (36021298U)))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [(signed char)10] [i_1] [i_1] [i_0] &= ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))) > (arr_2 [(signed char)10]))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_4]);
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14485)) || (arr_4 [i_2 - 1] [i_1] [i_2 + 1])));
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [5U] [i_0] = ((unsigned char) arr_4 [i_2 - 3] [i_1] [i_2 - 3]);
                            var_19 = ((/* implicit */unsigned long long int) var_5);
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_1] [i_3] [(signed char)11] [i_1] [(_Bool)0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 3])) >> (((((/* implicit */int) arr_9 [i_2 - 2] [i_1] [i_2 - 1] [i_2 - 3] [i_2 - 1])) - (9208))))) % ((~(((/* implicit */int) (unsigned short)14485))))))) : (((/* implicit */short) ((((((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 3])) >> (((((((/* implicit */int) arr_9 [i_2 - 2] [i_1] [i_2 - 1] [i_2 - 3] [i_2 - 1])) - (9208))) - (2985))))) % ((~(((/* implicit */int) (unsigned short)14485)))))));
                            arr_21 [i_1] = ((/* implicit */_Bool) (+(((arr_13 [i_1] [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 2]) % ((~(var_7)))))));
                        }
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_2))));
                    }
                    var_21 = ((/* implicit */signed char) ((short) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)38685))))), (((((/* implicit */_Bool) 6436683887719076279LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_22 = ((/* implicit */short) (+(arr_25 [i_6] [i_7] [i_7])));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_7]))))) <= (((/* implicit */int) (unsigned short)51050))));
        }
        var_24 = (-((~(arr_22 [i_6] [i_6]))));
    }
    for (signed char i_8 = 1; i_8 < 15; i_8 += 4) 
    {
        arr_29 [i_8] = ((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) (-(4258945997U)))));
        arr_30 [i_8] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) min((arr_28 [i_8]), (var_3)))))));
        var_25 = ((/* implicit */long long int) ((((var_2) ^ (((/* implicit */unsigned long long int) max((arr_1 [i_8]), (((/* implicit */unsigned int) arr_28 [i_8]))))))) >> (((var_8) - (3982704861U)))));
    }
}
