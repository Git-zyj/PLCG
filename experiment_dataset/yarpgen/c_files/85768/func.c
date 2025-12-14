/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85768
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (max((-1LL), (((/* implicit */long long int) var_9)))) : (var_3)))) ? (((/* implicit */unsigned long long int) min((min((-4366459805304829502LL), (((/* implicit */long long int) 0)))), (var_6)))) : (((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (signed char)20))))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((((/* implicit */_Bool) arr_4 [i_0] [12ULL])) ? ((~(0))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> ((((((-2147483647 - 1)) - (-2147483632))) + (28)))))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max(((+(((arr_1 [i_1] [i_0]) * (((/* implicit */unsigned long long int) -1)))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [(short)16]))) * (169638290U))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))));
                            var_15 = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 0)) : (var_0)))))));
                            var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), (arr_9 [(signed char)2] [i_1] [2] [i_1] [i_1] [i_1]))))) ^ (min((4294967272U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */unsigned int) (-((+(1576499057)))))) * (((((/* implicit */unsigned int) 0)) / (4125329005U))))))));
                var_18 = ((/* implicit */long long int) arr_12 [i_5 + 2] [i_5 + 1]);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (min((arr_12 [i_4] [i_4]), (((/* implicit */int) min(((signed char)-38), (arr_16 [i_7] [i_6])))))) : ((-(((/* implicit */int) ((short) arr_19 [i_4] [i_4] [i_6] [i_6] [i_4])))))));
                            var_20 = ((/* implicit */unsigned int) (-(2147483647)));
                        }
                    } 
                } 
            }
        } 
    } 
}
