/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93118
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [6LL] [(_Bool)1] [i_0] [6LL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL)));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)75))))), (arr_1 [i_2 - 1] [i_2 - 1]))), (min(((-(12718093269129723126ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)20])))))))));
                    }
                    arr_13 [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_14 [i_2] [(unsigned char)10] [i_1] [i_2] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                    arr_15 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [5LL] [i_1])) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (short i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            {
                arr_21 [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)85)), (1U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
                arr_22 [i_5 - 1] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-68)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_0);
}
