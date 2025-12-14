/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57420
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
    var_20 = ((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_19))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_17)), (3185243608U))))))));
    var_22 = ((/* implicit */long long int) ((((long long int) ((unsigned short) var_10))) == (((/* implicit */long long int) ((/* implicit */int) max((((unsigned char) (signed char)50)), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-35)) == (((/* implicit */int) var_0)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_23 = max((min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_4 [i_0] [6LL] [6LL]))))), (arr_0 [i_1]))), (((/* implicit */int) (signed char)62)));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) var_2);
                            arr_13 [i_2] [i_0] [(signed char)9] [(signed char)9] [(signed char)9] [i_2] [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-26799)))) == (((((/* implicit */int) arr_11 [i_2] [(signed char)12] [i_4] [i_2] [i_4 - 1] [(unsigned short)9] [4LL])) >> (((arr_0 [i_4 + 1]) + (1705463998)))))));
                        }
                    } 
                } 
            } 
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1720)) ? (max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (((((/* implicit */int) (short)-26799)) + (((/* implicit */int) var_4)))))) : (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
    }
    var_25 = ((/* implicit */short) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
}
