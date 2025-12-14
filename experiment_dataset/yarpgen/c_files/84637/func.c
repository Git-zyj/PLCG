/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84637
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_7);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)55))))) && (((/* implicit */_Bool) ((short) (signed char)55)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (signed char)50);
        var_12 = ((/* implicit */int) min((var_12), ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)57518))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1069735408U)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (max((var_8), (((/* implicit */unsigned short) (signed char)57))))))) : ((-(((/* implicit */int) arr_7 [i_1]))))));
        var_13 = ((/* implicit */long long int) arr_6 [(_Bool)1]);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -517707590)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -63703935755310897LL)) ? (((/* implicit */long long int) 3018689875U)) : (3752877519804640807LL)))) && (((((/* implicit */_Bool) (unsigned short)53968)) && (((/* implicit */_Bool) arr_0 [i_1])))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4194304)) ? (-3752877519804640808LL) : (((/* implicit */long long int) var_11)))))))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)83))))))) || (((/* implicit */_Bool) var_0))));
}
