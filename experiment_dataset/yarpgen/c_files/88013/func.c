/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88013
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
    var_11 = ((/* implicit */unsigned short) 7065649360729892612ULL);
    var_12 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) && ((_Bool)0))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_1)))))))), (min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) var_10))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(24U)));
    }
    var_14 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */_Bool) max((((/* implicit */long long int) ((-27789304) <= (((/* implicit */int) var_2))))), ((-(var_8)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (var_4)));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)138))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                arr_11 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) arr_6 [i_3] [i_3] [i_3]))) : (((/* implicit */int) (unsigned short)60291))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_13 [(signed char)12] [i_2] [i_3] [i_3]);
                    var_19 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_2] [i_1]);
                    var_20 += ((/* implicit */unsigned long long int) var_1);
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_18 [i_3] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_10 [i_5] [i_3] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)65535))));
                    var_21 = ((/* implicit */long long int) ((11288076885560215057ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26020)))));
                    arr_19 [i_1] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)7);
                }
            }
            arr_20 [i_1] [12LL] = ((/* implicit */unsigned short) var_3);
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned short)24678))));
            arr_21 [i_1] [i_1] |= ((/* implicit */unsigned short) (unsigned char)243);
        }
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 = arr_26 [i_6] [i_6] [i_7];
            var_24 += ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)47332)));
            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_7] [(signed char)10] [i_6]))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_13 [(short)3] [i_8] [(unsigned char)0] [i_10]) : (((((/* implicit */_Bool) arr_9 [i_10] [i_8] [i_6])) ? (11991668661874037380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_10])), (min((var_4), (((/* implicit */unsigned long long int) arr_23 [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_8] [i_10])))))))));
                        var_27 += ((/* implicit */unsigned long long int) 1633144777);
                    }
                } 
            } 
        } 
    }
}
