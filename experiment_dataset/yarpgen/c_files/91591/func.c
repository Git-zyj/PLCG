/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91591
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
    var_11 = ((/* implicit */short) (signed char)-11);
    var_12 = ((/* implicit */short) (~((+(((((/* implicit */_Bool) (short)254)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (short)270))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (signed char)30)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-23)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) >= (arr_9 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))))));
                            var_15 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)6] [i_0])) - (((/* implicit */int) arr_2 [i_0])))) >= (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)0))) == (((/* implicit */int) arr_6 [i_0])))))));
                            arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_3]), (arr_5 [i_3] [i_1] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))) ? ((~(((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) (unsigned short)30175))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
