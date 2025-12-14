/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85814
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-33)) + (2147483647))) << (((((/* implicit */int) (signed char)16)) - (16))))))));
    var_14 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (7058744877691064915ULL))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (11387999196018486701ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_11)))) >> (((((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1)))) - (82))))) | (((((/* implicit */int) (signed char)63)) - (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_1 - 1] [i_1] [(_Bool)1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)82)))) >= (((/* implicit */int) ((arr_3 [i_0]) > (var_11)))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (10404491412585991873ULL))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [7ULL]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) <= (((arr_3 [i_1]) ^ (15720571008698126522ULL)))))) >> (((((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1)))) << (((((arr_5 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (6587264113920654320ULL))))))))));
            }
        } 
    } 
}
