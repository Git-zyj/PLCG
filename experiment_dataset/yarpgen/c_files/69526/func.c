/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69526
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) arr_1 [i_0] [i_1]))))))), (((unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) 1726477073U)) : (4611686018427383808LL)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) 941826773)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-84))))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)53)))))));
                    var_15 = max((((int) arr_0 [i_0])), (((int) arr_0 [i_0])));
                    var_16 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) -4611686018427383809LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (max((((/* implicit */unsigned int) (_Bool)0)), (arr_4 [i_0]))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)50))) ? (var_7) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                    var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))) * (((unsigned int) arr_0 [i_3])));
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)90)))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) var_3)), (var_4))) > (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)64)), (941826785)))))))));
    var_21 = ((/* implicit */long long int) (-((+((~(var_7)))))));
}
