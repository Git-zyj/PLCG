/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55495
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2 - 3] [1U] = ((/* implicit */unsigned int) (_Bool)1);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (unsigned short)34366))));
                            arr_12 [(unsigned char)9] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [(unsigned char)2] [i_0]);
                            arr_13 [i_3] [12ULL] [i_1] [i_0] [(unsigned short)21] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65534))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((12U) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_7 [(signed char)2] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_18 = (_Bool)1;
    var_19 = ((/* implicit */unsigned int) (unsigned short)31166);
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (2335549252U) : (arr_9 [2ULL] [i_4] [2ULL] [i_4] [i_4])))) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_6 [i_4] [5ULL] [(unsigned short)15] [i_4]))))), (2147418112ULL)));
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((_Bool) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_2 [i_4]))))));
    }
}
