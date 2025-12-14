/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65451
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
    var_20 = ((/* implicit */int) var_1);
    var_21 = ((/* implicit */long long int) var_4);
    var_22 = ((/* implicit */unsigned int) (~(var_10)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0U)) ? (1358655384U) : (0U))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_6);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) 4294967276U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31130))))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_8 [i_1] [i_1])), (var_1))))))));
                        arr_15 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_18)))))));
                    }
                } 
            } 
        } 
        arr_16 [6U] = ((/* implicit */short) ((((/* implicit */_Bool) max((13629162414710959874ULL), (((/* implicit */unsigned long long int) (short)-31978))))) ? (((/* implicit */unsigned int) max((var_13), (((/* implicit */int) (short)(-32767 - 1)))))) : (((619215504U) * (846152326U)))));
        var_24 = ((/* implicit */short) (-(((/* implicit */int) max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))))));
    }
    var_25 = ((/* implicit */int) var_16);
}
