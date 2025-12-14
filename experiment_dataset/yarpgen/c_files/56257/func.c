/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56257
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2ULL]))) <= (var_2)))) | (((((/* implicit */_Bool) arr_0 [4LL])) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) arr_0 [0]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = (((((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) min((arr_0 [i_0]), ((unsigned char)18)))) : (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) arr_3 [i_0] [i_0 + 2])));
                    arr_7 [i_2] [i_0] [i_0] [i_1] = arr_3 [i_0] [i_1];
                    arr_8 [i_2] [i_0] = ((_Bool) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0] [i_0 - 1])) : (((unsigned long long int) var_14))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned char) 18446744073709551612ULL)), (((/* implicit */unsigned char) ((16533798672626970558ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) || (((/* implicit */_Bool) min((min((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (1885781001U)))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((3077851396977642106LL), (((/* implicit */long long int) (unsigned char)15)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((+(arr_11 [i_3] [i_3]))) >= (((/* implicit */unsigned long long int) min((7687989534491849788LL), (((/* implicit */long long int) (unsigned char)22))))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (536870911ULL)));
        arr_12 [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) (unsigned short)30185))))) : (min((13365093806177080815ULL), (18446744073709551612ULL)))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_14), (var_6)))) ^ ((+(((/* implicit */int) (_Bool)0))))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_1)))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))));
}
