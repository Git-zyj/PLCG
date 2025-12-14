/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96534
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
    var_10 = ((/* implicit */unsigned int) (~(4007617889104171412ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((9222809086901354496LL) << (((((/* implicit */int) (unsigned short)2269)) - (2269)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_1);
        arr_4 [i_0] = ((/* implicit */int) (((((~(4007617889104171412ULL))) << ((((+(((/* implicit */int) (signed char)-69)))) + (75))))) & (((/* implicit */unsigned long long int) 1841373257U))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_1] = ((/* implicit */long long int) (((~(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (4294934528ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1959536340)) ? (((/* implicit */long long int) ((int) var_7))) : (arr_5 [i_2]))))));
                    arr_13 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2269))) : (2187818711U)))))));
                    arr_14 [i_0] = ((/* implicit */unsigned short) arr_6 [i_2] [i_2] [i_2]);
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((412689898), (((/* implicit */int) (signed char)4))))) ? (arr_9 [i_0]) : (((/* implicit */int) var_3)))));
    }
}
