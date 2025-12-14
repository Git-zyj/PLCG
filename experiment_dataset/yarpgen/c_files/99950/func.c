/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99950
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
    var_16 = ((/* implicit */unsigned short) ((var_0) < (max((var_9), (((/* implicit */unsigned int) max(((unsigned short)4833), (((/* implicit */unsigned short) var_5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3864890501U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3410894510U)))) ? (((/* implicit */int) ((unsigned char) 0))) : ((+(((/* implicit */int) var_6))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3))) : (min((var_13), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_13)) ? (3182465476497999605ULL) : (((/* implicit */unsigned long long int) var_7)))) - ((~(var_15))))));
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7564431645921869782ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), ((+(var_3)))));
                    var_21 = ((/* implicit */unsigned long long int) ((signed char) ((short) 4294967295U)));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */short) ((var_3) << (((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)7168)))))))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_12)))));
                    var_23 = ((/* implicit */unsigned int) var_8);
                }
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (((/* implicit */int) min((((signed char) var_0)), (((/* implicit */signed char) (_Bool)1))))))))));
                    var_25 |= ((unsigned char) (+(((((/* implicit */_Bool) 13475158172199346089ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54817))) : (2116548811822421482ULL)))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_21 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)136))))) ? (((unsigned int) (unsigned char)154)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))))));
                }
            }
        } 
    } 
}
