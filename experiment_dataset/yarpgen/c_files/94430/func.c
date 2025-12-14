/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94430
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
    var_20 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (short)-1385)) ? (3976787779208938507LL) : (-3976787779208938509LL))) / (((/* implicit */long long int) (+(-337055301)))))), (((/* implicit */long long int) (+(max((var_5), (((/* implicit */unsigned int) 1570206089)))))))));
    var_21 = ((/* implicit */unsigned short) max((max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_19)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    var_22 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [6] [6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-95))))) ? (min((3976787779208938493LL), (((/* implicit */long long int) var_8)))) : (min(((~(var_9))), (((/* implicit */long long int) (-(arr_2 [(unsigned short)16]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (((+(max((357283074U), (((/* implicit */unsigned int) var_11)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99)))));
                            arr_13 [i_0] [i_0] [i_0] [i_3 - 2] [i_2] [i_0] = ((/* implicit */unsigned char) var_2);
                            arr_14 [i_0] [i_1 - 1] [i_2] [22] [i_2] [i_3] = ((/* implicit */unsigned char) (unsigned short)65523);
                            var_23 = ((/* implicit */unsigned int) (signed char)101);
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 3976787779208938507LL))))), (((signed char) var_0))));
            }
        } 
    } 
}
