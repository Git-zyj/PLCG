/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92296
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])) ? (-2147483647) : (((/* implicit */int) arr_6 [i_0] [i_1 - 2])))), (((((/* implicit */_Bool) max((var_7), (5ULL)))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) var_8))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) var_10);
                        var_15 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_1] [i_1 - 2] [i_1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)8)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_0]))) : (arr_12 [i_1] [i_1 - 2] [i_1] [i_1 - 2])))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551615ULL), (18014398509477888ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) / (arr_12 [(signed char)0] [i_1] [i_2] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))))))));
                        arr_17 [i_4] [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) (((~(arr_0 [i_0] [i_2]))) & ((~(var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_11 [i_0]) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 2813051592130486889LL)) ? (13ULL) : (((/* implicit */unsigned long long int) var_9)))))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */int) (unsigned char)134)) : (1178308447)));
    }
    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (106)))))))), (var_12)));
}
