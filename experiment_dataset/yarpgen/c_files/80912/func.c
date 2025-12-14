/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80912
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
    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(2548370223U)))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) var_11))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (2548370210U))))))) != (var_0)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (~(max((arr_14 [i_3] [i_3 - 2] [i_3]), (((/* implicit */unsigned int) var_1))))));
                                var_20 += ((/* implicit */unsigned int) min((min((((137438953471LL) & (((/* implicit */long long int) -1777909419)))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) 1746597102U))));
                                arr_15 [(unsigned char)0] [i_0] [(unsigned short)4] [i_0] [i_0] [i_0] = ((((max((((/* implicit */long long int) (short)32761)), (var_0))) | ((~(814200077445231521LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32763)) >= (((/* implicit */int) ((arr_6 [i_0] [(unsigned char)15] [i_2 - 1] [i_4]) != (((/* implicit */long long int) 2548370221U))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) > (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned char) 1746597093U)))));
    var_23 |= ((/* implicit */unsigned int) var_9);
    var_24 &= ((/* implicit */unsigned short) min((((((var_16) || (((/* implicit */_Bool) (unsigned short)22907)))) || (((/* implicit */_Bool) min((var_13), (var_2)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-814200077445231535LL))))))));
}
