/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73804
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 *= ((/* implicit */unsigned char) 175666303U);
                        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) -6406515379114858301LL)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(1473119661)))) ? ((~(-6406515379114858307LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (unsigned short)7))))))))));
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8199))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4422))))))));
                    }
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)7773)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (740710763U))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)51))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (signed char)17))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) (signed char)-3)) ? (var_8) : (((/* implicit */unsigned long long int) 6406515379114858333LL)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((-1137209190) / (((/* implicit */int) (signed char)5))))))))))));
}
