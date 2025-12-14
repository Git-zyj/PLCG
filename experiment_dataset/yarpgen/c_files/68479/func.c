/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68479
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_0])) < (((/* implicit */int) arr_2 [i_1] [i_1]))));
            var_22 &= var_15;
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (~(((arr_4 [i_2]) ? (442466913029227000LL) : (((/* implicit */long long int) var_14))))));
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_13)))));
            var_25 = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_26 = ((/* implicit */signed char) (!(var_11)));
                var_27 = (short)-1;
                var_28 = ((/* implicit */_Bool) ((long long int) ((int) arr_4 [i_0])));
            }
            for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [6U]))) * (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_4]))) : (-6173952163317560998LL)))));
            }
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */long long int) ((unsigned char) ((short) arr_2 [i_0] [i_5 - 1])));
                var_32 = ((/* implicit */signed char) ((long long int) arr_0 [i_5 + 1]));
                var_33 = arr_0 [i_0];
            }
        }
        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2031616U)) ? (((/* implicit */int) (unsigned char)59)) : (arr_9 [i_6 + 1] [i_0] [i_6 - 2])));
            var_35 = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */int) (short)-18755)) : (((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 2] [i_6 - 1]))));
        }
        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_36 -= ((/* implicit */unsigned int) var_18);
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_19))) ? (((/* implicit */int) arr_18 [7U] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (_Bool)1))));
        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((long long int) (-(((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((unsigned int) arr_4 [i_8]))))))));
    }
    var_42 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) var_2))))))), (var_9)));
    /* LoopNest 2 */
    for (long long int i_9 = 3; i_9 < 23; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            {
                var_43 = ((/* implicit */unsigned char) arr_26 [i_9 - 2] [i_9]);
                var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)61))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            {
                var_45 = ((/* implicit */long long int) arr_30 [i_11] [i_12] [i_11]);
                var_46 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)43)) && (((/* implicit */_Bool) arr_22 [i_11] [i_12])))) ? (((/* implicit */int) min((arr_22 [i_11] [i_11]), (arr_22 [i_11] [i_12])))) : (((/* implicit */int) arr_22 [i_11] [i_11]))));
                var_47 = ((/* implicit */int) var_5);
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned int i_14 = 3; i_14 < 11; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 2) 
                        {
                            {
                                var_48 = (~(((/* implicit */int) (unsigned char)212)));
                                var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_31 [i_14 - 1] [i_14 + 2] [i_14 - 3] [i_14]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) | (var_7)));
                                var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) 7U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) var_16)));
}
