/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72370
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((_Bool) ((var_11) << (((((/* implicit */int) var_4)) - (72))))))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32755))) <= (-5818702611028575367LL)))) <= (((((/* implicit */int) (short)-128)) * (((/* implicit */int) arr_0 [(unsigned short)13]))))))), (max((((/* implicit */long long int) (short)-32749)), (max((((/* implicit */long long int) 0U)), (var_1)))))));
        var_16 = ((/* implicit */unsigned long long int) (unsigned char)236);
    }
    var_17 *= ((/* implicit */short) min((max(((~(-5818702611028575378LL))), (((/* implicit */long long int) var_15)))), (min((min((((/* implicit */long long int) var_12)), (-7420042076157276458LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967272U)) && (((/* implicit */_Bool) 3103250706U)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)0)) + ((+(((/* implicit */int) (unsigned char)201)))))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25556)) || (((/* implicit */_Bool) 9U))))), (max((((/* implicit */short) (signed char)(-127 - 1))), ((short)32742))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((-8927644224711290786LL), (((/* implicit */long long int) arr_1 [i_1]))));
        var_18 ^= (-((-(((/* implicit */int) (unsigned short)29289)))));
        var_19 = ((/* implicit */unsigned char) arr_1 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_10 [8U] [8U] |= (~(((/* implicit */int) arr_8 [(unsigned char)0])));
            var_20 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)36))));
            var_21 = ((/* implicit */long long int) arr_5 [i_1]);
            var_22 = ((/* implicit */short) (~(4294967295U)));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_23 *= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_1 [i_3]))))));
        var_24 = ((/* implicit */unsigned char) (short)-14698);
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) != (1492950393U)))) == ((+(((/* implicit */int) (short)10925)))))))));
        var_26 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-12275)))) ? (((2338967110409566548ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))))) : (((/* implicit */unsigned long long int) (~(3103250706U)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3103250706U)))))));
    }
}
