/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84041
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    arr_9 [i_0] [13U] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_2] [i_2 - 1] [i_2 - 1])), ((unsigned char)121))))));
                    var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)62985)) ? (((((/* implicit */_Bool) (unsigned short)24702)) ? (arr_7 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62985))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-96), (((/* implicit */signed char) (_Bool)1))))))))));
                }
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) 17179869183LL)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (4294967295U) : (3277680075U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 35184372088831LL))))))))) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                var_16 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)46))))), ((unsigned short)2569));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned short)62979))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((((((/* implicit */_Bool) 2305843009213693951LL)) ? (-1) : (((/* implicit */int) (_Bool)1)))) + (31))) - (30)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)56336)) ? (((/* implicit */unsigned long long int) 326621038)) : (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)17861)))))))) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)114))))))));
    var_19 += ((/* implicit */unsigned int) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) : (17958298265973570175ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) / (-7614465062376066004LL))) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))))));
}
