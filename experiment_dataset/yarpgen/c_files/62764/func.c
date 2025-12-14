/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62764
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
    var_17 = ((/* implicit */_Bool) max(((-(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_4)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2))))));
    var_18 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (_Bool)0))) - (((/* implicit */int) (unsigned short)65531))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_3]))))));
                            arr_8 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32533)) ? (((/* implicit */int) max((var_8), (var_8)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65524))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2168)))) : (((/* implicit */int) (unsigned short)14336))))));
                            arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55076)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))));
                arr_10 [(unsigned short)10] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
            }
        } 
    } 
}
