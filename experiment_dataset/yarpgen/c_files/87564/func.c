/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87564
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [8ULL] = ((/* implicit */unsigned short) ((var_15) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2921974510476760274LL)) ? (-1) : (((/* implicit */int) (_Bool)1)))))));
                    arr_9 [i_0] [(unsigned short)5] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2])), (arr_2 [8ULL] [(unsigned short)10] [i_0 - 1])))) ? ((+(arr_4 [i_0] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2 - 3])))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)97))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) : (var_7)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_2 [i_0] [i_0 + 2] [i_2 + 1]), (var_6))))));
                }
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((arr_7 [i_0 + 1]) >> (((arr_7 [i_0 + 2]) - (9254274636869402851ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 2])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (4097781449692811134ULL))))))));
}
