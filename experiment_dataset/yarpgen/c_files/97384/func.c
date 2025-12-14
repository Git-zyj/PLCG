/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97384
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((unsigned long long int) max((var_7), (var_5)))), (max((7ULL), (((/* implicit */unsigned long long int) ((_Bool) 18446744073709551608ULL))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) (unsigned char)146))))) >= (((-2994681512113572564LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)19]))))))) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551613ULL))) ^ (max((var_2), (18446744073709551606ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned int) arr_0 [1LL])), (arr_1 [i_0]))))))));
        var_13 = ((/* implicit */_Bool) min((arr_2 [i_0]), ((-(max((9ULL), (((/* implicit */unsigned long long int) (unsigned char)2))))))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_8 [i_3 - 1] [9U]))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_3 + 2] [i_3 + 2]), (((/* implicit */unsigned int) arr_5 [i_3 + 2]))))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_3 + 2]))) : (((/* implicit */int) ((signed char) arr_5 [i_3 + 1])))));
                    arr_13 [(signed char)22] [i_1] [i_1] [i_1] = arr_4 [i_1];
                }
            } 
        } 
        arr_14 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((int) ((_Bool) 18446744073709551598ULL)))));
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((_Bool) arr_5 [i_1])));
    }
}
