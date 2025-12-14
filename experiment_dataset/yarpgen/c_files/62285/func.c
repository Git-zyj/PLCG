/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62285
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
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)11)) / (((((/* implicit */_Bool) 1287138896)) ? (-862137609) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0 - 2]))), (max((var_2), (((/* implicit */unsigned short) (short)-9773)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) min((var_17), (-1071272202)));
            arr_5 [i_0] = ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 + 1] [i_1]))) ? (((/* implicit */int) min((var_2), (arr_1 [i_0 - 2] [i_0 - 2])))) : ((-(-863386945))));
        }
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = 1287138896;
                        var_19 = ((/* implicit */int) ((5111536161462764588LL) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)245)), ((short)25408)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_6)))))))))));
}
