/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85931
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
    var_11 = (unsigned char)3;
    var_12 = ((long long int) (unsigned char)252);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((((/* implicit */int) (unsigned char)240)) ^ (((/* implicit */int) (unsigned char)235))))))))))));
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (arr_4 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            {
                var_15 ^= ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)55247), (((/* implicit */unsigned short) (signed char)-57))))) >> ((((-(((/* implicit */int) (signed char)-57)))) - (33)))));
                /* LoopSeq 3 */
                for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((int) arr_6 [i_2 - 3] [i_4 + 1])))))));
                    arr_15 [(unsigned char)12] |= var_7;
                }
                for (long long int i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    var_17 += ((/* implicit */unsigned char) (signed char)97);
                    arr_18 [i_3] [i_3] [i_3] = ((/* implicit */int) ((8800961370971862533LL) / (var_4)));
                    var_18 ^= ((/* implicit */short) ((int) var_5));
                }
                /* vectorizable */
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) var_3);
                    var_20 += ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_9))));
                    var_21 = ((int) var_9);
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_13 [i_2 + 1] [i_2 - 3] [i_2 - 2]) + (((/* implicit */int) arr_4 [i_6] [i_2])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 12; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_22 [i_2] [i_2] [i_7 - 1] [i_7] [i_7] [i_7]));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            arr_25 [i_2] [i_3] [i_3] [i_8] [i_8] [i_2] [i_3] = ((signed char) 32768);
                            arr_26 [i_2] [i_2] [i_3] [i_3] [i_2] [i_2] [i_2 - 1] = ((/* implicit */short) (-(var_4)));
                        }
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                {
                    arr_29 [i_2] [i_3] [i_2 - 3] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((unsigned long long int) (unsigned char)0)))) ^ (((((/* implicit */int) var_7)) + (((/* implicit */int) var_8))))));
                    var_24 = ((/* implicit */int) (unsigned short)10289);
                }
                var_25 = ((/* implicit */int) arr_6 [i_2] [i_3]);
            }
        } 
    } 
}
