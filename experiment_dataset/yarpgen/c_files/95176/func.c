/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95176
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((max((var_13), (((/* implicit */unsigned int) ((unsigned short) var_3))))) >> (((((((/* implicit */_Bool) 2143561709)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */int) var_10)))))) + (14432))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) (((_Bool)0) ? (4294967295U) : (((/* implicit */unsigned int) -1842388924))))) >= (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0]))))));
                arr_6 [i_0] [(unsigned short)9] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) var_4)) / (403874883U))));
                var_16 = min((-1502302450), (((/* implicit */int) (unsigned short)44067)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] [8] [i_3] [i_1] = ((/* implicit */signed char) (~(max((((((/* implicit */int) var_1)) ^ (arr_5 [(unsigned short)9]))), (((((/* implicit */int) (unsigned char)58)) << (((363790075U) - (363790075U)))))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) max((var_4), (((/* implicit */int) (_Bool)0))))) < (max((((/* implicit */unsigned int) var_6)), (492041677U))))))) ^ (min((min((arr_2 [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_1])))), (((/* implicit */long long int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (-1502302462)))), (min((var_0), (((/* implicit */long long int) (unsigned char)197))))))))));
    var_19 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) / (min((var_13), (((/* implicit */unsigned int) var_9))))))), (var_0));
    var_20 += ((/* implicit */long long int) var_1);
}
