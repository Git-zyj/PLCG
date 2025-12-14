/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89602
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (max((arr_2 [(signed char)14]), (arr_2 [(signed char)5]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2]))))) | ((+(((/* implicit */int) ((signed char) arr_6 [i_1 - 1])))))));
        arr_9 [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_17))));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_3] [i_2] = arr_10 [i_4] [i_2];
                    arr_17 [i_4] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_3] [21])) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)6] [i_3] [i_4]))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_3] [(signed char)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [(unsigned short)4]))) : (arr_10 [i_2] [i_2]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_3])) ? (arr_12 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [(signed char)0] [i_4]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_2] [(signed char)14] [i_2])))))))));
                    arr_18 [i_2] [(short)8] [i_4 - 1] [i_4 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((short) arr_13 [i_4 + 1] [i_4 + 2] [i_4 + 1]))) : (((/* implicit */int) arr_11 [(signed char)16] [18U]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_4)) : (var_2)))))));
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))) : ((((!(((/* implicit */_Bool) var_11)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
}
