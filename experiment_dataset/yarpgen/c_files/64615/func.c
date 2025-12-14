/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64615
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-5))))) ? (((((_Bool) 3ULL)) ? (((7842941756867921562ULL) - (((/* implicit */unsigned long long int) -1819858286)))) : (min((3ULL), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-91)) + (((/* implicit */int) (signed char)12)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_15))));
                                arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1819858269)) ? (((/* implicit */unsigned int) 0)) : (3452156513U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (-(((/* implicit */int) (signed char)80)))))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)28286)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1819858286)) >= (320472877071497183LL)))))))));
        arr_13 [i_0] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) var_1)), (max((18446744073709551602ULL), (18446744073709551601ULL)))))));
        var_22 = ((/* implicit */unsigned char) var_0);
    }
    var_23 |= ((/* implicit */int) (signed char)(-127 - 1));
}
