/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79237
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
    var_18 = ((/* implicit */unsigned int) max((max((min((((/* implicit */long long int) var_17)), (1339415670313466034LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1127112154410965398ULL))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7092435996102364241LL)) ? (17478398655454014226ULL) : (18446744073709551615ULL)))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 379282672))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) 18092012826720467339ULL)) ? (((var_16) ? (2147483647) : (((/* implicit */int) (short)-20903)))) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((long long int) ((unsigned long long int) (unsigned short)19103))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-30)))), (((((/* implicit */_Bool) (short)-12989)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (signed char)62)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) 13482390477266899146ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((long long int) arr_3 [20] [i_1] [(_Bool)1]))))) : (1770251444U))))));
                    arr_9 [i_0] [i_0] [7ULL] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) 1949827925)), (16565869068806751788ULL)))));
                }
            }
        } 
    } 
}
