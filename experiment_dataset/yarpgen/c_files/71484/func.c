/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71484
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (-(var_10)));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 7428564787123734009ULL));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_3])))) : (arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_3 + 1] [i_1 + 4])) & (((/* implicit */int) arr_5 [i_3 + 2] [i_1 + 1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_13 [i_4] [i_4]))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5] [i_1] [i_3] [i_1] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0]))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (unsigned char)84))))))));
                                var_21 += ((/* implicit */unsigned char) ((arr_11 [i_0] [i_0] [i_0] [i_5]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [(unsigned char)0] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) arr_14 [(unsigned char)3] [i_1] [i_3] [(signed char)3] [i_5]))))) ? (arr_4 [i_1] [i_4]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)217))))))))));
                                var_22 = ((/* implicit */signed char) ((unsigned char) (signed char)20));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_8))))))))) * (((((/* implicit */_Bool) 734231205U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (11842739360951007154ULL)))));
                }
                for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) (short)-19511))));
                    var_25 ^= ((/* implicit */unsigned char) -3051321479126940420LL);
                }
            }
        } 
    } 
    var_26 -= ((/* implicit */long long int) var_6);
}
