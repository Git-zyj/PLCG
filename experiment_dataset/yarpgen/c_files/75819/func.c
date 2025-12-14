/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75819
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))) % (((((/* implicit */_Bool) (short)32767)) ? (var_11) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_2 [15LL]) : (((/* implicit */int) (unsigned char)20))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_1] [(signed char)4] [(_Bool)1] [i_1])) : (var_2)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3681535141U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3681535141U))))) : ((~(((/* implicit */int) var_13))))));
                            var_19 ^= var_11;
                        }
                        arr_17 [i_0] [i_1] = ((/* implicit */signed char) ((((((unsigned int) var_3)) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned char)53))))))));
                        arr_18 [i_0] [i_1] [(_Bool)1] [22LL] = ((/* implicit */unsigned char) 3681535166U);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            arr_21 [i_3] [i_3] [(_Bool)1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (min((var_8), (((/* implicit */long long int) arr_13 [i_1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))))));
                            var_20 -= ((/* implicit */unsigned int) var_5);
                            var_21 = ((/* implicit */_Bool) arr_2 [i_5]);
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [6LL] [i_3] [i_2]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_34 [i_6] [(unsigned char)0] [i_8] [i_9] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)-101)) % (arr_11 [13LL]))));
                        arr_35 [i_6] [i_7] [i_8] [i_6] = var_14;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                for (unsigned int i_11 = 2; i_11 < 22; i_11 += 3) 
                {
                    {
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_7] [i_11 + 1] [i_11] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_6] [i_7]))) : (arr_16 [i_11 - 1] [i_11 - 2] [i_11 - 1] [(signed char)6] [i_11 - 1])));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_39 [i_6]))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned char) (signed char)100);
                            var_26 = (~((-(((/* implicit */int) arr_5 [i_7] [i_7] [i_11] [i_12])))));
                            arr_45 [i_6] [i_10] [i_7] [i_12] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) ((long long int) -8338660976516476430LL)))));
                        }
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7] [i_11] [(unsigned short)20] [i_7] [i_7] [i_7]))) : (((((/* implicit */unsigned long long int) 2147483647)) - (var_11)))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 2147483647)) ? (var_10) : (((/* implicit */long long int) arr_11 [i_6])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) arr_40 [i_6] [i_6] [i_7] [i_7])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 4; i_13 < 22; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    {
                        var_29 ^= ((/* implicit */long long int) var_6);
                        var_30 = ((/* implicit */unsigned char) (-(((arr_50 [i_14]) ? (((/* implicit */int) arr_40 [i_15] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
            arr_54 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12889)) & (((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned long long int) 16U)) + (arr_46 [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37435)))));
            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_13 - 2] [i_13 - 4] [i_13 + 1]))));
        }
        arr_55 [i_6] = ((/* implicit */int) (+((-((-(var_11)))))));
    }
    var_32 = ((/* implicit */unsigned long long int) var_0);
}
