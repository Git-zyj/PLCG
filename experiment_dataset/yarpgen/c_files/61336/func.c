/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61336
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
    var_10 = ((/* implicit */short) min((min((min((((/* implicit */unsigned int) (short)18837)), (3816612802U))), (var_9))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (min(((-2147483647 - 1)), (((/* implicit */int) (short)32065)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned char)13);
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)-32072)), ((unsigned short)58953)))), ((-2147483647 - 1)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        for (signed char i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_19 [i_7 + 4] [i_6] [i_5] [i_0] [i_0] |= ((/* implicit */unsigned long long int) min((min(((short)-32093), ((short)-23437))), (min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)64))))));
                                var_12 *= ((/* implicit */unsigned short) min((min((((/* implicit */int) (unsigned char)243)), (663007858))), (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */short) min(((signed char)2), (((/* implicit */signed char) (_Bool)1)))))));
}
