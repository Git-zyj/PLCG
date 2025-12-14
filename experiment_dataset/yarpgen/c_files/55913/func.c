/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55913
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((var_6) - (((/* implicit */unsigned long long int) var_3))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((((_Bool)0) ? (arr_3 [i_0]) : (arr_3 [9ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) arr_1 [i_0])))))))))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_5) : (((/* implicit */unsigned int) arr_9 [i_0] [4ULL] [i_1] [i_2])))))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) | (var_8)))), (((((/* implicit */_Bool) (signed char)108)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (7941283108866780285ULL)))))));
                    var_13 = ((/* implicit */long long int) var_3);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((signed char) 18446744073709551615ULL));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_14 = arr_13 [i_3] [i_3];
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_6] [i_4 - 1] [3] [i_6])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_4 - 1] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_4))));
                        var_15 = ((/* implicit */signed char) ((int) arr_19 [i_4 + 1] [i_4 - 1]));
                        arr_24 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((var_3) * (arr_22 [i_5] [i_4] [i_3] [i_6]))) > (((unsigned int) var_8))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned int) var_4);
        }
        arr_25 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)10)) + (((/* implicit */int) var_4)))) != (((/* implicit */int) arr_12 [i_3]))));
    }
    var_17 = ((/* implicit */_Bool) var_5);
}
