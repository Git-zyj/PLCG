/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58032
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (unsigned char)152))))) * (((/* implicit */int) (unsigned char)103)))))));
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)152);
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28354)) | (((/* implicit */int) (unsigned char)103)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_0 [i_0] [10ULL])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40305))) : (arr_1 [i_0]))))) > (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)25231)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)22188)))) ^ (((/* implicit */int) arr_2 [i_0])))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_8 [i_0 - 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_3 - 3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)152)) - (arr_5 [i_3] [i_3 - 1])))) : (min((((((/* implicit */_Bool) 1997262152)) ? (11095756782068787753ULL) : (16911158354608375337ULL))), (((/* implicit */unsigned long long int) ((18415812409929064527ULL) <= (15450205988215462295ULL)))))))))));
                        var_22 *= var_4;
                        var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1] [i_3]) : (((/* implicit */long long int) 1006632960))))) ? (((/* implicit */unsigned long long int) (+(arr_3 [i_2] [i_2])))) : (min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_3 - 1])), (var_0)))));
                    }
                    var_24 ^= ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_3 [i_1] [(unsigned char)10])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40678))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 16911158354608375340ULL)) ? (((/* implicit */int) (unsigned short)17321)) : (((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    } 
}
