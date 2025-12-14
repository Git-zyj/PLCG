/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62507
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
    var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((var_5) << (((((var_3) + (1803725809))) - (2))))))))) * (((/* implicit */int) (((~(((/* implicit */int) var_10)))) > (((/* implicit */int) min((var_14), (((/* implicit */short) var_12))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
        var_16 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)25139)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)1]))) : (var_11))) << (((((((/* implicit */_Bool) 3254961070U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))) - (233))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12705257294397502620ULL)) ? (((/* implicit */int) (short)-2461)) : (((/* implicit */int) (unsigned char)248)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (max((((unsigned short) (-(((/* implicit */int) (short)-25143))))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_4 [i_2])), (((short) var_5)))))))));
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                        var_18 = ((/* implicit */short) ((signed char) (short)25163));
                    }
                } 
            } 
        } 
    }
}
