/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94454
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1056683580)))))));
                var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)55)), (-1471913201)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [17] [(signed char)6]);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 2147483635)), (var_17))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1471913211))))))) ? ((((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [1LL] [i_3])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_14)), (arr_1 [(_Bool)1])))) : (((var_16) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (281474976694272LL))))) : (((/* implicit */long long int) ((1471913226) + (-1739224153))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) + (arr_6 [i_4] [i_4])))) ^ (var_3)))) ? (((((/* implicit */_Bool) arr_4 [i_4])) ? (((-1471913199) + (arr_2 [i_4]))) : (((/* implicit */int) var_18)))) : (arr_2 [(_Bool)1])));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (unsigned int i_7 = 4; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */long long int) arr_15 [4LL]);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((long long int) 1739224152))))) ? (var_17) : (((/* implicit */unsigned long long int) var_8))));
                        arr_23 [i_4] [i_7] = ((/* implicit */unsigned char) ((int) var_8));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (max((var_11), (((((/* implicit */_Bool) 9062155876644977973LL)) ? (0ULL) : (var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43717)))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 4; i_8 < 8; i_8 += 3) 
    {
        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            {
                arr_28 [i_9] [i_9] [i_9] = var_5;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        {
                            arr_34 [(unsigned char)4] [(unsigned char)4] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) ((signed char) ((short) var_1)));
                            var_26 &= 4294967288U;
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 2147483635))));
                            var_28 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_30 [i_8] [i_9]) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [i_8 - 3] [i_9] [i_9])) : (((/* implicit */int) var_14)))) : (arr_0 [i_8 + 1])))), (max((5161526987948745807ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_5)))))))));
            }
        } 
    } 
}
