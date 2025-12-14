/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98034
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
    var_13 = var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (signed char)26)))))));
                    arr_8 [(unsigned char)0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((var_3) ? (-156030437638448795LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)26))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (var_1))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1245292556U)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_0)))) : (((int) (signed char)127)))) : (((/* implicit */int) (!(var_9))))));
    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_12)) : (((long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)194)))))) : (3237500881U))))));
    var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((unsigned long long int) var_1))))));
}
