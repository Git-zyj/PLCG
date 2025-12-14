/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99462
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
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */unsigned short) -11297855);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) ((unsigned char) (unsigned short)8415));
                        var_16 &= ((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1] [i_3] [i_3 - 2] [i_1]));
                        var_17 = ((/* implicit */unsigned short) (-2147483647 - 1));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) 4294967276U)))))));
    }
    for (int i_4 = 3; i_4 < 16; i_4 += 2) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_5]))) : (var_12))) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)-28828)) % (((/* implicit */int) var_8))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)20))))));
            arr_15 [i_5] [i_5] &= ((/* implicit */unsigned char) ((max((((((/* implicit */int) var_7)) & (((/* implicit */int) arr_10 [i_4])))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_13)))))) & (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_11)) ^ (((/* implicit */int) min((var_9), (((/* implicit */signed char) var_2)))))))));
                        var_22 = ((/* implicit */signed char) var_0);
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (((/* implicit */int) arr_22 [6ULL] [i_7])) : (((/* implicit */int) arr_17 [i_4 - 3] [i_4 - 3] [i_4] [10])))) : (((/* implicit */int) arr_10 [i_4 - 2])))) - (((/* implicit */int) ((_Bool) arr_14 [i_4 - 2]))))))));
                            arr_24 [5] [i_5] [i_6] [i_7] [(signed char)17] [i_4] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-28))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6] [i_7] [i_6] [(short)6] [i_6])) / (2147483647)))) ? (((/* implicit */unsigned int) ((int) (unsigned short)0))) : (((((/* implicit */_Bool) (signed char)-116)) ? (var_12) : (((/* implicit */unsigned int) arr_18 [i_6] [i_7] [i_7]))))))), (max((((/* implicit */long long int) 869469804U)), (-7801233933178250602LL)))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [i_4])))) + (((unsigned int) arr_20 [i_4] [(signed char)13] [i_6] [i_7] [i_4]))))));
                            var_26 *= ((/* implicit */unsigned short) var_6);
                        }
                        for (short i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_4] [i_4 - 2] [i_4 - 3] [i_5])) ? (((/* implicit */int) arr_20 [i_5] [(signed char)12] [i_4 - 1] [i_4 + 3] [i_5])) : (((/* implicit */int) (signed char)-98))))) ? (arr_23 [i_10 + 1] [i_4 - 2] [i_4] [i_4 - 2] [i_4 + 2] [i_4 + 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_4 + 2] [i_4 + 3] [i_4 - 2] [i_5])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8)))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_10 - 2] [i_7] [(unsigned short)13] [i_5] [i_4] [i_4])) ? (((/* implicit */long long int) max((var_0), (((/* implicit */int) var_11))))) : (((long long int) arr_12 [i_4] [i_4]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-39)))))));
                            arr_29 [i_4 - 1] [i_4] [i_5] [i_4] [i_4] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_10 [i_4])) * (((/* implicit */int) (unsigned short)65515)))))) ? (((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6]))) | (var_6))) : (max((var_10), (((/* implicit */long long int) (signed char)-116)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        }
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-23)) || (arr_21 [i_11] [i_7] [i_5] [i_4 + 1] [i_4 - 2])))), (min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_12))))), (((((/* implicit */_Bool) (unsigned short)37087)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_4] [i_5] [i_5] [i_4] [i_11]))) : (3245474593939580068ULL)))))));
                            var_30 = ((/* implicit */signed char) ((unsigned short) (signed char)-23));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((((((/* implicit */long long int) (+(49994274)))) | (((long long int) 1092968904)))), (((/* implicit */long long int) (+(var_1)))))))));
                            arr_33 [i_11] [i_4] [i_6] [i_6] [i_4] [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_10 [i_7])) && (((/* implicit */_Bool) (unsigned short)65529)))))) ? (((/* implicit */int) (unsigned short)58260)) : ((+(((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)7)))))))));
                        }
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 1] [i_5] [i_5] [i_4]))) : (var_12)));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (~(((((/* implicit */int) arr_17 [i_4] [i_4] [i_5] [i_5])) | (-11297842))))))));
        }
    }
    var_34 = ((/* implicit */unsigned char) max((min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43)) ? (-1798914358) : (((/* implicit */int) var_13))))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned short)65511)) * (((/* implicit */int) (signed char)22))))))));
}
