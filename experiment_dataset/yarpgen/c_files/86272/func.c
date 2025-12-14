/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86272
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
    var_13 -= ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) max((((/* implicit */unsigned short) min(((signed char)127), ((signed char)112)))), ((unsigned short)42868))))));
        var_15 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)42881)))) % (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (arr_2 [(short)9])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1064511293) : (((/* implicit */int) var_8))));
            arr_12 [i_1] = ((/* implicit */short) (unsigned short)22658);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [(unsigned char)16] [(unsigned char)8]))))) : (((/* implicit */int) arr_9 [i_1 - 1] [(unsigned short)16]))));
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (short)(-32767 - 1));
            }
        }
        var_17 = ((/* implicit */unsigned char) (~(min((arr_8 [i_1 + 1] [i_1]), (((/* implicit */long long int) (signed char)(-127 - 1)))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    arr_25 [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) min((max((var_1), (-1LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1])))))));
                    var_18 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) (short)29591)), ((unsigned short)51842)));
                }
            } 
        } 
    }
}
