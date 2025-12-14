/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84071
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-108))));
                    var_20 *= ((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)17)) & (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */unsigned short) var_3);
                                arr_14 [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned short)47654)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))) ^ (((/* implicit */int) arr_10 [i_2] [i_3] [i_4])))), (max((((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)98)))), (((/* implicit */int) (signed char)-111))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) arr_3 [(unsigned short)9]);
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_5 [i_0])) : ((-(((/* implicit */int) arr_5 [i_2])))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) max((arr_5 [i_0]), (arr_5 [i_1])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_17)) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101)))))))));
}
