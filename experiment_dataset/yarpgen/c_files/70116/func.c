/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70116
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
    var_12 -= var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((~(arr_3 [i_0] [i_0] [i_0]))) != (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) ((1625020098U) < (((/* implicit */unsigned int) arr_3 [i_1 + 3] [i_1 + 3] [i_0])))))))));
                arr_6 [i_0] [15U] [i_1] = ((/* implicit */unsigned char) 17890345645376322510ULL);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((short) var_2));
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned char) (_Bool)1))))), (max((17890345645376322510ULL), (var_9))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (short)(-32767 - 1)))))) == (((/* implicit */int) min(((short)2751), (((/* implicit */short) var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_13 [i_3 + 4] [i_2 - 1])))) ? (max((((/* implicit */long long int) arr_7 [i_2 - 3])), (arr_13 [i_3 + 2] [i_2 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1])) == (((/* implicit */int) arr_7 [i_2 - 2]))))))));
                        var_16 ^= ((/* implicit */unsigned short) max(((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])))))), (556398428333229105ULL)));
                        arr_15 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [0LL])), (var_0)))) ? (((/* implicit */int) ((arr_8 [i_3] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : ((~(var_0))))))));
                        var_17 ^= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (short)-10120)))), ((!(((/* implicit */_Bool) (unsigned char)124))))));
                        arr_16 [i_4] |= ((/* implicit */_Bool) ((((unsigned long long int) arr_8 [i_2] [i_3 + 4])) << ((((+(((/* implicit */int) arr_11 [i_5 + 1] [i_4] [i_3 + 1] [i_2 - 3])))) - (19901)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_13 [i_2 - 1] [i_3]), (((/* implicit */long long int) (unsigned char)108))))) || (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_4] [i_6] [i_6] [i_6]))) == (arr_8 [(unsigned short)0] [i_4]))))), ((!(((_Bool) (short)258))))));
                                var_19 = ((/* implicit */unsigned short) arr_8 [(unsigned char)3] [(unsigned char)3]);
                                arr_22 [i_2 - 1] [i_7] [i_2] [i_2 - 3] [(signed char)5] = ((/* implicit */short) (unsigned char)78);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
