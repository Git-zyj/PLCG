/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/910
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_1)))) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0] [i_0])))) ? ((+(arr_2 [i_0] [i_0]))) : ((((((-2147483647 - 1)) + (((/* implicit */int) arr_0 [i_0])))) + (((var_4) ? (arr_2 [(unsigned short)8] [(unsigned short)8]) : (((/* implicit */int) var_7)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [9ULL])) : (((6815407620162469596ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [1] = var_0;
        arr_10 [i_1] = ((/* implicit */unsigned short) ((var_1) <= (arr_2 [i_1] [i_1])));
        arr_11 [(_Bool)1] [i_1] = ((/* implicit */signed char) (+(var_1)));
    }
    var_10 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_16 [i_2])) ? (min((((/* implicit */unsigned long long int) var_4)), (11631336453547082025ULL))) : (((/* implicit */unsigned long long int) ((var_0) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)23952))))))))));
                    var_11 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
}
