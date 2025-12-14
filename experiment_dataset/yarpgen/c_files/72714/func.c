/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72714
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
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned char)13))))) : (((((/* implicit */int) (signed char)-74)) + (((/* implicit */int) arr_3 [i_0] [i_1]))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_0))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_1 [i_4]))))) : ((+(arr_6 [i_0] [i_3])))));
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_2))));
                        arr_15 [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) (signed char)68))));
                    }
                } 
            } 
            arr_16 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_2]))));
            /* LoopNest 3 */
            for (short i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])) + (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                            arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
        }
        var_20 = ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_21 &= ((/* implicit */_Bool) ((arr_20 [i_8] [i_8]) * (((/* implicit */int) arr_21 [(_Bool)0] [i_8] [i_8]))));
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) min((var_4), (((/* implicit */unsigned long long int) arr_11 [i_8] [12LL]))))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_9 + 2] [i_10])) ? ((+((+(((/* implicit */int) arr_1 [i_8])))))) : (min(((+(((/* implicit */int) var_2)))), (((((/* implicit */int) arr_32 [i_8] [i_8] [i_8])) / (arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                        var_24 = ((/* implicit */short) (~(min((arr_10 [(_Bool)1] [i_9] [i_10] [i_10]), (((/* implicit */unsigned long long int) min((arr_30 [i_8]), (((/* implicit */short) arr_1 [i_8])))))))));
                    }
                } 
            } 
        } 
        arr_37 [i_8] = (!(((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) ((unsigned short) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
    }
    var_25 = ((/* implicit */short) min((var_11), (((/* implicit */unsigned char) var_0))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_1)))))))))) : (var_12)));
}
