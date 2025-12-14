/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91478
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (arr_1 [(signed char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)62)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [(_Bool)1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) -7294022961362444276LL);
                            arr_12 [i_0] [12] = ((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0])), ((+(-7294022961362444264LL))))))));
                            arr_13 [6U] [i_2] = (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2538265591497064307LL)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)4)))) : ((~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (1380316015)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) : (4212111770U))));
                        }
                    } 
                } 
                arr_14 [3U] = ((/* implicit */unsigned short) (_Bool)1);
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            {
                arr_22 [(signed char)8] [i_5] = ((/* implicit */unsigned short) min((min((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */signed char) arr_18 [i_4] [i_5] [i_4])))), (((/* implicit */signed char) ((_Bool) max((-8), (2147483647)))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max(((unsigned char)0), (((/* implicit */unsigned char) arr_20 [i_4] [i_5])))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)167)) <= (((/* implicit */int) var_11)))))))) ? ((~(max((((/* implicit */unsigned long long int) var_11)), (var_1))))) : (((/* implicit */unsigned long long int) min((-7294022961362444276LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [(short)0] [i_4] [(signed char)4]))))))))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_25 [i_6] = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_8)) ? (7294022961362444263LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11))))) >> (((/* implicit */int) ((-14LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4])))))))));
                    arr_26 [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [(short)11] [(_Bool)1] [i_6]), (arr_19 [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) (short)-12975)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_19 [(unsigned short)5] [i_5] [i_4])) : (((/* implicit */int) arr_19 [i_6] [i_5] [i_4])))))));
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    arr_30 [i_5] = ((/* implicit */unsigned short) (_Bool)0);
                    var_13 = ((/* implicit */_Bool) max((var_13), (((_Bool) max(((signed char)16), (((/* implicit */signed char) arr_23 [i_7] [i_5] [i_4])))))));
                    var_14 -= ((/* implicit */signed char) arr_16 [i_4]);
                }
                for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)8] [i_5] [i_5]))) & (arr_28 [i_4] [i_5] [i_8 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || ((_Bool)1)));
                    var_16 *= ((/* implicit */unsigned char) var_4);
                }
                for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_5]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9 - 1]))) - (-7294022961362444276LL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_4] [i_5] [i_9] [0] &= ((/* implicit */unsigned char) (_Bool)1);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) <= ((((_Bool)1) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) var_3))))))))))));
                        var_19 -= ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-9225))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) min((((2113929216U) << (((((/* implicit */int) (signed char)-112)) + (134))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_10] [i_9] [i_4])) < (((/* implicit */int) arr_20 [0U] [i_5])))))))) : (((((/* implicit */_Bool) var_5)) ? (min((-5310015566592952717LL), (((/* implicit */long long int) (signed char)-12)))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_10]))))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (signed char)-106)) + (107)))));
                        var_22 = ((/* implicit */long long int) ((unsigned int) (((!(((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_9 - 1])))) ? (((/* implicit */int) arr_31 [i_9 + 1])) : (((/* implicit */int) var_10)))));
                    }
                    arr_41 [i_9] [i_4] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) (short)3)), (arr_29 [i_4] [i_5] [i_9 - 1])))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */long long int) max((min((var_11), (((/* implicit */short) var_2)))), (var_7)))), (max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) -8835681322075524278LL)) ? (((/* implicit */long long int) 4294967293U)) : (28LL))))))))));
    /* LoopNest 3 */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            for (unsigned char i_14 = 4; i_14 < 20; i_14 += 1) 
            {
                {
                    arr_53 [(short)18] [(short)10] [i_14] [i_14] = ((/* implicit */int) ((_Bool) ((367746843) << (((arr_51 [i_12] [i_13] [i_14 + 2]) - (2033294963))))));
                    var_24 = ((/* implicit */unsigned int) -19);
                    var_25 = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
}
