/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78856
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
    var_11 = ((/* implicit */unsigned char) (~(1563925628)));
    var_12 = ((/* implicit */unsigned char) min((2024166319), (((/* implicit */int) ((unsigned char) max(((unsigned char)7), (((/* implicit */unsigned char) (signed char)-104))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_13 = ((max((((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))) & (((((/* implicit */int) min(((_Bool)1), (var_8)))) << ((((~(var_5))) - (8234760923886977297LL))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((short) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1)))));
                            var_15 = ((/* implicit */unsigned long long int) 1);
                        }
                    } 
                } 
            }
        } 
    } 
}
