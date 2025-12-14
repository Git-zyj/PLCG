/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78959
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((5703301443443313335LL), (((/* implicit */long long int) var_14))));
                    var_17 ^= ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
    var_18 = ((int) var_13);
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))));
        arr_9 [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (arr_3 [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2081998770)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11)))) ? (((unsigned int) var_13)) : (((((/* implicit */_Bool) 258048)) ? (var_9) : (var_9))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3]))))) : (((/* implicit */int) arr_12 [i_3] [i_3]))));
                    var_21 += ((((/* implicit */_Bool) max(((unsigned char)152), (((/* implicit */unsigned char) arr_0 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)32767)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)94))))) : (arr_5 [i_3] [(signed char)15] [i_5] [i_3]))));
                    arr_17 [i_3] [(unsigned char)10] = ((/* implicit */unsigned char) ((((unsigned long long int) ((signed char) var_15))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) var_4)))))) : (var_7))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((min((var_1), (((/* implicit */unsigned long long int) ((long long int) var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (arr_7 [10U]))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned long long int) max((arr_4 [(_Bool)1] [(signed char)15]), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3]))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) ((signed char) (-2147483647 - 1)));
                        arr_27 [i_8] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 2081998770)), (arr_26 [i_6] [i_7] [i_6] [i_7] [i_7 + 1] [i_7])))), (((((/* implicit */_Bool) arr_5 [i_6] [i_7 + 1] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (8632023667935717224ULL)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) 2081998768))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_26 = ((/* implicit */int) var_5);
        arr_30 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (max((arr_6 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_19 [i_10]))))));
    }
    var_27 = ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
        {
            {
                arr_37 [i_12] [i_12] [i_12] = ((/* implicit */long long int) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 4294967295U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (var_4)))))))));
                var_28 = ((/* implicit */long long int) ((unsigned int) (-(var_7))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    var_29 = ((/* implicit */short) var_10);
                    var_30 = ((/* implicit */unsigned long long int) ((arr_3 [i_12 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_12 - 1] [i_13])))));
                }
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    arr_43 [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_11])) || (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((arr_19 [i_11]), (2802915531U)))) : ((+(var_5)))))));
                    var_31 = ((/* implicit */signed char) -4302291736024361898LL);
                    var_32 ^= ((/* implicit */short) (-(((/* implicit */int) ((_Bool) min((var_4), (((/* implicit */int) var_15))))))));
                }
            }
        } 
    } 
}
