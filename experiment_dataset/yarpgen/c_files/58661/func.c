/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58661
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_2] [1ULL] [i_4]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_7), (3407557069391940701ULL)))))) ? (((/* implicit */int) ((short) var_18))) : ((+(((/* implicit */int) (signed char)-62))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [(unsigned short)9] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((var_0) - (15264634190559228957ULL))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) ((signed char) 4110500047156976444ULL))) : ((-(((/* implicit */int) var_2)))))) - (55)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_19 [3ULL] [i_1] [i_6 - 1] [i_5] [i_6 + 2] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_6 + 1])))));
                                var_21 = ((/* implicit */int) ((short) (-(-1241371268))));
                                arr_20 [6ULL] [6ULL] [i_2 + 1] [6ULL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_2))))))) / (var_16)));
                                arr_21 [i_2] [i_1] [i_1] [i_5] [(unsigned short)7] [i_0] [i_6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_17 [i_6 - 1] [i_5] [i_2 - 2] [i_0])))), (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_2);
}
