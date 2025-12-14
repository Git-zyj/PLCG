/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80628
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2251795518717952ULL) : (4294934528ULL)))) ? (((/* implicit */unsigned long long int) max((36028796985409536LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (var_11))))))) : (((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */unsigned long long int) ((var_9) ? (var_1) : (((/* implicit */int) var_2))))) : (arr_0 [i_0 + 1])))));
                    var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = var_5;
    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((+(18446744069414617077ULL)))));
    /* LoopSeq 1 */
    for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
    {
        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) 9007198986305536ULL)) ? (4294934526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_3] [i_3 - 2] [i_3])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 267911168U)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) min(((unsigned short)2048), ((unsigned short)2048)))) : (((/* implicit */int) min(((signed char)4), ((signed char)96))))))));
                    arr_15 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) ((arr_12 [i_3] [i_3] [i_3]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32740)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_5]))))) : (((long long int) arr_13 [i_3] [i_4 - 1] [i_4] [i_5])))));
                }
            } 
        } 
    }
}
