/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79991
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min((3194876171U), (((/* implicit */unsigned int) ((unsigned short) max((1832392776420663686LL), (((/* implicit */long long int) (signed char)127)))))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((-2659582839007641890LL) - (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) + ((+(((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) ((short) arr_10 [13LL] [i_3]))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2])) <= (((/* implicit */int) (signed char)127))))) : (((/* implicit */int) arr_5 [i_3])));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) arr_7 [i_2] [i_2]))) + (min((((/* implicit */long long int) var_3)), (3247633101063652621LL)))))) ? ((~(max((((/* implicit */int) (signed char)-114)), (var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) min((((/* implicit */short) arr_16 [i_4] [(unsigned char)2] [i_4] [(unsigned char)2] [i_2] [i_5])), ((short)12707)))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                            {
                                var_15 |= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -836877572)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((3U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2])))))));
                                arr_20 [i_2] [i_3] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_3] [i_5]))))), (arr_6 [i_2] [i_3]))) > (max((arr_6 [i_2] [16LL]), (((/* implicit */unsigned int) (short)-15))))));
                            }
                            for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                            {
                                arr_24 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */int) ((((((/* implicit */long long int) -1778900827)) - (0LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-87)))));
                                arr_25 [i_2] [i_2] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) -9119066249466358254LL))), (min((((/* implicit */unsigned int) -1490055772)), (3055673326U)))));
                            }
                            for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                            {
                                arr_30 [i_4] &= ((/* implicit */unsigned short) arr_5 [i_4]);
                                var_16 = ((/* implicit */signed char) var_2);
                                var_17 = ((/* implicit */unsigned char) var_1);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
