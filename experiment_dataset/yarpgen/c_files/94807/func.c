/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94807
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]))))))) : (((/* implicit */int) ((_Bool) ((unsigned int) arr_1 [i_0] [i_1])))))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((min((arr_5 [i_1] [i_0]), (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)3555)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */int) var_8);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2])) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)3562)) && ((_Bool)1)))))) : (((/* implicit */int) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) 1256781366)))))))));
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_3])) == (((/* implicit */int) (_Bool)1))))), (var_7)));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */signed char) (((~(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1])))) > (((/* implicit */int) arr_1 [i_2] [i_3]))))), (max((var_9), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-26753))))))))))));
            }
        } 
    } 
}
