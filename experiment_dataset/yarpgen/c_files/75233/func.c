/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75233
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_10))) / (max((((/* implicit */long long int) arr_5 [i_0 + 2] [19U] [19U])), (var_1)))))) ? (((((/* implicit */_Bool) -1948575341)) ? (((/* implicit */unsigned long long int) -1948575341)) : (13331083717758267462ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) -1948575332))), ((-(((/* implicit */int) var_6)))))))));
                            var_20 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_1 [i_3 - 2])), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_17))))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) var_17)))))));
                            arr_12 [i_0] [(unsigned short)14] [i_1 - 1] [i_1 - 1] [10U] |= ((/* implicit */unsigned int) ((((-1948575341) + (2147483647))) << (((max(((-(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) - (15472801638265205285ULL)))));
                            arr_13 [(unsigned char)14] [i_3] [i_2] [i_3 - 2] = ((/* implicit */int) var_7);
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_18))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_1 - 1])) ? (var_8) : (((/* implicit */unsigned long long int) -1948575335)))) : ((~(var_8)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) var_13)), (var_1))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)10)) != (((/* implicit */int) (_Bool)1))))), (min((5115660355951284140ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) var_13)) ? (min((var_2), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))), ((+(((var_14) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
}
