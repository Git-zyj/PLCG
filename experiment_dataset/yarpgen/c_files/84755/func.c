/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84755
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */int) arr_3 [i_2] [3U] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)164)) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (6294)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_2])) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)65535)))) % ((~(arr_1 [i_0]))))) : (((/* implicit */unsigned int) max((arr_0 [i_2]), (((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0 - 4] [i_1] [i_2])) - (78))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_10 [i_0] [i_0 - 3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_2 [i_0] [4LL] [8U]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_3]))))) ? (((/* implicit */unsigned long long int) (-(arr_1 [i_0])))) : (arr_9 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_8 [(signed char)2] [i_3] [i_3]))));
            var_12 = ((((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) ? (arr_5 [i_0] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (min((((/* implicit */long long int) (~(var_4)))), (arr_5 [i_0] [i_3] [i_3] [i_3]))) : (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) 16281313108672358747ULL)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 3))))) * (((((/* implicit */int) var_0)) % (arr_11 [i_0] [i_0] [i_0 - 2])))))) ? ((+(14U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_12 [i_0 - 3])))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (4516821737854294582ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) min((arr_14 [i_4] [i_0]), (arr_14 [i_0] [i_0])))) : (((((/* implicit */int) arr_3 [(unsigned char)1] [i_4] [i_4])) / (arr_0 [i_0])))))) ? (((long long int) (unsigned char)133)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 2]))))));
            var_15 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)114)), (13528624306884389564ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned short)65535)))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned char)173))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) ((unsigned long long int) 2147483622));
                            arr_23 [i_5] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)76)) : (-2038574407)));
                            var_18 = (~(((/* implicit */int) var_0)));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_27 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((unsigned int) arr_5 [i_8] [i_5] [i_4] [i_0])) : (var_5)));
                            arr_28 [2] [i_4] [2] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 + 1])))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 3; i_9 < 9; i_9 += 4) 
                        {
                            var_19 -= ((((/* implicit */_Bool) (-(12442474025512693420ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_9 - 2] [i_9] [i_9]))) : (arr_25 [i_0 + 1] [i_6]));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) || (((/* implicit */_Bool) ((13935110340329693861ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) -3543647115258063016LL)) ? (((((/* implicit */int) arr_26 [i_0] [i_4] [i_5] [i_0] [i_9])) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_24 [i_0] [i_4] [i_5] [i_0] [i_0] [i_9 - 2] [i_5])))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)27811))))) ? (var_4) : ((-(((/* implicit */int) arr_14 [i_0] [i_4]))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */int) ((13913004151483357806ULL) * (((/* implicit */unsigned long long int) 1640082576U))));
            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 1])))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)4605)))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_20 [i_0])))))))));
                        var_27 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_12 [i_10])) : (((/* implicit */int) (signed char)108)))), (((/* implicit */int) ((arr_35 [i_10]) == (((/* implicit */int) (signed char)3))))))), ((((-(((/* implicit */int) (unsigned char)122)))) % (((/* implicit */int) ((signed char) (signed char)120)))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) ((((min(((-(arr_5 [i_0 - 4] [i_0] [i_10] [i_10]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)114))))))) + (9223372036854775807LL))) >> ((((-(((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_10] [i_0] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [2LL] [i_0]))))) - (18446744073709537442ULL)))));
        }
        var_29 = ((/* implicit */signed char) arr_34 [i_0 - 2]);
        var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_0]))));
    }
    var_31 = ((/* implicit */signed char) 1556922545U);
}
