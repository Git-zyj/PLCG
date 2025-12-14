/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7833
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_0)), (-237393538308298371LL))))) * (((((/* implicit */int) ((unsigned short) var_0))) * ((+(((/* implicit */int) var_6))))))));
    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((var_2), (var_2)))) ? (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) var_2);
                                var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) : (max((var_3), (var_3))))), (((/* implicit */int) ((short) var_0)))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_9))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_9))))))))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned int) var_6)))));
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((max((((long long int) var_5)), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6))))))) <= (((/* implicit */long long int) ((unsigned int) var_4)))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (short)3091)) << (((((((/* implicit */int) (short)-3092)) + (3114))) - (22)))));
                            var_19 = (~(((((/* implicit */_Bool) (short)-3098)) ? (((/* implicit */int) (unsigned short)39126)) : (((/* implicit */int) (signed char)77)))));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */long long int) (((+(((long long int) var_4)))) > (((/* implicit */long long int) var_3))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) var_0)))) & (((((/* implicit */int) var_9)) | (((/* implicit */int) var_9))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (((unsigned int) var_4)))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_4))))) | (max((((/* implicit */unsigned int) var_5)), (var_8)))))));
                    }
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        arr_25 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17683)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)3)))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) / (max((max((((/* implicit */int) (_Bool)1)), (0))), (((/* implicit */int) (unsigned char)116))))));
                    }
                    var_23 &= ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_3))));
}
