/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85344
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-105))));
                        var_19 = ((/* implicit */short) arr_7 [i_0 - 1] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_14 [(short)21] [(short)21] [i_2] [18LL] [i_0] = ((/* implicit */_Bool) ((signed char) 873241996U));
                            var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) arr_13 [(short)8] [(_Bool)1])) : (((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2])) ? (((/* implicit */int) arr_11 [(unsigned char)19] [i_1] [i_0] [i_2] [i_0])) : (((/* implicit */int) (signed char)2))))))));
                        }
                        var_21 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_8 [i_1] [i_2] [i_2]))))))), ((~(((/* implicit */int) arr_13 [i_2] [i_2]))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1391194321U)) ? (((/* implicit */int) arr_4 [(signed char)21] [i_0] [i_0])) : (((/* implicit */int) (signed char)-105)))), (((/* implicit */int) arr_6 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_5 [(unsigned short)0] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1])))) : (((/* implicit */int) ((short) (unsigned char)152)))));
        arr_16 [(_Bool)1] &= ((/* implicit */unsigned char) 12ULL);
    }
    var_22 = ((/* implicit */signed char) ((int) max(((+(var_9))), (((/* implicit */unsigned long long int) var_16)))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)-47))))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) var_16))));
}
