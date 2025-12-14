/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80091
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_6))), (max((((/* implicit */unsigned long long int) var_13)), (var_8)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) ((unsigned long long int) 2072627209509595751ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) var_8))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) (_Bool)1)));
                var_14 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 1336020426U)) % (min((14224392749897880716ULL), (((/* implicit */unsigned long long int) 2958946869U)))))) % (10573576798592519866ULL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_16 [i_4] [18U] [i_4] [i_4] |= ((/* implicit */unsigned int) var_1);
                    var_15 = var_0;
                    var_16 += ((((/* implicit */_Bool) max((max((11594861712001915120ULL), (11594861712001915115ULL))), (((unsigned long long int) var_11))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (var_4)))))))));
                    var_17 += ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            {
                arr_21 [i_5] = ((/* implicit */unsigned long long int) ((4170243588U) >> (min((((unsigned int) (_Bool)0)), (((/* implicit */unsigned int) ((_Bool) (_Bool)1)))))));
                var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) var_10)) : (var_6)))) ? (((((/* implicit */_Bool) var_4)) ? (var_7) : (var_3))) : (min((((/* implicit */unsigned int) var_9)), (var_5))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_29 [i_9] [i_8] = ((/* implicit */unsigned int) ((var_6) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_10)))) ? (min((var_8), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) == (var_2))))))) - (3190871376ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (min((max((((/* implicit */unsigned long long int) var_10)), (var_0))), (((/* implicit */unsigned long long int) min((var_1), (var_9)))))));
                                var_20 *= ((((/* implicit */_Bool) ((((var_9) ? (var_0) : (var_6))) + (((unsigned long long int) var_4))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                                var_21 = ((/* implicit */unsigned long long int) var_12);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_11))));
                            }
                        } 
                    } 
                    arr_35 [i_9] [(_Bool)1] [i_9] = ((/* implicit */_Bool) min((((unsigned long long int) ((var_13) ? (var_6) : (var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (min((var_11), (var_2))))))));
                    arr_36 [i_7 + 1] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((var_3) & (min((var_2), (var_5))))) >> (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_0)))))));
                    var_23 -= ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
}
