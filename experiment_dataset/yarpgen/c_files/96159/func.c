/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96159
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
    var_20 = ((/* implicit */long long int) (_Bool)0);
    var_21 = ((/* implicit */_Bool) var_16);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) (!(min(((!(((/* implicit */_Bool) arr_4 [i_0])))), (((((/* implicit */_Bool) (unsigned short)10420)) || (arr_1 [i_0] [i_0])))))));
                        var_23 = ((/* implicit */_Bool) ((int) max((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (_Bool)0)))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20492))) : (-2481867022150746484LL)))) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */_Bool) (-(8890497873325566975ULL)))) ? (((/* implicit */int) max(((unsigned short)28106), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) var_18)))))))));
                    }
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)23886);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) arr_8 [i_0]);
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (unsigned short)2956))));
                                var_27 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_15 [i_1 + 1] [i_0])) << (((((/* implicit */int) max(((short)30), (((/* implicit */short) (unsigned char)32))))) - (18)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
