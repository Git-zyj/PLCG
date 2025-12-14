/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88539
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (14))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((_Bool) min((((/* implicit */int) (_Bool)1)), (-1299947473)))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_17 = ((((/* implicit */_Bool) ((-1226184117) % (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 3] [i_1 + 1]))))) ? ((-(358817905U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                                var_18 *= arr_1 [i_2];
                                arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) -1226184118);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0 + 2] [(unsigned char)18] [(_Bool)1]))) != (6ULL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_1] [(unsigned char)3] [i_3] [i_5]))))))));
                            }
                            var_20 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [(short)4] [i_1] [(short)4] [i_3])))))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 358817905U))));
                            var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 4])) * (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (unsigned char)225)), (((4294967272U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
                var_23 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 2] [i_1] [i_1] [i_1]))))), ((-(((((/* implicit */_Bool) (short)-10849)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)-16113))))))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (short i_7 = 4; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1 - 1] [i_1 - 1] [i_7] [i_8] [i_8] = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)3609)) * (((/* implicit */int) arr_24 [i_0])))), ((-(1188038647)))));
                                var_24 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_17 [i_6] [i_1])) != (((/* implicit */int) ((signed char) -15)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned int) (short)-8);
}
