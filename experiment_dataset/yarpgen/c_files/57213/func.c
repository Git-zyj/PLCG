/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57213
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((unsigned char)15), (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55341)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) * (arr_1 [i_2 - 1]))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -1462631870587125935LL)) ? (-4694268461502120735LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17513))))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))))));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned short) (+(min((arr_3 [i_1 + 3] [i_2 - 1]), (arr_3 [i_1 - 2] [i_2 + 1])))));
                    arr_9 [i_2] = ((/* implicit */long long int) ((((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 3]))))) <= (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 2LL)) && (((/* implicit */_Bool) (unsigned short)40453))))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (var_14)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 2])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-117))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) < (7806887474738364212ULL))))));
}
