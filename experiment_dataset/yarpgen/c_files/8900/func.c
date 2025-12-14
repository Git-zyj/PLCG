/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8900
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_7)))))) ? (((/* implicit */int) (unsigned short)16988)) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_6 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 - 1]))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) (unsigned short)57526))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_11);
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        arr_18 [i_5] [i_4] [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_6] [i_5] [i_3])) >= (((/* implicit */int) arr_17 [i_4] [i_4] [i_4 + 1] [i_4 - 1]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)64848)) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_5] [i_6])) : (((((/* implicit */int) arr_10 [i_5] [i_3])) & (((/* implicit */int) var_1))))));
                            var_19 = (unsigned short)52474;
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_5] [i_7])) ? (var_2) : (((/* implicit */int) (short)-24754))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_3] [i_4] [i_3] [i_6] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)15862)))) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) - (9999)))))));
                            arr_23 [i_3] [i_3] [i_5] [i_6 + 1] [i_6 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62397)) <= (-1271795661)));
                        }
                        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_3])) & (((/* implicit */int) arr_26 [i_8] [i_6] [i_5] [i_3] [i_4] [i_3] [i_3])))))));
                            arr_27 [i_4] [i_4] [i_5] [i_6] [i_8] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8 - 1]))) > (arr_11 [i_6 + 1] [i_6])));
                        }
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            arr_30 [i_4 + 1] [i_4 + 1] = ((/* implicit */long long int) (((+(((/* implicit */int) var_7)))) >= (((((/* implicit */_Bool) (short)23846)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-4079))))));
                            arr_31 [i_6] [i_6] [i_5] [i_4 + 1] [i_3] = ((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_5] [i_6] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_5]))) : (var_3));
                            arr_32 [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)127))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_36 [i_6] [i_6 - 1] [i_4] [i_6 - 1] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                            var_22 ^= ((/* implicit */int) arr_11 [i_6] [i_5]);
                            var_23 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_10 [i_10] [i_3])) + (2147483647))) >> (((var_3) + (9058805745538335432LL))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_5] [i_6 + 2] [i_5])))))));
                        }
                    }
                    var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((-1570312286) & (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3]))))) + (arr_11 [i_5] [i_4 + 1])));
                }
            } 
        } 
        arr_37 [i_3] = ((/* implicit */int) var_12);
        arr_38 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) + (arr_16 [i_3] [i_3] [i_3] [i_3]))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    var_25 -= ((/* implicit */unsigned char) ((((min((134201344), (((/* implicit */int) (unsigned char)63)))) + (((/* implicit */int) (short)-32201)))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (short)8188))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)31)))) : (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) (unsigned char)170)) : (var_11)))))));
    var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (7) : (((/* implicit */int) var_4)))))))), (max((((/* implicit */long long int) (unsigned char)54)), (-8216524459886511936LL)))));
}
