/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80172
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
    var_11 *= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned short)508)), (max((((/* implicit */unsigned int) (signed char)86)), (64512U))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)180)), (min((((/* implicit */unsigned short) (unsigned char)53)), ((unsigned short)65535))))))));
    var_12 = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) var_0)), (11074317044346680529ULL))), (((/* implicit */unsigned long long int) max((var_9), (var_9)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), (var_5)))), (max((11794604773401503199ULL), (((/* implicit */unsigned long long int) var_10))))))));
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_9), (var_9)))), (max((569891134U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))), (max((max((((/* implicit */unsigned long long int) (signed char)127)), (444880002442424917ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (var_7))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (_Bool)0)), (var_7))), (((/* implicit */long long int) max((arr_4 [i_2] [1LL] [1LL] [1LL]), ((signed char)-83))))))), (max((max((var_8), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2] [i_2])))))))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) arr_2 [i_2] [14ULL] [i_0])), (var_8))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) var_5))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_6 [i_0] [1U] [1U] [1U])))), (min((((/* implicit */unsigned int) arr_0 [i_0])), (4294967285U)))))))))));
                }
            } 
        } 
    } 
}
