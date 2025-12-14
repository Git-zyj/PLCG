/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91143
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
    var_19 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)33)))) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_14))))))));
    var_20 ^= ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) min((var_6), (var_5))))))), (max((min((((/* implicit */int) var_16)), (var_12))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((271301708258269400LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57195)))))) ? (((((/* implicit */_Bool) (short)-32027)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)18000)))) : (((/* implicit */int) ((-4303375930734984304LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))))), (((/* implicit */int) (short)-11130))));
                            arr_9 [i_3] [11LL] [i_1] [11LL] [i_1] [11LL] = ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) ^ (0ULL))), ((~(arr_4 [2ULL] [2ULL] [i_2] [i_2]))))));
                            var_22 = ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [9ULL] [i_1] [8ULL] [i_2] [9ULL] [9ULL])) && (((/* implicit */_Bool) -4480048214899561022LL))))))) >= (min((arr_2 [i_3] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_2])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0])) < (arr_8 [(unsigned short)0] [(unsigned short)21] [i_0] [(unsigned short)21] [(unsigned short)21]))))));
                arr_10 [i_0] [i_1] [(signed char)8] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 1324419330U)) <= (4667636883647956276ULL))) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [(short)6] [(_Bool)1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (short i_5 = 4; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    arr_19 [i_4] [i_5] [i_6] = arr_18 [i_4];
                    var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_5] [i_5] [(unsigned short)7] [i_6])) || (((/* implicit */_Bool) 7148624815647145199LL))))) % (((/* implicit */int) arr_12 [i_4]))))));
                    var_25 *= ((/* implicit */unsigned int) ((min((max((((/* implicit */long long int) arr_6 [i_4])), (-3761993266819895531LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [8U] [i_4]))) ^ (4294967295U)))))) << (((/* implicit */int) arr_14 [i_4] [i_4] [i_4]))));
                    arr_20 [2U] [i_5] [i_6] [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [3LL] [i_5] [3LL])) ? (((((/* implicit */long long int) arr_7 [i_4] [i_4] [i_5] [i_6] [2] [23U])) - (32767LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_4])))))))) >= (arr_1 [i_5])));
                }
            } 
        } 
    } 
}
