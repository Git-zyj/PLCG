/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65693
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */long long int) (~(((((((/* implicit */int) (short)-31911)) + (2147483647))) << (((((/* implicit */int) (unsigned short)21400)) - (21400)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (3509251627U)))) ? (min((((/* implicit */unsigned int) var_1)), (3509251627U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))))), (((/* implicit */unsigned int) var_13))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((4294967295U) == (arr_4 [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1735801915624377440LL))))) : (((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)116))))))) & (((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) -1735801915624377443LL)))) : (max((var_0), (3509251627U)))))));
                            var_18 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)11)))) == (((/* implicit */int) var_12))));
                            var_19 = ((/* implicit */unsigned short) ((((int) arr_2 [i_1])) < (((((/* implicit */int) arr_2 [i_2])) / (-40350278)))));
                        }
                    } 
                } 
            } 
            arr_12 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)6);
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1735801915624377443LL)))) ? (((unsigned long long int) max((785715667U), (164273704U)))) : (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_6)), (579139518477667141LL))))))));
    }
    var_21 = ((/* implicit */unsigned char) -579139518477667123LL);
    var_22 = ((/* implicit */unsigned int) (unsigned char)0);
}
