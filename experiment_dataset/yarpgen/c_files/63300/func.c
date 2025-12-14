/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63300
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
    var_13 = (-((+(((2130706432U) + (4183103916U))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)45356)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19)))))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2097151)) && (((/* implicit */_Bool) -1307953371)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) -1477143704)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 += 3013338531U;
                                var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65517)) ? (3013338531U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32256))))) <= (0U))))) / (((((var_12) != (((/* implicit */long long int) var_4)))) ? (min((((/* implicit */long long int) var_5)), (4836756037604478579LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32265))))))))));
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_0] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1799753362)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-1LL)))) ? ((~(((/* implicit */int) (unsigned short)43956)))) : (((/* implicit */int) (unsigned short)46390))))) >= (((unsigned long long int) ((1477143699) == (((/* implicit */int) (unsigned short)10572)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) -1)), (min((((/* implicit */unsigned int) 1477143679)), (4276279752U)))));
}
