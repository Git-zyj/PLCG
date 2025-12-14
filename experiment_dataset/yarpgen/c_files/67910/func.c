/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67910
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    var_20 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_11))))))));
    var_21 = ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_15))) % (var_1)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_17)), (var_3)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */short) max((min((min((arr_4 [i_0] [i_1] [i_3]), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) (!(var_18)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [7U] [i_1] [i_2])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3]))))), (arr_7 [i_1 - 2]))))));
                            arr_11 [i_3] [i_1] [i_1] [i_1] |= ((/* implicit */short) (-(min((((/* implicit */unsigned int) (!(var_2)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2] [i_2])) ? (arr_9 [i_0] [i_0] [i_0] [10ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))))));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */_Bool) var_12);
                arr_12 [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_1 [i_1 + 2])), (arr_4 [i_0] [i_1 + 1] [i_1 + 3]))), (((/* implicit */unsigned long long int) arr_1 [i_1 + 3]))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) var_17);
                                arr_19 [i_0] [i_1] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [(short)18]);
                                arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0])), (min((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) var_6))))))) >> (((((/* implicit */int) min(((short)32761), (((/* implicit */short) arr_7 [i_0]))))) - (86)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
