/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77185
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((var_10) & (((((/* implicit */int) min((((/* implicit */short) var_8)), ((short)127)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58346))) : ((~(((((/* implicit */unsigned int) var_2)) - (282281089U))))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)-112))))), (((/* implicit */int) ((signed char) var_14))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_3 [i_3 - 2] [i_3 + 1]), (arr_3 [i_3 - 1] [i_3 - 1]))))));
                        arr_12 [i_0] [i_1] [i_0] [i_3 + 1] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1])) + (((((/* implicit */_Bool) (short)25793)) ? (((/* implicit */int) (signed char)-127)) : (2072548422)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 10; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((_Bool) (short)-1));
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)86)))))));
                    }
                    var_22 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0]);
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) (short)-8589)))))))) <= ((~(min((arr_7 [i_2] [i_1] [i_0] [i_0]), (var_10)))))));
                }
            } 
        } 
    } 
}
