/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61713
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
    var_18 &= ((/* implicit */signed char) var_14);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [(signed char)6] [i_3] [i_3] [i_4] [(unsigned short)6] [(unsigned char)2] &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1093116226U)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)9464))))))) || (((/* implicit */_Bool) var_13)));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) >= (var_2))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1] [i_4])))) : (((((/* implicit */_Bool) 1449190694U)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned short)9434)))))) : (((((/* implicit */_Bool) (short)19190)) ? (((/* implicit */int) (unsigned short)52840)) : (((/* implicit */int) (unsigned short)9451))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_2))))))), (arr_6 [i_0] [i_0])));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned short) arr_6 [i_2 + 2] [i_2 + 2])))));
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])))) ? ((~(((/* implicit */int) (unsigned short)52840)))) : ((-(((/* implicit */int) arr_11 [i_2 + 3]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [9LL])) || (((/* implicit */_Bool) var_14))))) - (((/* implicit */int) arr_6 [(_Bool)1] [i_0]))));
    }
    for (unsigned short i_5 = 4; i_5 < 9; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_5 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) : (arr_5 [i_5 + 1] [1U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) (signed char)-108)))))) : (((unsigned long long int) arr_5 [i_5 - 3] [i_5 - 3]))));
        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65172)) + (((((/* implicit */int) arr_6 [i_5] [i_5 + 2])) - (((/* implicit */int) var_9))))));
    }
    for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_6 + 1] [i_7 + 1])) != (((/* implicit */int) arr_10 [i_6 - 1] [i_7 + 1] [i_8 - 2] [i_9 + 1])))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_9 [i_6 - 1] [i_6] [i_6] [i_6 - 3]))));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)23256)) ? (((/* implicit */int) var_4)) : (1932239105))) % (((/* implicit */int) var_0))));
        }
        arr_27 [i_6 - 2] [i_6] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_9 [i_6 - 2] [i_6 - 1] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)52895)))), (((((/* implicit */_Bool) 879053275)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_9 [i_6 - 2] [i_6] [i_6] [i_6]))))));
    }
    var_29 -= ((/* implicit */unsigned char) var_6);
}
