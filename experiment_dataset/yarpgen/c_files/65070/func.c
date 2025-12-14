/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65070
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
    var_13 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2199023255552LL)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9097001873014036850LL)) ? (((/* implicit */long long int) 1854856443)) : ((-9223372036854775807LL - 1LL))))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((short) (short)-4972))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 12468441086517471236ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25442))) : (248048678U)))) : (((((/* implicit */_Bool) -1535843070723875867LL)) ? (7400771776874320357LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15872))))))), (((/* implicit */long long int) ((((_Bool) 2292736682U)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14022)))) : (min((1574247578), (((/* implicit */int) (signed char)-107)))))))));
                var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)4)))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-646634371371329703LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 4)), (3195196088U))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_4);
    var_17 = ((/* implicit */unsigned short) min((((var_4) << (((unsigned long long int) (short)8)))), (((/* implicit */unsigned long long int) max((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((2292736682U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)13120)))))))))));
}
