/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85903
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
    var_17 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [15LL] = ((/* implicit */short) (signed char)-3);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [10] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) var_15);
                                var_18 *= ((((((/* implicit */_Bool) (signed char)-70)) ? (-9007883666359383473LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) < (max((((/* implicit */long long int) (signed char)70)), (var_2))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (9007883666359383473LL)))) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (signed char)-70))))) : (((var_14) + (((/* implicit */int) (signed char)-70))))));
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1 - 1] [20ULL] [i_0] [i_7] |= ((/* implicit */short) 4294967295U);
                                var_20 = ((/* implicit */long long int) min((var_20), (max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)70)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2941653030U)))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) % (var_11)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
