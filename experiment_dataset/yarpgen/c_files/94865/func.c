/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94865
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
        var_18 = ((/* implicit */unsigned char) max((((unsigned long long int) ((((((/* implicit */int) (signed char)-2)) + (2147483647))) >> (((((/* implicit */int) var_0)) + (24007)))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) / (((/* implicit */int) max((var_3), (((/* implicit */short) arr_1 [i_0]))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1])))) : (((-1LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
            var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_9)) / (31))));
        }
        for (short i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            arr_9 [i_0] [i_0 - 1] = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_7 [i_2 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */int) (short)21049))))) : (((var_15) - (var_15)))))));
            arr_10 [5ULL] [i_2 + 3] [5ULL] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (signed char)-125)), (1023041886U)))));
        }
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            var_21 = ((/* implicit */int) min((max((((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) min(((unsigned short)9020), (((/* implicit */unsigned short) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0]))), ((-(1023041903U))))))));
            arr_13 [i_3 - 1] = ((/* implicit */int) ((short) min((max((((/* implicit */long long int) arr_8 [(signed char)7] [4LL] [6LL])), (var_2))), (((/* implicit */long long int) max((1023041864U), (495767049U)))))));
        }
    }
    var_22 ^= ((/* implicit */short) (-((-(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))))));
}
