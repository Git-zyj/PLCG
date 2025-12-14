/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61062
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (unsigned short)9044)) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0])) > (646731232U)))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (16646144) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (unsigned short)42837)), (var_6)))))) : (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-17)))))))));
        var_17 = min((max((arr_2 [i_0]), (((/* implicit */int) (signed char)(-127 - 1))))), (arr_2 [i_0]));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) == (var_5))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1080754588)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)27))))) : ((-9223372036854775807LL - 1LL))))), (((28ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52)))))));
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_8 [i_2] [i_2] [(unsigned short)14]);
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1510860373)), (arr_7 [i_1 - 1] [i_1] [i_1 - 1])))) ? ((+(arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1]))) : (((unsigned long long int) arr_5 [i_1 - 2]))));
                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (((/* implicit */int) arr_6 [i_1 - 3])) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) arr_8 [i_2] [i_2] [i_1 - 1]))))));
            }
        } 
    } 
}
