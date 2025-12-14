/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74194
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
    var_10 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-2819)))), (min((var_3), (((/* implicit */unsigned long long int) var_5)))))) * ((+(((var_3) >> (((var_4) - (2792043717U)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) max(((+(-1054610065105546999LL))), (max((max((var_9), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_1))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_8 [i_2] [i_1] [i_1] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? ((-(var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_5) : (var_1))) != (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_6)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9)))))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_9)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)))))) ? (((/* implicit */long long int) max((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-125))))), (((((/* implicit */int) var_8)) << (((var_1) - (3241448831U)))))))) : ((~(-8812358748422851857LL)))));
                    var_13 -= (+(((/* implicit */int) ((((/* implicit */_Bool) max((14122659905942151905ULL), (((/* implicit */unsigned long long int) -8812358748422851844LL))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_5))))))));
                }
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_1)))) && (((/* implicit */_Bool) (~(((var_3) / (var_3))))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_6)))), (((((/* implicit */int) (short)32766)) / (((/* implicit */int) (signed char)125))))))) * (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3))), (((/* implicit */unsigned long long int) (-(var_5)))))))))));
                    arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(579722119))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) > ((-(((((/* implicit */unsigned long long int) var_4)) * (var_3)))))));
                }
            }
        } 
    } 
}
