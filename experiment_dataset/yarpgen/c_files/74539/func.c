/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74539
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_13 = (signed char)13;
                    arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (-192186274)))) : (((((/* implicit */_Bool) (unsigned short)5682)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11))));
                    arr_8 [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)-16611))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16611))))))) != (((((/* implicit */int) var_5)) | (((int) (short)16611)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) var_6))), (((((/* implicit */_Bool) (short)-16625)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                                arr_14 [i_0] [i_1] [(unsigned char)8] [8ULL] [(unsigned short)14] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)16616))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-16625)) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 0U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))))) : (((/* implicit */unsigned int) 2147483647))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [(unsigned short)1] = ((/* implicit */_Bool) ((unsigned short) var_3));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [(unsigned short)1] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-16616)) && (((/* implicit */_Bool) var_11))))) << ((((+(((/* implicit */int) (short)16604)))) - (16581)))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (866208844008215058LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16609)))));
                }
                var_16 = ((/* implicit */unsigned short) max(((-(var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3541286913U)) ? (-305086055) : (((/* implicit */int) (short)16628)))))));
                var_17 ^= ((/* implicit */signed char) ((((_Bool) 0U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)-121))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-4569), ((short)16620))))))) : (max((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (2147483647)))), (3541286892U)))));
                arr_20 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) (short)4570)) : (((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_10))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) (unsigned short)65249)) ? (3819867066698613050LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? ((+(753680382U))) : (((/* implicit */unsigned int) ((var_3) ? (2147483647) : (((/* implicit */int) (unsigned short)47771))))))))));
}
