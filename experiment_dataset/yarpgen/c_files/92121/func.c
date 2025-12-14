/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92121
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-118)))))));
                    var_12 = ((/* implicit */int) (~((-(arr_0 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) var_7)));
                                var_14 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)26164)))));
                                var_15 = ((/* implicit */_Bool) (+((+(var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) ((unsigned long long int) 16961305265603402565ULL))))));
        var_17 = (~((-(12359075750243376907ULL))));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) 1220988553U)))));
        var_19 *= ((/* implicit */signed char) (-((+(arr_4 [(unsigned char)0] [i_0 + 2])))));
    }
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~((~((+(((/* implicit */int) var_1)))))))))));
        var_21 = ((/* implicit */signed char) ((short) ((signed char) (!(((/* implicit */_Bool) 1485438808106149050ULL))))));
        var_22 = ((/* implicit */unsigned long long int) ((signed char) (+((~(((/* implicit */int) var_4)))))));
    }
    var_23 = ((/* implicit */signed char) ((int) (!((!(((/* implicit */_Bool) var_2)))))));
    var_24 = (+((+((+(34359730176ULL))))));
}
