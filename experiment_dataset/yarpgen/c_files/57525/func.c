/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57525
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) var_2);
                            arr_12 [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-391295728) : (((/* implicit */int) (unsigned char)109))));
                            var_15 = (-((-(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_6 [i_0 - 1] [1LL] [i_0 - 1])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) -30777699)), (var_0)))))))) + ((+(-2831825213602335508LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((min((((/* implicit */long long int) (~(var_12)))), (min((2831825213602335507LL), (2831825213602335507LL))))) < (max((((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_12))))), (((((/* implicit */_Bool) (short)-26375)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
}
