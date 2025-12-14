/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92495
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_0] = max((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8931114911641296940LL))))));
                            var_18 = (i_0 % 2 == 0) ? (((((/* implicit */_Bool) (~(((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3])) << (((arr_1 [i_1] [i_0]) + (4805740366364280465LL)))))))) ? ((-((+(8931114911641296940LL))))) : (((/* implicit */long long int) ((int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (~(((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3])) << (((((arr_1 [i_1] [i_0]) + (4805740366364280465LL))) + (1940913634303752294LL)))))))) ? ((-((+(8931114911641296940LL))))) : (((/* implicit */long long int) ((int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0])))));
                            var_19 = min((140408424183082446LL), (((/* implicit */long long int) (_Bool)0)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (4095U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]))))) : (((-140408424183082451LL) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0])))))));
                arr_12 [i_0] = ((long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1])) || (var_5))) || (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) 8931114911641296940LL))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_2 [i_0] [i_4 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)923))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 1952125766U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                            arr_18 [i_0] [i_1] [i_4 - 1] [i_5] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 1] [i_0] [i_4 - 1])) ? (-662200427) : (((/* implicit */int) var_2))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((140408424183082451LL) <= (arr_2 [i_1] [i_1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_4] [i_0]) : (((/* implicit */long long int) arr_6 [i_1] [0U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -2082568715539925708LL)) && (((/* implicit */_Bool) var_7)))))) : (((unsigned int) 1541521741)))) : (var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_29 [i_6] [i_6 - 2] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(var_10))), (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_6] [i_6 + 1])))))))) ? (((((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_8])) ? (1866257U) : (4095U))) + (((/* implicit */unsigned int) ((int) 8931114911641296940LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_26 [i_6] [i_7] [i_8]))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            {
                                arr_34 [i_8] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (max((((/* implicit */long long int) var_6)), (var_10))));
                                var_23 += ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned short)30221)) % (((/* implicit */int) var_8)))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_9]))) : (408266829U)))))), (((_Bool) (unsigned short)34400)))))));
                                arr_35 [i_6 - 1] [i_7] [i_7] [i_8] [i_9 - 1] [i_10] [i_9 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (1327350260)))), ((~(((/* implicit */int) (_Bool)1))))))) & (max((((/* implicit */long long int) var_16)), (var_9)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_9)) ? (arr_39 [i_6 - 2] [i_7] [i_8] [i_7] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30278))))), (((/* implicit */unsigned int) arr_32 [i_8] [i_6 - 3] [i_8] [i_11] [i_12])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_11] [i_6 - 1] [i_6 - 1])) ? (-1130653185) : (((/* implicit */int) (unsigned short)255))))))))));
                                var_26 = ((/* implicit */int) ((((max((485630007U), (((/* implicit */unsigned int) (unsigned short)30278)))) | (arr_37 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 3] [i_11]))) ^ (arr_30 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_12] [i_6])));
                                var_27 = ((/* implicit */long long int) (unsigned short)25559);
                                arr_40 [i_12] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) max((((/* implicit */unsigned int) -1244242240)), (3604471694U)))), ((~(-140408424183082447LL))))), (var_17)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
