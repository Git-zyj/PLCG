/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64722
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) var_0);
                    var_14 = (signed char)-42;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17113228468029691841ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (var_2)));
                                var_16 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */long long int) ((arr_2 [i_0]) <= (((/* implicit */int) var_12))))), ((+(-4275110668604922723LL)))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (max((((((/* implicit */int) (unsigned short)14774)) * (((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_11)))))) : (((/* implicit */int) (unsigned short)50747)))))));
                                var_18 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 456059165935157622LL)) ? (3840181425232657868ULL) : (((/* implicit */unsigned long long int) 2010435313U))))) ? (max((((/* implicit */unsigned long long int) var_7)), (var_2))) : (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_4 - 1] [i_2] [i_4] [i_4 - 2] [i_4 - 3])))), (((((/* implicit */_Bool) ((18446744073709551599ULL) >> (((15992258782236535100ULL) - (15992258782236535057ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_0])))))) : (var_5)))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (0ULL)));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1 + 3] [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */long long int) var_8);
}
