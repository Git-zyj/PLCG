/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75849
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0] [i_0]))))) : (var_13)));
                var_18 = ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned long long int) (short)-8265)), (var_9))))) << (((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)11534)) % (((/* implicit */int) arr_5 [i_0] [i_1])))))) - (48)))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)4659)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_6 [i_1])))))) : ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+(max((-2025691750), (((/* implicit */int) (signed char)-91))))));
                    var_20 = ((/* implicit */unsigned char) arr_5 [i_3] [i_3]);
                }
            } 
        } 
        arr_14 [i_2] [i_2] = ((/* implicit */long long int) min((((18446744073709551597ULL) ^ (((/* implicit */unsigned long long int) (~(var_14)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [(unsigned short)0] [i_2])))))));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) max((arr_2 [i_2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)32749)) : (((/* implicit */int) arr_5 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (short)9231)) ? (arr_11 [i_2]) : (((/* implicit */int) (short)-8265)))) : (((((/* implicit */int) var_2)) % (((/* implicit */int) var_8))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_14);
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-8265))) != (((/* implicit */int) (unsigned short)13155)))))));
}
