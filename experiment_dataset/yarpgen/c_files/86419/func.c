/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86419
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((664960790), (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36350))))) : (max((((/* implicit */unsigned int) (unsigned short)36359)), (var_9)))))) ? (((/* implicit */int) (unsigned short)29182)) : (((/* implicit */int) var_1))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((664960790), (((/* implicit */int) (unsigned short)29186))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)0)))))) : (min((((/* implicit */unsigned int) var_1)), (var_9)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(signed char)7] [i_1] = ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned int) ((int) arr_3 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_10 [18U] [i_3] &= ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_0])))))));
                            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_6)))) == (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)85), (((/* implicit */unsigned char) var_1))))))))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36364)) || (((/* implicit */_Bool) var_3))))), ((~(((/* implicit */int) var_3)))))) / (((/* implicit */int) ((unsigned char) min(((unsigned short)4), (var_3))))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */int) (signed char)71)), (var_8))), ((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)29171))))))) ? (((/* implicit */int) min((arr_3 [i_1] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_0])))) : ((-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
}
