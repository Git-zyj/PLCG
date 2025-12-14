/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99763
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
    var_14 = var_13;
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_4)))))), (max((((((/* implicit */_Bool) (short)-18938)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5))), (var_8)))));
    var_16 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) (((~(var_4))) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)18937)), ((+(((/* implicit */int) (_Bool)1))))));
                                var_18 = ((/* implicit */int) ((unsigned int) var_0));
                                var_19 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_10)), (var_5))), (((/* implicit */long long int) min((4154664007U), (((/* implicit */unsigned int) arr_6 [i_0] [(unsigned short)13] [i_4])))))));
                                var_20 *= ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((15198536693079699977ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((short) arr_8 [5LL] [i_3] [(unsigned char)4] [(unsigned char)4])))))) % (var_9));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [(signed char)8] = ((((/* implicit */int) (short)-18926)) < (((/* implicit */int) (short)18937)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_6);
}
