/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85707
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (+(min((min((5135253447984791279LL), (((/* implicit */long long int) (signed char)-105)))), (((/* implicit */long long int) ((2485938449U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))))));
    var_17 = ((/* implicit */short) (+(max((var_7), (max((((/* implicit */int) var_13)), (var_2)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)160)))), (((int) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) (+(var_7)));
                    arr_10 [i_0] [11LL] [i_1] [i_1] = (+((+(arr_5 [i_1 + 1]))));
                    arr_11 [i_1] [i_1] [i_1] [(unsigned char)9] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_1])) : (var_4))) : (((int) arr_7 [i_2] [i_1] [i_1] [(unsigned short)16])))));
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (short)-9278);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_22 [i_3] [8] [i_4] [i_5] [8] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_18 [i_4] [i_4] [i_5] [i_6]), (((/* implicit */unsigned short) var_9)))))));
                        arr_23 [i_5] [i_4] [i_5] [i_5] [i_4] [i_3] = ((/* implicit */int) ((short) ((((int) 0LL)) ^ (max((((/* implicit */int) var_1)), (var_10))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [(unsigned short)8] [i_3] [i_3] [i_3])) / (((/* implicit */int) var_13))));
    }
    var_19 |= ((/* implicit */signed char) var_9);
}
