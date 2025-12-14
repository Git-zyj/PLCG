/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88879
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */unsigned long long int) (unsigned char)218);
                var_12 = ((/* implicit */_Bool) (unsigned char)37);
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0])), (arr_2 [i_0] [(unsigned short)4] [i_0 + 1])))) << (((((/* implicit */int) (unsigned char)137)) - (134)))))) ? (((((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [(unsigned short)3]), (((/* implicit */unsigned short) (signed char)2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (var_1))) : (((/* implicit */long long int) (+(var_4)))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (unsigned char)137)), (((var_3) ? (((/* implicit */unsigned int) arr_0 [i_0] [(unsigned short)6])) : (var_4))))), (((/* implicit */unsigned int) (signed char)-35)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) 3856589632826531143LL)) ? (((/* implicit */int) (short)17)) : (((/* implicit */int) (_Bool)1)))))));
                    var_16 = ((/* implicit */unsigned long long int) var_2);
                    var_17 &= ((/* implicit */signed char) ((unsigned int) (signed char)16));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_4]))))) + (max((3856589632826531143LL), (((/* implicit */long long int) (_Bool)0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2251799813685247ULL))))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_2] [i_2] [i_4] [i_4 - 1])), (min((((/* implicit */unsigned char) var_8)), ((unsigned char)124))))))));
                }
            } 
        } 
    } 
}
