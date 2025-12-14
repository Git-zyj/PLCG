/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99046
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [20LL] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_6))))));
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (+(((((((/* implicit */_Bool) 56622591)) ? (((/* implicit */int) arr_2 [(short)9] [i_1] [i_0])) : (((/* implicit */int) var_10)))) - (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48641))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)30385))) : (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)54950))))))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_2] [i_4])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_7))))));
                                var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) -1854820230)) && (((/* implicit */_Bool) var_9))))), ((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))), (1558007422U)));
                            }
                        } 
                    } 
                    arr_11 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((1854820227) / (((/* implicit */int) (unsigned short)8160)))), (min((-1854820230), (-1854820230)))))) ? ((+(((((/* implicit */int) (unsigned short)58524)) & (((/* implicit */int) arr_0 [18ULL])))))) : (1854820229)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))))) ? (-966537158) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 850113792)) ? (((/* implicit */int) var_1)) : (-1854820224)))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18588))) / (var_0)))) ? (((((/* implicit */_Bool) (unsigned short)16870)) ? (((/* implicit */int) (unsigned short)48657)) : (((/* implicit */int) (unsigned short)63935)))) : (((/* implicit */int) ((signed char) (signed char)1)))))) ? (((/* implicit */int) (signed char)54)) : (var_11)));
    var_17 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)52124)))) * (((/* implicit */int) var_7)))), ((-(((/* implicit */int) min(((unsigned short)13412), (((/* implicit */unsigned short) (signed char)-64)))))))));
}
