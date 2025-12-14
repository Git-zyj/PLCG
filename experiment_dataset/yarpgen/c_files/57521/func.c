/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57521
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) (short)-7091)), (4461559264736727724ULL))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-26))))), (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-12019)) ? (((/* implicit */int) (_Bool)1)) : (0))))))));
    var_15 ^= ((max((((((/* implicit */_Bool) 4578165512815774869ULL)) ? (-4) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_11)))))) & (((/* implicit */int) var_12)));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((signed char) min(((_Bool)1), (((5) < (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_3 [i_1])))))))), (max((((/* implicit */unsigned long long int) (+(14)))), ((~(4578165512815774869ULL)))))));
                    var_18 -= ((/* implicit */long long int) ((((((4578165512815774854ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [2U] [i_1] [i_1] [i_2])), (3213753200U)))))) ? (((/* implicit */int) ((_Bool) 13))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) >> (((3213753200U) - (3213753199U)))))))))));
                }
            } 
        } 
    } 
}
