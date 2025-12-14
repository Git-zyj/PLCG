/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73108
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
    var_13 -= ((/* implicit */signed char) var_11);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((max((var_2), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))), (max(((+(var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10))))))), (max((var_12), (((/* implicit */int) var_5))))));
                var_15 ^= min((((/* implicit */unsigned long long int) 3128079753U)), (1459565356323295887ULL));
                var_16 = max((max((var_8), (((/* implicit */unsigned long long int) (signed char)0)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                var_17 = ((/* implicit */long long int) min(((unsigned char)143), (((/* implicit */unsigned char) (signed char)-2))));
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            {
                var_19 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_6 [i_2]), ((signed char)-1)))), (min((1821049352), (((/* implicit */int) (_Bool)1))))))), ((~(max((16445103020644323440ULL), (((/* implicit */unsigned long long int) 4)))))));
                var_20 -= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_7 [i_3 + 1] [i_3]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) (short)25779)), ((unsigned short)23670))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2])))))))), ((+(min((var_3), (((/* implicit */unsigned long long int) -5))))))));
                            var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) arr_6 [i_2 + 3])), (var_5)))), ((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (signed char)77)))))))));
                            var_23 += ((/* implicit */unsigned long long int) (~(min((var_2), (((/* implicit */unsigned int) var_4))))));
                        }
                    } 
                } 
                arr_15 [i_2] [i_2] &= ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) arr_11 [i_2 + 1])), (var_3)))));
                arr_16 [i_3] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_13 [i_3 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 3]))))));
            }
        } 
    } 
}
