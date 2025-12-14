/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67560
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (-1452731440) : (((/* implicit */int) var_4))))) / (min((4493990050327725904LL), (1513710263090300265LL))))), (((/* implicit */long long int) (-(min((((/* implicit */int) var_9)), (1268697400))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1145068080U)) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_11))));
                            arr_10 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) ? (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9110))))) : ((+(((/* implicit */int) (short)15))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            {
                                arr_23 [i_6] [i_5] [i_5] [i_6] [i_7] [i_8 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) 2736569911U))))) > (((/* implicit */int) arr_2 [i_7 - 3] [i_7 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (15393162788864LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) ((-1519442134) <= (1176440308)))))))));
                                arr_24 [i_4] [i_5] [i_6] [i_6] [i_8 + 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44266))))) ? (min((((132120576) + (((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_6)) ? ((-(-1519442134))) : (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_17 [i_6] [i_6]))))))));
                                arr_25 [i_6] = ((/* implicit */signed char) var_16);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((-783559538248283690LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) min((arr_0 [i_4]), (((/* implicit */unsigned char) (signed char)-119))))) : (-1268697401))))))));
                    var_20 = ((/* implicit */int) (((-(((/* implicit */int) arr_2 [i_5] [i_6])))) == ((~(((/* implicit */int) arr_11 [i_4]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4])) + (((/* implicit */int) arr_7 [i_6]))))) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_6] [i_9])) ? (((/* implicit */int) arr_16 [i_4] [i_5] [i_6] [i_10])) : (((/* implicit */int) (signed char)121)))) : (((/* implicit */int) arr_7 [i_4]))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 14; i_11 += 4) 
    {
        for (unsigned int i_12 = 3; i_12 < 14; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_0) ? (arr_14 [i_12 - 3] [i_13 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_11] [4U]))))))))) + (max((arr_32 [i_14] [i_13 - 1] [i_14]), (arr_32 [i_14] [i_13 - 1] [i_14]))))))));
                            arr_39 [i_14] [i_12] [i_12] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7)))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_11] [i_12] [i_13] [i_14])) && (((/* implicit */_Bool) (unsigned char)122))))))) : (-1068157867)));
                            arr_40 [i_11] [i_12] [(signed char)0] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_11] [i_11] [i_11 - 1]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)28072)), (arr_11 [i_11 + 1])))) : (arr_12 [3LL])))) ? (var_3) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)146)))))));
                            arr_41 [i_14] [i_12] [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17412))) < (min((((/* implicit */unsigned int) var_13)), (arr_37 [i_11])))))) ^ (((/* implicit */int) ((short) min((var_12), (((/* implicit */long long int) (unsigned short)127))))))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */short) max((min((arr_17 [i_11] [i_12]), (((/* implicit */unsigned char) (signed char)-99)))), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)240)), ((short)-14081)))) == (((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (short i_15 = 3; i_15 < 14; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_49 [i_15 + 1] [i_12] [i_11] [i_16] = ((/* implicit */signed char) max((((short) 3395183084531830041ULL)), (((/* implicit */short) ((arr_34 [i_12] [i_12]) || (((/* implicit */_Bool) 16037855785504495918ULL)))))));
                            arr_50 [i_12] [i_12 - 3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)31711)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_28 [i_11] [i_12] [i_12 - 2] [i_12] [i_12] [i_15] [i_16])) : (((/* implicit */int) (unsigned short)6460)))) : (((/* implicit */int) arr_42 [i_11 - 1]))))));
                            arr_51 [i_12] [i_12] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(402653184))), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_11] [i_11] [i_12] [i_15 - 3] [i_15 - 1] [i_16])) <= (arr_1 [i_11 - 2]))))))) ? (min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned short) var_5))))), (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6638)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_15]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)27472)) < (((/* implicit */int) (short)-5247))))))))));
                            arr_52 [i_11] [i_16] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_36 [i_15 - 3] [i_16]), (arr_36 [i_15 - 2] [i_16])))) ? (((((/* implicit */_Bool) arr_36 [i_15 + 1] [i_15])) ? (arr_46 [i_12 - 2] [i_15] [i_15 - 2] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (short)27370))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_36 [i_15 - 2] [i_16]), (arr_36 [i_15 + 1] [7])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
