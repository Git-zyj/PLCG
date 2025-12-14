/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76270
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
    var_16 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)58504))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18572)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (703999610030965925LL)))) && ((!(((/* implicit */_Bool) var_5))))))));
    }
    for (int i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (-690086881)))) : (((var_8) ^ (((/* implicit */long long int) 874854333))))));
            arr_9 [i_1] = ((/* implicit */int) (((+(var_9))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))));
            var_19 *= ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_20 = ((/* implicit */long long int) arr_8 [i_3]);
            var_21 += ((/* implicit */unsigned int) var_7);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) arr_11 [i_1 - 2] [i_1 + 2])) : (min((((var_2) >> (((var_4) - (14046472753898978720ULL))))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-16996))))))));
            arr_13 [i_1 + 1] [i_3] = ((/* implicit */unsigned short) ((var_12) ? (min((((/* implicit */unsigned long long int) (-(-5886570843534676312LL)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26548))) : (var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((690086881) | (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((+(var_15))))))));
        }
        arr_14 [(_Bool)0] [i_1 + 1] = ((/* implicit */short) -6000388068106095413LL);
        var_23 = (~(max((min((((/* implicit */long long int) (short)1036)), (-5886570843534676306LL))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)18572))))))));
        arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (-6856085285675734463LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_8 [i_1 + 2]))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22086)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (unsigned char)141)))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_24 *= ((/* implicit */int) ((((-937335903364156329LL) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0))));
        var_25 *= ((/* implicit */signed char) var_0);
        arr_18 [i_4] [i_4] &= ((/* implicit */short) arr_11 [i_4 + 1] [i_4 + 1]);
    }
}
