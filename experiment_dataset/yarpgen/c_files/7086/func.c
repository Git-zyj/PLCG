/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7086
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) (short)-32763)) | (((/* implicit */int) var_2)))) <= (((/* implicit */int) var_3))))) <= (((/* implicit */int) var_13)))))));
    var_18 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [0] [i_1] [i_1] = arr_9 [i_0] [i_0] [i_0];
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) max((min((777384900845072319ULL), (((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [i_3 - 1] [i_3])))), ((~(max((((/* implicit */unsigned long long int) var_5)), (17669359172864479273ULL)))))));
                                var_20 = (-(((var_1) ? (var_5) : (((/* implicit */int) arr_0 [i_3 - 1])))));
                                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-122))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)62))))) ? (arr_4 [i_0] [i_0] [i_2]) : (((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_3 [i_1])))))))));
                    var_23 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) (unsigned char)128)))));
                }
            } 
        } 
    } 
}
