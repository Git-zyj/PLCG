/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98847
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
    var_20 = (~(((/* implicit */int) var_7)));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || ((_Bool)1))))))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)23623)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (var_19)))), (var_0)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((arr_6 [i_3] [i_2] [(short)0] [(unsigned char)10] [(unsigned char)10]), (((/* implicit */short) var_12))))) ? ((-(((/* implicit */int) arr_2 [i_1] [i_3])))) : (((((/* implicit */int) arr_9 [i_3] [(_Bool)1] [i_1] [i_1] [i_0 + 2] [i_0 + 2])) * (((/* implicit */int) arr_2 [i_0] [i_0])))))), (arr_1 [i_1])));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [(unsigned char)4] [i_3] = ((/* implicit */unsigned char) (~(max((arr_7 [i_3] [i_1] [(_Bool)1] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3 + 2]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [(signed char)1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]))));
                arr_12 [i_0 + 2] &= var_11;
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                arr_14 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_1] [(short)14] [i_1]);
            }
        } 
    } 
}
