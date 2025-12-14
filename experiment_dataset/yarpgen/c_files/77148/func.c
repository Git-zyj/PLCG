/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77148
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_14))));
    var_20 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1 + 3] [i_2 + 1] [i_0] [i_3] = ((/* implicit */signed char) (short)-8643);
                        var_21 = ((/* implicit */long long int) min((190356345U), (min((var_14), (min((var_14), (((/* implicit */unsigned int) arr_3 [i_0] [i_3]))))))));
                    }
                } 
            } 
        } 
        var_22 = ((short) (signed char)-96);
        var_23 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), (max(((short)-8647), (((/* implicit */short) (unsigned char)255))))));
        var_24 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) (short)-151);
                        arr_22 [i_4] [(unsigned char)0] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_4]))));
                        arr_23 [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_4]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_10] [(short)10])))))))));
                        arr_31 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_17);
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 4246590530623413710LL)) ? (((/* implicit */unsigned int) -1990305013)) : (var_11)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (unsigned char)156);
                        arr_37 [i_4] [i_4] [i_4] [(signed char)5] = ((/* implicit */signed char) arr_34 [i_8] [i_8] [i_11] [i_12] [i_11 + 3]);
                    }
                } 
            } 
            var_29 = ((/* implicit */short) arr_20 [i_4] [i_4] [i_8] [i_8]);
        }
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_4]))));
            var_31 += ((/* implicit */long long int) (-(arr_30 [i_4] [i_4])));
            var_32 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_13] [i_13] [i_13]))) : (var_0)));
            var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3827911983772547244ULL)))))) : (arr_28 [i_4] [i_4] [(unsigned char)8] [i_4])));
        }
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_4])))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_44 [i_14] = ((/* implicit */long long int) min((var_5), (arr_24 [i_14] [i_14])));
        var_35 = ((int) (!(((/* implicit */_Bool) 1841614887))));
    }
    var_36 |= var_7;
    var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_6)), (((unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14851))) : (12869823737917964119ULL))))));
}
