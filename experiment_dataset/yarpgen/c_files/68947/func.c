/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68947
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */short) var_11)), (var_9)));
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */unsigned short) var_10);
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> (((-206240672) + (206240698)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_2 [(unsigned short)20]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) var_1);
                            arr_13 [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) var_6);
                            arr_14 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) (-(-1705016487)));
                arr_15 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (var_5)))) ? ((+((~(((/* implicit */int) arr_5 [i_1] [i_1])))))) : ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 2]))))));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_8))) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (var_5)))));
            }
        } 
    } 
}
