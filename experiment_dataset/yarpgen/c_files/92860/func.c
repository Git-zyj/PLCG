/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92860
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
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((var_16) + (((/* implicit */long long int) ((/* implicit */int) ((var_13) && (((/* implicit */_Bool) var_17)))))))));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */_Bool) 3696010632U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))), ((((~(var_15))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 8896965970614540512LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3952194150826017255LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2212557513U)))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) < (var_16))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_8))))))) && (((/* implicit */_Bool) min((min((-4732219214449930713LL), (((/* implicit */long long int) var_8)))), (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-4732219214449930702LL))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)55)) ? (-2836834173598466114LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2377)))));
                                var_24 = ((/* implicit */unsigned char) (short)-1);
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_3 - 1] [i_2 + 1]), (((/* implicit */unsigned int) (short)-2383))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_3 [i_4] [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-2377)))))));
                                var_26 ^= ((/* implicit */_Bool) (signed char)3);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_11))))) % (((long long int) (signed char)-95))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) var_17))))), (((long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2]))))) || (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (short)1727)) : (((/* implicit */int) (unsigned short)32349)))))))))));
                }
            } 
        } 
    } 
}
