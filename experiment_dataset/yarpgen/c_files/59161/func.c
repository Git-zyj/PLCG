/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59161
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_10 += ((/* implicit */unsigned char) min((max((8388604), (max((var_6), (((/* implicit */int) var_4)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-105)) < (((((/* implicit */int) (unsigned short)25728)) - (((/* implicit */int) (signed char)-103)))))))));
                            var_11 -= arr_4 [i_0] [i_0] [i_0];
                            var_12 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max(((signed char)17), (((/* implicit */signed char) var_0)))))))));
                            var_13 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 4; i_4 < 15; i_4 += 4) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) (signed char)-116)) ? (261120LL) : ((~(-261121LL)))))));
                    var_15 = ((short) (signed char)-116);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) > (arr_17 [(unsigned short)9] [i_6] [i_5 - 2] [i_4] [i_1 - 2] [i_0]))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
                {
                    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(-1597879021))))))) != (((((/* implicit */_Bool) min((1762088951), (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_19 [i_1 - 3])) : (((/* implicit */int) (short)-7505))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7 + 2] [i_7] [i_7 - 2] [i_1 - 2]))))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)214)) || (((/* implicit */_Bool) 9806406686978553696ULL)))))));
                }
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)107)) <= (((/* implicit */int) (signed char)120))))))) / ((+(-1597879021)))));
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    for (unsigned char i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        for (short i_10 = 3; i_10 < 17; i_10 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_10 - 3] [i_0] [i_8] [i_1] [i_0])) || (((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [i_0] [(short)14] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))))))), (((((/* implicit */int) arr_23 [i_1 - 2])) - (((/* implicit */int) (signed char)-116))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) - (max((((/* implicit */unsigned int) ((unsigned short) var_9))), (max((((/* implicit */unsigned int) (signed char)69)), (3287875020U)))))));
                                var_22 = ((/* implicit */unsigned int) ((short) (+(((((/* implicit */_Bool) (unsigned short)43157)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2163))) : (575012628U))))));
                                arr_29 [i_10] [0ULL] [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_10 + 2] [i_10] [i_10 + 2] [i_10] [i_10])) / (((/* implicit */int) (signed char)-2))))) ? (((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max(((unsigned short)42600), ((unsigned short)28804))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_5);
}
