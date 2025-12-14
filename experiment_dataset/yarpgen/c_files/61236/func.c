/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61236
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
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((long long int) ((long long int) (_Bool)0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_0]) : ((+(var_5))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1])) >= (((/* implicit */int) arr_1 [i_1 - 1])))))));
                            var_21 = ((int) var_14);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_6 [i_0] [i_1 + 1] [i_1] [i_2 + 1]), (arr_6 [i_0] [i_1 - 1] [i_2 + 1] [i_2 + 1])))) <= ((~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 &= ((/* implicit */_Bool) arr_13 [(_Bool)0] [i_4] [i_4 + 1] [i_4] [i_1] [13]);
                            var_24 = ((/* implicit */long long int) arr_13 [i_0] [i_1 - 1] [i_5] [i_5] [i_1] [i_5]);
                            var_25 = ((/* implicit */_Bool) max((arr_4 [i_0] [2] [i_0]), (((/* implicit */unsigned long long int) var_1))));
                        }
                    } 
                } 
                var_26 = arr_3 [i_1 + 1];
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_27 -= ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(var_14)))))) != (((((/* implicit */_Bool) min((((/* implicit */long long int) -529369284)), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_5 [17LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (658928020843349179LL))) : (((/* implicit */long long int) min((var_2), (((/* implicit */int) arr_19 [i_0] [i_1] [6] [i_6] [i_6 - 2] [i_7]))))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_6 [(_Bool)1] [i_0] [i_1 + 1] [i_6]))) ? ((~((~(arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < ((+(var_12)))))))));
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_18 [i_6 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 *= (_Bool)1;
}
