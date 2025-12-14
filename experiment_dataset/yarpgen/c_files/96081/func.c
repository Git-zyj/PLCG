/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96081
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
    var_12 = ((/* implicit */short) (+(8658135602514027106LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_1 - 1] = ((/* implicit */short) min((((/* implicit */int) ((short) ((signed char) arr_5 [i_1])))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_5) / (((/* implicit */unsigned long long int) 8423555357897203420LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-232), (((/* implicit */short) (_Bool)0))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_1 + 1])) ? (-931497282) : (((arr_3 [i_0] [i_0] [i_0]) + (((/* implicit */int) (unsigned char)255))))))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(4028824058112547756ULL)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_13 [i_0] [(short)8] [(short)8] [i_0 - 1] [i_0 - 1] [1LL]);
                                var_15 = ((/* implicit */short) ((((/* implicit */int) (short)17240)) == (((/* implicit */int) (short)17240))));
                                var_16 = ((/* implicit */unsigned long long int) (unsigned char)255);
                                arr_16 [i_0] [i_0] [i_1 - 1] [i_0] [(short)11] [i_4] [i_4] = ((/* implicit */int) arr_13 [i_1] [i_3] [i_2] [i_1] [i_0] [i_0]);
                                arr_17 [i_0] [12LL] [i_0] [i_3 - 1] [i_0] [(short)13] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned long long int) 4028824058112547767ULL))) ? (-8423555357897203409LL) : (((/* implicit */long long int) ((/* implicit */int) min(((short)26999), (((/* implicit */short) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */short) 8423555357897203409LL);
                }
            } 
        } 
    } 
}
