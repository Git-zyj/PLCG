/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74602
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned long long int) 276481349U);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-10575))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (4414011503447683858ULL))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 - 4] [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_1])) || (((20748936U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [5LL] [i_3]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_8 [2U] [(short)10] [i_1]))))))));
                            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((int) var_0))))));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (_Bool)1))))) && (((/* implicit */_Bool) max((arr_1 [i_1 - 1]), (((/* implicit */long long int) arr_13 [i_1 + 1] [i_8 - 1])))))));
                                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)32))))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) | (((((/* implicit */unsigned int) (~(((/* implicit */int) (short)9170))))) * (((unsigned int) arr_3 [i_0]))))));
                                var_25 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [4LL] [i_1] [i_6])) ? (((/* implicit */int) arr_21 [i_0 + 1] [i_1 - 3] [i_8 + 3] [i_0] [i_8])) : (((/* implicit */int) arr_13 [i_0 - 2] [i_1 - 4])))) * (((((/* implicit */int) (short)7007)) >> (((((/* implicit */int) (unsigned short)3567)) - (3538)))))));
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (unsigned short i_10 = 3; i_10 < 22; i_10 += 3) 
        {
            for (short i_11 = 2; i_11 < 22; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_9] [i_12]))) ? (((arr_29 [i_12 - 1] [i_12] [i_13 - 1]) >> (((((/* implicit */int) arr_28 [i_9] [i_9] [i_12 + 1] [i_12 + 1])) - (37818))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_12 - 1])), (-1365825567))))));
                                var_28 &= arr_30 [i_12 + 1] [i_11] [i_11] [i_9];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 22; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_34 [i_9] [i_11 - 2] [i_11 - 2] [i_15 + 1])), (((((/* implicit */_Bool) 16473673866043377484ULL)) ? (arr_35 [i_11] [i_11] [i_9] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_30 = ((/* implicit */unsigned int) 2147483640);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
