/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67805
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
    var_19 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                var_20 = max((((((/* implicit */int) (signed char)2)) - (((/* implicit */int) (signed char)82)))), (min(((-(((/* implicit */int) (signed char)2)))), (((/* implicit */int) min((arr_4 [i_1] [(signed char)6]), (((/* implicit */signed char) arr_0 [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_0] [i_2] [6] = ((signed char) ((_Bool) (!(((/* implicit */_Bool) arr_4 [(short)17] [(_Bool)1])))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [i_3])) < (((/* implicit */int) var_1))))) < (((/* implicit */int) var_13)))) ? ((+(((/* implicit */int) arr_2 [i_3 - 1] [i_3] [i_3])))) : (max((((/* implicit */int) (signed char)-45)), (min((-1348206403), (((/* implicit */int) (short)-18625))))))));
                            var_22 = ((/* implicit */signed char) max(((short)15), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((short) -607765817)))));
    var_24 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_1))))));
}
