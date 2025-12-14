/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71391
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37736)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) != (((/* implicit */int) ((signed char) 10U)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)37736)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_16 [i_2] [3U] [i_3] [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_3 + 1] [i_3 + 1]) ^ (((/* implicit */int) ((arr_10 [i_0]) > (var_1))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)37726)) ? (((/* implicit */int) (short)3894)) : (((/* implicit */int) (signed char)-112))));
                            arr_17 [(unsigned short)7] [0] [i_2] [i_3] [i_2] [i_5] [0ULL] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)200)) > (((/* implicit */int) (unsigned char)130)))) ? (((/* implicit */int) arr_13 [i_0] [i_3 + 1] [(short)2] [i_4] [i_5])) : (((/* implicit */int) (unsigned short)37729))));
                        }
                        arr_18 [(unsigned short)4] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned char) 2304282278U);
                        arr_19 [i_0] [i_2] [i_3] [i_4] [(signed char)8] [0LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)210)) ? (2147483647) : (((/* implicit */int) (signed char)-92))));
                    }
                } 
            } 
            var_19 -= ((/* implicit */signed char) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_20 -= (((((+(((/* implicit */int) (signed char)-20)))) + (2147483647))) >> (((((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned char)59)) - (45))))) - (52772853))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)17))));
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (unsigned short)37753)) : (((/* implicit */int) arr_21 [i_6] [i_7] [i_8]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27799))) - (12565766575505143702ULL)))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_23 *= ((/* implicit */short) (+(((/* implicit */int) var_11))));
                            var_24 = ((((((/* implicit */_Bool) 134217727ULL)) && (((/* implicit */_Bool) (unsigned short)37729)))) ? (((((/* implicit */int) arr_23 [i_0])) % (((/* implicit */int) (unsigned short)63584)))) : (((/* implicit */int) arr_29 [(unsigned char)5] [i_2] [(short)10] [i_7] [(unsigned char)5] [(_Bool)1] [i_9])));
                        }
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                        {
                            arr_33 [i_0] [i_2] [i_6] [i_2] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (unsigned short)27804)) : (((/* implicit */int) (unsigned short)58440)))))));
                        }
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0]))) != (-2503356088125063251LL))))));
                            var_27 = ((/* implicit */unsigned char) ((unsigned short) ((17546511438308696030ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                            arr_37 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((int) arr_28 [i_0] [i_2] [i_0]));
                        }
                        var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_0] [i_2] [i_6] [i_6] [i_0]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-54)) * (((/* implicit */int) (signed char)127)))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_12] [(signed char)0] [i_12] [(signed char)4])) && (((/* implicit */_Bool) var_8))))))));
        var_31 = ((/* implicit */int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) var_13)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)40541))))) : (((((/* implicit */_Bool) 900232635400855585ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_0)))));
    }
    var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */int) var_11)))) & ((~(((/* implicit */int) (signed char)(-127 - 1)))))))) | (2027280476113208305ULL)));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)60)) ? (2254458732170209934LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529)))));
    var_34 = ((/* implicit */short) var_13);
}
