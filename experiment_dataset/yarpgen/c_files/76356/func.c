/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76356
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (signed char)106);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) (~(arr_1 [i_1 - 2] [i_1 - 3])));
            arr_7 [0ULL] [i_1] = ((/* implicit */signed char) var_2);
            arr_8 [i_0] [i_1] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33937))) : (2415375094540436588LL)))));
            var_18 = ((/* implicit */short) (unsigned short)62726);
        }
        for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 3])))))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)58)))))));
        }
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-103)) ? (((((/* implicit */_Bool) (unsigned short)12757)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_11 [i_0] [i_3]))))) : (((((/* implicit */_Bool) var_15)) ? (9615153274384006353ULL) : (((/* implicit */unsigned long long int) -1347180645436149614LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-7)), (arr_5 [i_0] [i_3] [i_0])))))));
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 1])) >> (((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 1]))))) + (((var_6) & (arr_1 [i_3 + 1] [i_3 - 2])))));
            var_21 = ((/* implicit */unsigned short) var_6);
        }
        arr_15 [i_0] [i_0] = var_12;
        arr_16 [(unsigned short)7] [3ULL] = ((/* implicit */unsigned char) (+(var_15)));
    }
    for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 22; i_5 += 3) 
        {
            for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) var_12);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (unsigned short)48108))));
                        var_24 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_5)))));
                    }
                } 
            } 
        } 
        var_25 ^= ((unsigned short) (~(1050853150042259741ULL)));
    }
    var_26 *= ((unsigned short) (-((-(((/* implicit */int) var_0))))));
    var_27 = ((/* implicit */signed char) min((((((/* implicit */int) var_9)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))));
}
