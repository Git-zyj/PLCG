/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57823
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
    var_16 = ((/* implicit */unsigned short) (signed char)-3);
    var_17 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] |= ((/* implicit */short) min((((var_0) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)27)))))))), (((long long int) (signed char)-18))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_18 = (unsigned short)63062;
                            arr_12 [(unsigned short)2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) 14755269338158172289ULL);
                            var_19 = ((signed char) (signed char)-76);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58429)) != (((((/* implicit */_Bool) (unsigned short)2)) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)65524)))) : (((/* implicit */int) max((var_12), ((unsigned short)65518))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (signed char)-1);
    var_22 = ((/* implicit */unsigned short) var_3);
}
