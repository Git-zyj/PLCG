/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59466
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
    var_15 ^= ((/* implicit */unsigned long long int) ((((var_6) + (2147483647))) >> (((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [(unsigned char)13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) | (arr_6 [i_2 - 1] [i_1] [(_Bool)1] [i_0])))) : ((~(arr_5 [i_0])))))));
                    arr_11 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned int) arr_9 [i_0]))))) ? (((/* implicit */unsigned long long int) var_9)) : ((+(arr_5 [i_2 - 1])))));
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_2 [i_2]))))) != (arr_1 [i_2 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) arr_4 [i_2] [i_1]);
                        var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                        var_19 += ((/* implicit */unsigned int) min((max((arr_8 [i_3 - 4] [i_3 + 1] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_13 [i_2 - 1] [(_Bool)1] [i_3 - 2] [i_2 - 1] [i_1] [i_1])))), (arr_8 [i_3 - 3] [i_3] [i_0] [i_0])));
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_20 *= ((/* implicit */short) ((max((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))), (min((var_9), (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_2 - 1] [14ULL])))))) << (((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_0 [i_0] [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_2] [i_2])))))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [12ULL] [i_2 - 1] [i_4 + 1])) - (((/* implicit */int) arr_15 [i_1] [i_2 - 1] [i_2 - 1] [i_4 + 1]))))), (min((((/* implicit */unsigned long long int) var_7)), (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2] [6U] [i_4 - 2])) ? (((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))))) : (min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_6)))))), (arr_16 [i_4] [i_0] [i_0])));
                    }
                }
            } 
        } 
    } 
}
