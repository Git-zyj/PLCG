/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82540
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) var_3)) | (arr_1 [i_0] [(signed char)19])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13476))) : (min((((((/* implicit */_Bool) (unsigned char)12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))), (min((var_7), (arr_0 [i_0] [i_0])))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned char)121)))))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned long long int) (short)-18192))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)121)), (var_9))))) : (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_1))))))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [7ULL])) ? (min((arr_0 [19U] [3]), (((/* implicit */unsigned int) (unsigned char)135)))) : (var_7)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) arr_1 [5U] [10ULL]);
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [(unsigned char)2]);
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)127)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))))) < ((-(var_8)))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */short) (signed char)-127);
            var_19 = ((/* implicit */signed char) var_7);
            var_20 = ((/* implicit */signed char) (-(arr_0 [i_1] [4])));
        }
        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            var_21 = (~(var_6));
            /* LoopSeq 2 */
            for (int i_5 = 3; i_5 < 15; i_5 += 4) 
            {
                var_22 &= ((/* implicit */unsigned int) var_10);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) var_4)))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)));
            }
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_4]);
                var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [(_Bool)1] [12U] [i_1])) ? (var_8) : (((/* implicit */unsigned int) var_4))))));
            }
        }
        var_27 = ((/* implicit */unsigned char) ((((int) (signed char)-104)) < (((/* implicit */int) ((((/* implicit */_Bool) -1517630035)) || (((/* implicit */_Bool) -1)))))));
        var_28 -= ((/* implicit */long long int) arr_2 [i_1]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        var_29 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)-18371)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))));
        arr_21 [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_7] [(signed char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1))) << (((-1296132599) + (1296132601)))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_30 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) max(((unsigned char)135), (((/* implicit */unsigned char) arr_22 [i_8]))))) >= (1517630018))))));
        var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */unsigned int) ((int) (-(62431632))))) - ((((-(560047586U))) >> (((var_1) >> (((((/* implicit */int) arr_23 [23U])) + (28)))))))))));
    }
}
