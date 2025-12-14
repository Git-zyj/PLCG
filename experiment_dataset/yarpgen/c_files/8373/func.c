/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8373
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
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 = ((/* implicit */unsigned char) (~(var_12)));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_1 [i_0 - 1] [4U]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))))))))) ? (arr_3 [i_2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((int) (unsigned char)223)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) (short)-17914)))));
                                arr_13 [i_3] [(_Bool)1] [10U] [i_4] [(_Bool)1] [i_1] = ((/* implicit */short) var_5);
                                var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((5842716380791768431ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))))))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((unsigned long long int) (short)-23321)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 &= ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))) >> (((min((max((13155420924282939957ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_0)))) - (13155420924282939932ULL))));
}
