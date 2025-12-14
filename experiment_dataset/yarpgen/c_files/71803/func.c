/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71803
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((var_11) ? (((((/* implicit */int) arr_2 [i_0 + 1])) ^ (((/* implicit */int) arr_2 [i_0 - 1])))) : (((/* implicit */int) ((short) var_5)))));
        var_13 &= (signed char)(-127 - 1);
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [1U])) / (var_2)))) != (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_0 [i_0 - 1])))))), (var_8))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((4294967286U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_16 &= ((/* implicit */signed char) ((short) ((var_9) > (((/* implicit */int) arr_2 [i_0 + 1])))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) -33554432)) ? (1010552130U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_1] [(signed char)5] [i_3] [(signed char)9])))) * ((-(var_1)))));
                            var_19 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [(_Bool)1])) / (var_7)))));
                            arr_15 [i_3] [i_2] [i_2] [(unsigned char)7] [i_2] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (signed char)112)) ? (arr_7 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) arr_14 [8]))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_8)))) != (((/* implicit */int) ((((/* implicit */_Bool) (short)-20882)) && (var_11))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_0);
}
