/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66918
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
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-13223))))) < (max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) (signed char)-1)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)83)) < (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) min(((unsigned short)22503), (((/* implicit */unsigned short) (signed char)48)))))))) : (((/* implicit */int) min((((_Bool) arr_0 [7LL])), (arr_3 [i_0 + 1])))))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min(((unsigned char)172), (((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (unsigned short)33252);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)81))))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)247)), (arr_5 [i_2]))))) : ((~(arr_6 [i_2] [12LL]))))) - (225U)))));
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)21))))), (((arr_6 [i_2] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)19337)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_9 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)244))))) ^ (max((arr_6 [i_3] [i_3]), (((/* implicit */unsigned int) var_2))))));
        var_19 ^= ((/* implicit */_Bool) arr_8 [(unsigned char)16]);
    }
    var_20 = ((/* implicit */unsigned char) var_6);
}
