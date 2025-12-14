/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69154
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
    var_14 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (min((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_2]))))), (((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? (3337021026U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [(unsigned short)8] [(unsigned short)8])))))))));
                    var_16 |= ((/* implicit */unsigned char) (((~(3150414581568565941ULL))) >> (((max((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])), (var_3))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])))) - (16196157487950221783ULL)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((int) arr_3 [i_0] [(unsigned char)5] [(unsigned char)5]))))) & (((unsigned int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_0 [i_1])) - (29))))))));
                    var_17 ^= ((/* implicit */signed char) ((unsigned int) (short)0));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)2340)), (var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
    var_19 = ((/* implicit */unsigned int) max(((~(min((var_3), (((/* implicit */unsigned long long int) -814638537)))))), (((/* implicit */unsigned long long int) var_2))));
}
