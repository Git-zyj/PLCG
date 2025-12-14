/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55299
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) == (2147483648U)))), ((+(var_0)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [8U] [i_0] [9LL] [i_0 + 2] = ((/* implicit */unsigned long long int) arr_12 [i_0 + 4] [(signed char)13] [i_2 - 1] [i_3 + 1]);
                                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (16368U) : (824831246U)))) ? (3743843251750274736ULL) : (((/* implicit */unsigned long long int) arr_14 [i_3 - 2])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)10]))))))));
                            }
                        } 
                    } 
                } 
                var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) (short)-20253)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (824831246U)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((unsigned int) var_2));
    var_14 = ((/* implicit */short) ((4186736146323399509LL) < (((/* implicit */long long int) 262144))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))));
}
