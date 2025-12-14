/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98040
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46528)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)219))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((4112612048U) >> (((((/* implicit */int) var_5)) - (34))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 2] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_1] [i_2 + 1]))))))))));
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) var_13);
                    var_16 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (+(arr_10 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])));
                        arr_13 [i_3] [i_1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14))));
                    }
                }
                for (int i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) var_14))));
                        var_19 = ((/* implicit */long long int) max(((unsigned char)78), (arr_19 [i_0])));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [i_1] [i_0] [i_4 - 3] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_1] [i_0] [i_4 - 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) ^ (arr_10 [i_0] [i_5] [i_5 + 1] [i_4 - 2] [i_5 - 1])))) : ((+(16ULL)))));
                        var_21 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_4] [i_5])) && (((/* implicit */_Bool) var_4)))), (((_Bool) arr_20 [i_0] [i_1] [i_1] [i_5 - 1])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-2920)) : (((/* implicit */int) arr_20 [i_5] [i_0] [i_1] [i_0])))))))));
                        arr_21 [i_1] [i_4] [i_1] [i_5 - 2] = max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4]))))) ? (min((var_4), (((/* implicit */unsigned long long int) (unsigned char)148)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)22990)) < (((/* implicit */int) var_5)))))))), (max((max((((/* implicit */unsigned long long int) var_6)), (14202363844228229602ULL))), (((unsigned long long int) arr_3 [i_5 + 1] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                        arr_26 [i_0] [i_0] [i_1] [i_0] [i_4] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                        var_23 += ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) var_10))));
                        var_24 = ((/* implicit */long long int) var_7);
                    }
                    arr_27 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 3]);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)95)) == (((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (2394729228508689708ULL)))))) ? ((~(((unsigned int) (unsigned short)32736)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (((short) (signed char)(-127 - 1)))))))));
    var_26 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (int i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                {
                    arr_38 [i_7] [i_9] [i_7] [i_9] = ((unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_7])))))));
                    var_27 = ((/* implicit */signed char) var_13);
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-32504)), (((var_3) >> ((((~(((/* implicit */int) arr_37 [i_7] [i_9] [i_7] [i_9 + 1])))) + (3330)))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) var_13);
}
