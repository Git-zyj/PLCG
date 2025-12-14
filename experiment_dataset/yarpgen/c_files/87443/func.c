/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87443
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
    var_13 = ((/* implicit */short) max((var_12), (((((/* implicit */_Bool) 3770647208U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (837088954U)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_2] [i_1] [14] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 837088954U)) ? (((((/* implicit */int) ((_Bool) 621869380))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21560))) >= (8804977383523716838ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_0])))))));
                        arr_12 [i_0] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -5476679012630373040LL)), (2ULL))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */short) max(((((_Bool)1) ? (144115188074807296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31716))))), (((/* implicit */unsigned long long int) (unsigned short)6))));
                        var_14 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    arr_16 [(unsigned short)4] [i_1] [(unsigned short)4] |= ((/* implicit */_Bool) -534044732972949998LL);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((var_0) / (((/* implicit */long long int) var_12)))))))));
}
